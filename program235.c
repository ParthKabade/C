#include<stdio.h>
#include<string.h>//libc.lib

int main()
{
    char str[]="Jay Ganesh";
    int iRet=0;

    iRet=strlen(str);       //to find the length of a string     

    printf("length of string is : %d\n",iRet);


    iRet=sizeof(str);
    printf("Size of string is : %d\n",iRet);
    return 0;
}