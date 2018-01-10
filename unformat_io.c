#include<stdio.h>
#include<conio.h>
main( )
{  char  ch,c ;
 printf ( "\nPress any key to continue" ) ;
   getch( ) ;  /* will not echo the character */
 printf ( "\nType any character....1" ) ;
  c= getche( ) ;  /* will echo the character typed */
 printf ( "\nType any character....2" ) ;
   getchar( ) ;  /* will echo character, must be followed by enter key */
      printf ( "\nContinue Y/N" ) ;

      char cho=getchar();
      if (cho=='Y')
         printf ( "\nI am here" ) ;/* will echo character, must be followed by enter key */
          char nm[20],nm1[10];
            printf ( "Enter your full name:" ) ;
            scanf("%s",&nm);
            printf("\nyour  name is %s     :",nm);
            puts( "\nEnter again your full name:" ) ;
            gets(nm1);
            puts(nm1);



        }
