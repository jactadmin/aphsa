<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page while offline.
 *
 * All the available variables are mirrored in html.tpl.php and page.tpl.php.
 * Some may be blank but they are provided for consistency.
 *
 * @see template_preprocess()
 * @see template_preprocess_maintenance_page()
 *
 * @ingroup themeable
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">

<style>
  html, body {
    background-color: #E4F2FF!important;
  }
</style>

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">

<head>
  <title><?php print $head_title; ?></title>
  <?php print $head; ?>
  <?php print $styles; ?>
  <?php print $scripts; ?>
</head>
<body class="<?php print $classes; ?>">
 
    <header id="navbar" role="banner">
      <div class="container"  style="text-align:center;">
        <div class="navbar-header" style="float:none; display:inline-block;">
          <div id="logo-title">
    
            <?php if (!empty($logo)): ?>
              <a href="<?php print $base_path; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
                <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" style="max-width: 100%; height: auto;"/>
              </a>
            <?php endif; ?>
    
          </div> <!-- /logo-title -->
    
        </div> <!-- /header -->
      </div>
    </header>
    
    
    <div class="main-container container">
      <div class="row">
        <section class="col-xs-12" style="text-align:center;">
          <img src="<?php print $base_path ?>sites/all/themes/accesspoint/images/maint-wrench.png" style="max-width: 80%; height: auto;"/>
            <?php if (!empty($title)): ?><h1 class="title" id="page-title" style="font-weight: 600;">We're making things better</h1><?php endif; ?>
            <?php if (!empty($messages)): print $messages; endif; ?>
            <div id="content-content" class="clearfix" style="max-width:406px; margin: 0 auto;">
              <?php print $content; ?>
            </div> <!-- /content-content -->
        </section>  

      </div>
    </div> <!-- /container -->

  </div> <!-- /page -->

</body>
</html>
