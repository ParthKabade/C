#include<stdio.h>
#include<string.h>//libc.lib

int main()
{
    char *str="Ganesh";                    
    
    while(*str != '\0')         //run loop till *str='\0'
    {
        printf("%c\n",*str);
        str++;
    }

    return 0;
}