<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "DTD/xhtml1-transitional.dtd">
<html><head><title>Title</title></head><body>
<?php
exec ('ls *html', $articles);
$i=0;
foreach ($articles as $article){
  exec ('egrep \'title|TITLE\' '.$article.'|head -1|cut -f2- -d \>|cut -f1 -d \<', $title); ?>
  <br /><a href=<? echo $article; ?>><? echo $title[$i++] ;} ?></a>
</body></html>
