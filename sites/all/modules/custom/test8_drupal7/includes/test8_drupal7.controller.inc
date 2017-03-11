<?php

/**
 * @file
 * Contains controller class for test8_drupal7 entity.
 */

/**
 * {@inheritdoc}
 */
class Test8Drupal7Controller extends EntityAPIController {

  /**
   * {@inheritdoc}
   */
  public function create(array $values = array()) {
    $default_values = array(
      'id'          => 0,
      'title'       => '',
      'description' => '',
      'url'         => '',
      'created'     => REQUEST_TIME,
      'updated'     => REQUEST_TIME,
    );
    return parent::create(array_merge($default_values, $values));
  }

  /**
   * {@inheritdoc}
   */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    $entity->updated = REQUEST_TIME;
    return parent::save($entity);
  }

}
