main( )
{  int  radius ;
    float  area, perimeter ;
 printf ( "\nEnter radius of a circle " ) ;
 scanf ( "%d", &radius ) ;
 printf("adress of area %d\n",&area);
 printf("address of rad is %d\n",&radius);
 printf("address of perim is %d\n",&perimeter);

 areaperi ( radius, &area, &perimeter ) ;
 printf ( "Area = %f\n", area ) ;
 printf ( "\nPerimeter = %f\n", perimeter ) ;
}
areaperi ( int  r, float  *a, float  *p )
{
    printf("pointer a %d\n",*a);
     *a = 3.14 * r * r ;  *p = 2 * 3.14 * r ;
     printf("value pointer a %d\n",*(&a));printf("pointer b%d\n",*p);
}
