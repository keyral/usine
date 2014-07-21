<?php
/**
 * Created by PhpStorm.
 * User: keyral
 * Date: 02/07/14
 * Time: 09:44
 */
?>
<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
<h3><?php print l($title, $node_url); ?></h3>
<?php print render($content["field_bando"]); ?>
<?php print render($content["body"]); ?>
<?php print render($content["links"]); ?>
<?php print render($content['comments']); ?>

</article>
