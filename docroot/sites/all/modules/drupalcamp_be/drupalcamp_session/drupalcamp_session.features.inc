<?php
/**
 * @file
 * drupalcamp_session.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalcamp_session_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
