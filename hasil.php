<?php
session_start();

if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $username = $_POST['username'];
    $password = $_POST['password'];
    $captcha = $_POST['captcha'];

    // Check CAPTCHA
    if ($captcha !== $_SESSION['captcha']) {
        echo "CAPTCHA tidak cocok. Silakan coba lagi.";
        exit();
    }

    // Contoh username dan password
    $validUsername = 'haikal';
    $validPassword = '123';

    // Lakukan pengecekan login
    if ($username === $validUsername && $password === $validPassword) {
        // Start a session and set a login status
        $_SESSION['loggedin'] = true;
        $_SESSION['username'] = $username;

        // Redirect to the dashboard
        header("Location: dashboard.php");
        exit();
    } else {
        echo "Username atau password salah.";
    }
} else {
    header("Location: index.php");
    exit();
}
?>
