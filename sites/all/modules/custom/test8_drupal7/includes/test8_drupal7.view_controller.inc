<?php

/**
 * @file
 * Contains views controller class for test8_drupal7 entity.
 */

/**
 * Views controller class.
 */
class Test8Drupal7ViewsController extends EntityDefaultViewsController {

  /**
   * Edit or add extra fields to views_data().
   */
  public function views_data() {
    $data = parent::views_data();

    // Adding dates handlers for dates fields.
    $date_fields = array('created', 'updated');
    foreach ($date_fields as $key => $field_name) {
      $data['test8_drupal7'][$field_name]['field']['handler'] = 'views_handler_field_date';
      $data['test8_drupal7'][$field_name]['sort']['handler'] = 'views_handler_sort_date';
      $data['test8_drupal7'][$field_name]['filter']['handler'] = 'views_handler_filter_date';
    }

    // Entity title field.
    $data['test8_drupal7']['title'] = array(
      'title' => t('Title'),
      'help' => t('The Entity title.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'help' => t('The Entity title.'),
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
        'help' => t('The Entity title.'),
        'many to one' => TRUE,
        'empty field name' => t('Empty'),
      ),
    );

    // Entity description field.
    $data['test8_drupal7']['description'] = array(
      'title' => t('Description.'),
      'help' => t('The description associated with an entity.'),
      'field' => array(
        'handler' => 'views_handler_field_markup',
        'format' => 'filtered_html',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    );

    // Entity URL field.
    $data['test8_drupal7']['url'] = array(
      'title' => t('URL'),
      'help' => t('The URL associated with an entity.'),
      'field' => array(
        'handler' => 'views_handler_field_url',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    );

    return $data;
  }

}
