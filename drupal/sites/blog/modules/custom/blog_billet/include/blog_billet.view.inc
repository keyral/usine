<?php

function blog_billet_views() {
    $build = array();
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', 'billet') //le type de contenu
        ->propertyCondition('status', 1)
        ->propertyOrderBy('created', 'DESC')
        ->pager(10, 0);
    $result = $query->execute();
    $articles = array();
    if (isset($result['node'])) {
        $nodes = node_load_multiple(array_keys($result['node']));
        $content = entity_metadata_view_node($nodes, 'teaser');

        $build = array(
            'content' => $content,
            'pager' => array(
                '#markup' => theme('pager'),
                '#weight' => 10
            )
        );
    }
    return $build;
}