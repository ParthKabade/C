#include<stdio.h>


int main()
{
    char Arr[50]={'\0'};                //when u assing single element of array then all will be initalised to that element

    printf("Enter String :\n");

    scanf("%[^'\n']s",Arr);  
       
    /*
        * %[ starts a scanset.
        * ^ means read everything except the characters that follow.
        * \n means newline.
    */  

    printf("Entered string :%s\n",Arr);


    return 0;
}