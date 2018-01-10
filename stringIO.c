#include "stdio.h"
main( )
{
FILE *fp ;
char s[80] ;

fp = fopen ( "POEM.TXT", "w" ) ;
if ( fp == NULL )
{
puts ( "Cannot open file" ) ;
exit(0) ;
}
printf ( "\nEnter a few lines of text:\n" ) ;

while ( strlen ( gets ( s ) ) > 0 )
{
fputs ( s, fp ) ;
fputs ( "\n", fp ) ;
}
fclose ( fp ) ;
}
