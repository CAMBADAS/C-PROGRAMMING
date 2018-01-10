#include<stdio.h>
#include<conio.h>
main( )
{
char  arr[ ] = "Bamboozled" ;
char src[]="I am das";
char trgt[20];
int  len1, len2 ;

 len1 = strlen ( arr ) ;
 len2 = strlen ( "Humpty Dumpty" ) ;
 printf ( "\nstring = %s length = %d", arr, len1 ) ;
 printf ( "\nstring = %s length = %d\n", "Humpty Dumpty", len2 ) ;

 strcpy(trgt,src);

 printf(trgt);

 }
