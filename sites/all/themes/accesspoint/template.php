<?php
/**
 * @file
 * template.php
 */
function accesspoint_menu_alter(&$items){
//dpm($items);
//  $items['user/%user/user-recurring-entities']['title'] = 'Premier';

}



function accesspoint_form_alter(&$form, &$form_state, $form_id){
  if ($form_id == 'user_profile_form') {
    unset($form['contact']);
 }
}

function accesspoint_preprocess_page(&$variables) {
  if (!empty($variables['node']) && !empty($variables['node']->type)) {
    $variables['theme_hook_suggestions'][] = 'page__node__' . $variables['node']->type;
  }
}

function accesspoint_preprocess_flag(&$variables) {
  if ($variables['flag']->name == "agreement") {
//     if (arg(0) == 'user') {
        $variables['theme_hook_suggestions'][] = 'flag__user_agreement';
    }
//   }
}
