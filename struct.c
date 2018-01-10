#include<stdio.h>
#include<conio.h>
struct stud
{
    char name[10];
    char crs[5];
    int age;
};
void main()
{
    struct stud s1;
    struct stud s2;

    strcpy(s1.name,"ronald");strcpy(s1.crs,"mpcs");s1.age=22;
    strcpy(s2.name,"rosey");strcpy(s2.crs,"mpc");s2.age=19;

    printf("\n%s",s1.name);
    printf("\n%s",s1.crs);
    printf("\n %2d",s1.age);


     printf("\n%s",s2.name);
    printf("\n%s",s2.crs);
    printf("\n %2d",s2.age);
}
