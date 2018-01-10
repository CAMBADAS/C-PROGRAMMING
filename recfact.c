#include<stdio.h>
#include<conio.h>
main()
{
    int n1;
    printf("Enter the num to find fact:");
    scanf("%d",&n1);
    printf("%d",rec(n1));

}
rec ( int   n )
{  int  f ;
 if ( n == 1 )
    return ( 1 ) ;
 else
 {

    f = n * rec ( n - 1 ) ;

 }

 return ( f ) ;
 }
