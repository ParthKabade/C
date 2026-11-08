#include<stdio.h>
#include<string.h>//libc.lib

int main()
{
    char *str="Ganesh";                     //char str[]="Ganesh";  
    
    printf("%c\n",*str);                    //char str[1]="G";
    str++;
    printf("%c\n",*str);                    //char str[2]="a";
    str++;
    printf("%c\n",*str);                    //char str[3]="n";
    str++;
    printf("%c\n",*str);                    //char str[4]="e";
    str++;
    printf("%c\n",*str);                    //char str[5]="s"; 
    str++;
    printf("%c\n",*str);                    //char str[6]="h";
    str++;

    return 0;
}