<?php
session_start();

// Check if the user is logged in
if (!isset($_SESSION['loggedin']) || $_SESSION['loggedin'] !== true) {
    // If not logged in, redirect to the login page
    header("Location: index.php");
    exit();
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Dashboard</title>
    <!-- Add your CSS styles or link external stylesheets here -->
</head>
<body>
    <h1>Welcome to the Dashboard, <?php echo $_SESSION['username']; ?>!</h1>

    <!-- Your dashboard content goes here -->
    <p>This is your dashboard content. You can add various elements here.</p>

    <a href="logout.php">Logout</a> <!-- Link to logout page -->

    <!-- Add your JavaScript or external scripts here -->
</body>
</html>
