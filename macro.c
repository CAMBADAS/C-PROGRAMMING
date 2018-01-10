#include<stdio.h>
#include<conio.h>
#define PI 3.14
#define AND &&
#define COMP (5<10 AND 5>3)
#define AREA(x){PI*x*x}
#define PERIM(x){2*PI*x}

main()
{
    int r=5;
    printf("%f\n",(PI*r*r));

    if(COMP)
        printf("  big\n");
    else
        printf("small");

        float a=AREA(r);
        printf("the area is %f\n",a);

        int p=100;
        int b=PERIM(p);
        printf("the perim is %d\n",b);
 }

