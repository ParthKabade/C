#include<stdio.h>

int main()      //will detacte first \0
{
    char str[]={'J','a','y','\0','g','a','n','e','s','h','\0'};

    printf("%s\n",str);

    return 0;
}