<?php
session_start();

$randomText = substr(md5(time()), 0, 5); // Generate random text for CAPTCHA
$_SESSION['captcha'] = $randomText;

$width = 100;
$height = 40;

$image = imagecreatetruecolor($width, $height);
$bgColor = imagecolorallocate($image, 255, 255, 255);
$textColor = imagecolorallocate($image, 0, 0, 0);

imagefilledrectangle($image, 0, 0, $width - 1, $height - 1, $bgColor);

// Adjust the font path according to your server
$font = 'Arial.ttf'; // Path to your font file

imagettftext($image, 20, 0, 10, 30, $textColor, $font, $randomText);

header('Content-type: image/png');
imagepng($image);
imagedestroy($image);
?>
