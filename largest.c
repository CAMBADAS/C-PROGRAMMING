#include<stdio.h>
int main()
{
    int i, n, lar,sm, size;
    printf ("Enter total number of size \n");
    scanf ("%d", &size);
    printf ("Enter first number \n");
    scanf ("%d", &n);
    lar = n;
    sm=n;
    for (i=1; i<= size -1 ; i++)
    {
        printf ("\n Enter another number \n");
        scanf ("%d",&n);
        if (n>lar)
        lar=n;
        if (n<sm)
        sm=n;
    }
    printf ("\n The largest number is %d", lar);
    printf ("\n The smallest number is %d", sm);
    return 0;
}
