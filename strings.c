#include<stdio.h>
#include<conio.h>
main()
{
   char  str1[ ] = "Hello" ;
   char  *p = "Hello" ;
   str1[5] = "Bye" ; /* error */
   p = "Bye" ; /* works */
   printf(str1);
   char c;
   for(c:str1)
   {
       printf(c);
   }

}
