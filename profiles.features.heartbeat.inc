<?php

/**
 * Implementation of hook_heartbeat_message_info().
 */
function profiles_heartbeat_message_info() {
  $messages = array();

  // Exported heartbeat message: heartbeat_edit_node
  $messages[] = array (
    'message' => '<span class="famfam active balance-!node_type"></span>
  <a href="/!link">!firstname !lastname</a> has updated !node_type "!node_title"',
    'message_concat' => '<a href="/!link">!firstname !lastname</a> has updated %node_title%',
    'message_id' => 'heartbeat_edit_node',
    'concat_args' => 
    array (
      'type' => 'summary',
      'group_by' => 'user',
      'group_target' => 'node_title',
      'group_by_target' => '',
      'group_num_max' => '',
      'merge_separator' => ', ',
      'merge_end_separator' => ' and ',
      'roles' => 
      array (
        0 => '0',
        1 => '0',
        2 => '0',
        3 => '0',
        4 => '0',
      ),
    ),
    'description' => 'When editing a node, log the users activity',
    'perms' => '1',
    'custom' => 1,
    'variables' => 
    array (
    ),
  );

  // Exported heartbeat message: heartbeat_add_node
  $messages[] = array (
    'message' => '<span class="famfam active balance-!node_type"></span>
  <a href="/!link">!firstname !lastname</a> has added !node_type !node_title.',
    'message_concat' => '<a href="/!link">!firstname !lastname</a> has added the following !types: %node_title%.',
    'message_id' => 'heartbeat_add_node',
    'concat_args' => 
    array (
      'type' => 'summary',
      'group_by' => 'user',
      'group_target' => 'node_title',
      'group_by_target' => '',
      'group_num_max' => '',
      'merge_separator' => ', ',
      'merge_end_separator' => ' and ',
      'roles' => 
      array (
        0 => '0',
        1 => '0',
        2 => '0',
        3 => '0',
        4 => '0',
      ),
    ),
    'description' => 'User adds a node, save user activity',
    'perms' => '1',
    'custom' => 1,
    'variables' => 
    array (
    ),
  );

  // Exported heartbeat message: heartbeat_add_comment
  $messages[] = array (
    'message' => '<span class="famfam active balance-comment"></span>
  <a href="/!link">!firstname !lastname</a> replied on !title',
    'message_concat' => '!username replied on !title.',
    'message_id' => 'heartbeat_add_comment',
    'concat_args' => 
    array (
      'type' => 'single',
      'group_by' => 'none',
      'group_target' => '',
      'group_by_target' => '',
      'group_num_max' => '',
      'merge_separator' => '',
      'merge_end_separator' => '',
      'roles' => 
      array (
        0 => '0',
        1 => '0',
        2 => '0',
        3 => '0',
        4 => '0',
      ),
    ),
    'description' => 'user replied on some content',
    'perms' => '1',
    'custom' => 1,
    'variables' => 
    array (
    ),
  );

  // Exported heartbeat message: heartbeat_edit_comment
  $messages[] = array (
    'message' => '<span class="famfam active balance-comment"></span>
  !username changed his comment on !title.',
    'message_concat' => '!username changed his comment on !title several times (%times%).',
    'message_id' => 'heartbeat_edit_comment',
    'concat_args' => 
    array (
      'type' => 'count',
      'group_by' => 'none',
      'group_target' => '',
      'group_by_target' => '',
      'group_num_max' => '',
      'merge_separator' => '',
      'merge_end_separator' => '',
      'roles' => 
      array (
        0 => '0',
        1 => '0',
        2 => '0',
        3 => '0',
        4 => '0',
      ),
    ),
    'description' => 'user changed his comment',
    'perms' => '1',
    'custom' => 1,
    'variables' => 
    array (
    ),
  );

  // Exported heartbeat message: heartbeat_edit_account
  $messages[] = array (
    'message' => '<span class="famfam active balance-account"></span>
  !username\'s personal account page has been changed.',
    'message_concat' => '',
    'message_id' => 'heartbeat_edit_account',
    'concat_args' => 
    array (
      'type' => 'single',
      'group_by' => 'none',
      'group_target' => '',
      'group_by_target' => '',
      'group_num_max' => '',
      'merge_separator' => '',
      'merge_end_separator' => '',
      'roles' => 
      array (
        0 => '0',
        1 => '0',
        2 => '0',
        3 => '0',
        4 => '0',
      ),
    ),
    'description' => 'user changed his/her account',
    'perms' => '1',
    'custom' => 1,
    'variables' => 
    array (
    ),
  );

  // Exported heartbeat message: heartbeat_add_image
  $messages[] = array (
    'message' => '<span class="famfam active balance-image"></span>
  !username has added !title.<div class="images">!image</div>',
    'message_concat' => '!username has added <div class="images">%image%</div>',
    'message_id' => 'heartbeat_add_image',
    'concat_args' => 
    array (
      'type' => 'summary',
      'group_by' => 'user',
      'group_target' => 'image',
      'group_by_target' => '',
      'group_num_max' => '',
      'merge_separator' => ' ',
      'merge_end_separator' => ' ',
      'roles' => 
      array (
        0 => '0',
        1 => '0',
        2 => '0',
        3 => '0',
        4 => '0',
      ),
    ),
    'description' => 'When adding an image, log the users activity',
    'perms' => '1',
    'custom' => 1,
    'variables' => 
    array (
    ),
  );

  // Exported heartbeat message: og_become_co_admin
  $messages[] = array (
    'message' => '!user is now a coadministrator of !group.',
    'message_concat' => '%user% is now a coadministrator of !group.',
    'message_id' => 'og_become_co_admin',
    'concat_args' => 
    array (
      'type' => 'summary',
      'group_by' => 'node',
      'group_target' => 'user',
      'group_by_target' => '',
      'group_num_max' => '2',
      'merge_separator' => ', ',
      'merge_end_separator' => ' and ',
      'roles' => 
      array (
        0 => '0',
        1 => '0',
        2 => '0',
        3 => '0',
        4 => '0',
      ),
    ),
    'description' => 'Become a coadministrator of a group',
    'perms' => '1',
    'custom' => 1,
    'variables' => 
    array (
    ),
  );


  return $messages;
}
