#include<stdio.h>
#include<conio.h>
#define TEST 23
main( )
{
    #if TEST <= 5
    printf("statement 1\n") ;
            printf("statement 2\n") ;
            printf("statement 3\n") ;
    #elif TEST <=20
     printf("statement 4\n") ;
            printf("statement 5\n") ;
            printf("statement 6\n") ;
    #else
            printf("statement 7\n") ;
            printf("statement 8\n") ;
            printf("statement 9\n") ;
    #endif }
}
