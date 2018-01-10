#include<stdio.h>
#include<conio.h>
main()
{
    int n,f=1,i;
    printf("Enter the num to find fact:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
        printf("%d",f);
}
