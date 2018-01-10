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

