#include<stdio.h>
#include<string.h>              //libc.lib


int main()
{
    char *str="Ganesh";  
    int iCount=0;       

    printf("Length of string is:%lu\n",strlen(str));

    while(*str != '\0')         //run loop till *str='\0'
    {
        str++;
        iCount++;
    }

    printf("Length of string is :%d\n",iCount);

    return 0;
}