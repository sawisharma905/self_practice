#include<stdio.h>
#include<stdlib.h>
void main()
{
    char str[1000],app[1000];
    printf("enter a string");
    gets(str);

    FILE *a;

    a=fopen("abc.bin","r+");
     if(a==NULL)
      {
        printf("error!");
        exit(1);
      }
    fwrite(&str,sizeof(str),1,a);
    fread(&str,sizeof(str),1,a);
    puts(str);
    fclose(a);

   a=fopen("abc.bin","a");
    if(a==NULL)
    {
        printf("error!");
        exit(1);
    }
    fwrite(&app,sizeof(app),1,a);

    fread(&app,sizeof(app),1,a);
    puts(app);
    fclose(a);


}
