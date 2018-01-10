#include<stdio.h>
main()
{
    FILE *fp;
    char ch;
    int noc,nob,not,nol;
    fp=fopen("d:\myfile.txt","r");
    if(fp==NULL)
    {
        printf("cannot open file");
        exit(0);
    }

    else
    {


                while(1)
                {
                    ch=fgetc(fp);

                    if(ch==EOF)
                        break;

                        noc++;
                        printf("%c",ch);
                    if (ch==' ')  nob++;
                    if (ch=='\t')  not++;
                    if (ch=='\n')  nol++;
                }
           printf("\nThe no of characters is    :%d",noc);
        printf("\nThe no of blanks is      :%d",nob);
        printf("\nThe no of tabs is      :%d",not);
        printf("\nThe no of lines is      :%d",nol);

    }

    fclose(fp);
}
