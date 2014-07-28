<?php
?>
<h2>Form style two</h2>
<div style="background-color: blue">
    <form id="<?php print $form['#id']; ?>" method="<?php print $form['#method']; ?>" accept-charset="UTF-8"
          action="<?php print $form['#action']; ?>">
        <?php print render($form['name']) ?>
        <?php print render($form['surname']) ?>
        <?php print render($form['rome1']) ?>
        <?php print render($form['rome2']) ?>
        <?php print render($form['rome3']) ?>
        <?php print render($form['op']) ?>



        <!--- champs caché --->
        <?php print render($form['form_build_id']); ?>
        <?php print render($form['form_token']); ?>
        <?php print render($form['form_id']); ?>
    </form>
</div>