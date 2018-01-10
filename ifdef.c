#include<stdio.h>
#include<conio.h>
#define OKAY
//#undef OKAY
main( )
{
    #ifdef OKAY
            printf("statement 1\n") ;
            printf("statement 2\n") ;
            printf("statement 3\n") ;
    #endif
 printf("statement 4\n") ;
 printf("statement 5\n") ;

 }
