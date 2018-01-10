#include<stdio.h>
main()
{
    FILE *fs,*ft;
    char ch;

    fs=fopen("source.txt","r");
    if(fs==NULL)
    {
        printf("cannot open file");
        exit(0);
    }
    ft=fopen("target.txt","w");
    if(ft==NULL)
    {
        printf("cannot open file");
        exit(0);
    }
    while(1)
    {
        ch=fgetc(fs);
        if(ch==EOF)
            break;
        else
            fputc(ch,ft);

    }

    printf("file written sucesfully");

    fclose(fs);
    fclose(ft);

}
