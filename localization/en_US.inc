<?php
// Labels used for different portions of the plugin
$labels = array();
$labels['activate'] = 'Activate';
$labels['twofactor_gauthenticator'] = '2-Factor Authentication';
$labels['code'] = 'Authentication Code';

$labels['two_step_verification_form'] = '2-Factor Authentication Code:';

$labels['secret'] = 'Secret';
$labels['qr_code'] = 'QR Code';
$labels['msg_infor'] = 'You can scan this QR code containing the 2-Factor settings using a TOTP compatible app such as 
  <b>Open Authenticator</b> ( <a href="https://play.google.com/store/apps/details?id=app.openauthenticator" target="_blank">Play Store</a> | <a href="https://apps.apple.com/us/app/open-authenticator-by-skyost/id6479272927" target="_blank">App Store</a> )
  , <b>Google Authenticator</b> ( <a href="https://play.google.com/store/apps/details?id=com.google.android.apps.authenticator2" target="_blank">Google Authenticator</a> | <a href="https://apps.apple.com/us/app/google-authenticator/id388497605" target="_blank">App Store</a> )
  , <b>Microsoft Authenticator</b> ( <a href="https://play.google.com/store/apps/details?id=com.azure.authenticator" target="_blank">Play Store</a> | <a href="https://apps.apple.com/us/app/microsoft-authenticator/id983156458" target="_blank">App Store</a> )
';

$labels['msg_help'] = '<a href="https://github.com/alexandregz/twofactor_gauthenticator/tree/master?tab=readme-ov-file#usage" target="_blank">User manual</a>';

$labels['show_secret'] = 'Show secret';
$labels['hide_secret'] = 'Hide secret';
$labels['create_secret'] = 'Create secret';

$labels['show_qr_code'] = 'Show QR Code';
$labels['hide_qr_code'] = 'Hide QR Code';

$labels['recovery_codes'] = 'Recovery codes';
$labels['show_recovery_codes'] = 'Show recovery codes';
$labels['hide_recovery_codes'] = 'Hide recovery codes';

$labels['setup_all_fields'] = 'Fill all fields (make sure you click save to store your settings)';

$labels['enrollment_dialog_title'] = '2-Factor authentication enrollment';
$labels['enrollment_dialog_msg'] = '<strong>2-Factor authentication codes</strong> are required for increased security, please configure them now.';

$labels['check_code'] = 'Check code';
$labels['code_ok'] = 'Code OK';
$labels['code_ko'] = 'Incorrect code';

$labels['dont_ask_me_30days'] = 'Don&#39;t ask me again on this computer for 30 days';

$labels['check_code_to_activate'] = 'To save, please scan the QR Code and enter the current 2-Factor code below.';

// Messages used for the different portions of the plugin
$messages = array();
$messages['successfully_saved'] = '2-Factor authentication settings saved successfully.';

