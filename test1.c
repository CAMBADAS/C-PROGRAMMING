#include<stdio.h>
#include<conio.h>
main( )
{
    int sum;
    sum=add(2,3);
     printf("the sum is : %d\n",sum);
     printf("%s",wish());

}
add(int x,int y)
{
    return (x+y);
}
wish()
 {
     return "i am wish";
 }
