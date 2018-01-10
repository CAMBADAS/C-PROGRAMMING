#include<stdio.h>
#include<conio.h>
int add(int x,int y);
void main()
{
    int x=10,y=20;
    int n;
    int add(int x,int y)
    {
        return x+y;
    }
    printf("the sum is %d",add(2,3));
    scanf("%d",&n);
    fact(n);
    int fact(int n)
    {
        if(n==0 ) return 1;
        return n*fact(n-1);

    }

}
