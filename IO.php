<?php
ini_set('display_errors', 1);
ini_set('display_startup_errors', 1);
error_reporting(E_ALL);

$line = trim(fgets(STDIN));
echo $line;
$line = trim(fgets(STDIN));
echo $line;

#$f = fopen( 'php://stdin', 'r' );
#while( $line = fgets( $f ) ) {
#  echo $line;
#}
#fclose( $f );
