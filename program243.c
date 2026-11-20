#include<stdio.h>

void Display(char str[])
{
    printf("Input string is : %s\n",str);
}

int main()
{
    char Arr[50]={'\0'};                //when u assing single element of array then all will be initalised to that element

    printf("Enter String :\n");

    scanf("%[^'\n']s",Arr);     
    
    Display(Arr);

    return 0;
}