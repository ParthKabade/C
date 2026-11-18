#include<stdio.h>


int main()
{
    char Arr[50]={'\0'};                //when u assing single element of array then all will be initalised to that element
                                        //Index:  0    1    2    3   ... 49
                                        //Value: '\0'  0    0    0   ... 0

    printf("Enter String :\n");

    scanf("%s",Arr);        //Issue

    printf("Entered string :%s\n",Arr);


    return 0;
}