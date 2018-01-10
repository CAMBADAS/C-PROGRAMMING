#include <stdio.h>
int main( )
{
char str[100];
int i;
printf( "Enter a value :");
scanf("%s %d", str, &i);
printf( "\nYou entered: %s %d ", str, i);
while(i<=10)
{
    printf("\n%s",str[i]);
    i++;
}
return 0;
}
