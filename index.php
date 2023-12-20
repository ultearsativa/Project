<!DOCTYPE html>
<html>
<head>
    <title>Halaman Login</title>
    <link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
    <div class="login-container">
        <form action="captcha.php" method="post">
            <h2>Login</h2>
            <input type="text" name="username" placeholder="Username" required><br><br>
            <input type="password" name="password" placeholder="Password" required><br><br>
            <img src="captcha.php" alt="CAPTCHA"><br><br>
            <input type="text" name="captcha" placeholder="Enter CAPTCHA" required><br><br>
            <input type="submit" value="Login">
        </form>
    </div>
</body>
</html>
