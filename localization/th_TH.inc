<?php
// Labels used for different portions of the plugin
$labels = array();
$labels['activate'] = 'เปิดใช้งาน';
$labels['twofactor_gauthenticator'] = 'การยืนยันตัวตนแบบสองขั้นตอน';
$labels['code'] = 'รหัสยืนยันตัวตน';

$labels['two_step_verification_form'] = 'รหัสยืนยันตัวตนแบบสองขั้นตอน:';

$labels['secret'] = 'รหัสลับ';
$labels['qr_code'] = 'คิวอาร์โค้ด';
$labels['msg_infor'] = 'คุณสามารถสแกนคิวอาร์โค้ดนี้ซึ่งมีการตั้งค่า 2-Factor (TOTP) ด้วยแอปที่รองรับ TOTP เช่น
  <b>Open Authenticator</b> ( <a href="https://play.google.com/store/apps/details?id=app.openauthenticat...nticator-by-skyost/id6479272927" target="_blank">Play Store</a> | <a href="https://apps.apple.com/us/app/open-authenticator/id6479272927" target="_blank">App Store</a> )
  , <b>Google Authenticator</b> ( <a href="https://play.google.com/store/apps/details?id=com.google.android.apps.authenticator2" target="_blank">Play Store</a> | <a href="https://apps.apple.com/us/app/google-authenticator/id388497605" target="_blank">App Store</a> )
  , <b>Microsoft Authenticator</b> ( <a href="https://play.google.com/store/apps/details?id=com.azure.authenticator" target="_blank">Play Store</a> | <a href="https://apps.apple.com/us/app/microsoft-authenticator/id983156458" target="_blank">App Store</a> )
';
$labels['msg_help'] = '<a href="https://github.com/alexandregz/twofactor_gauthenticator/tree/master?tab=readme-ov-file#usage" target="_blank">User manual</a>';
$labels['show_secret'] = 'แสดงรหัสลับ';
$labels['hide_secret'] = 'ซ่อนรหัสลับ';
$labels['create_secret'] = 'สร้างรหัสลับ';
$labels['show_qr_code'] = 'แสดงคิวอาร์โค้ด';
$labels['hide_qr_code'] = 'ซ่อนคิวอาร์โค้ด';
$labels['recovery_codes'] = 'รหัสกู้คืน';
$labels['show_recovery_codes'] = 'แสดงรหัสกู้คืน';
$labels['hide_recovery_codes'] = 'ซ่อนรหัสกู้คืน';
$labels['setup_all_fields'] = 'กรอกข้อมูลให้ครบทุกช่อง (อย่าลืมกดบันทึกเพื่อจัดเก็บการตั้งค่าของคุณ)';
$labels['enrollment_dialog_title'] = 'ลงทะเบียนการยืนยันตัวตนแบบสองขั้นตอน';
$labels['enrollment_dialog_msg'] = '<strong>การยืนยันตัวตนแบบสองขั้นตอน</strong> จำเป็นเพื่อเพิ่มความปลอดภัย โปรดตั้งค่าตอนนี้';

$labels['check_code'] = 'ตรวจสอบรหัส';
$labels['code_ok'] = 'รหัสถูกต้อง';
$labels['code_ko'] = 'รหัสไม่ถูกต้อง';

$labels['dont_ask_me_30days'] = 'อย่าถามฉันอีกบนคอมพิวเตอร์เครื่องนี้เป็นเวลา 30 วัน';

$labels['check_code_to_activate'] = 'เพื่อบันทึก โปรดสแกนคิวอาร์โค้ดและกรอกรหัส 2-Factor ปัจจุบันด้านล่าง';

// Messages used for the different portions of the plugin
$messages = array();
$messages['successfully_saved'] = 'บันทึกการตั้งค่าการยืนยันตัวตนแบบสองขั้นตอนเรียบร้อยแล้ว.';
