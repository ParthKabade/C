#include<stdio.h>



int main()
{
    int iCnt=0;
    int Arr[5]={0};                     //when u set like this all index sets to 0 by default
   
    printf("Enter the elements :\n");

    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("Given elements are %d\n",Arr[iCnt]);
    }

    return 0;
}