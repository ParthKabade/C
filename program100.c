#include<stdio.h>



int main()
{
    int iCnt=0;
    int Arr[5]={0};                     //when u set like this all index sets to 0 by default
   
    printf("Enter the elements :\n");

    scanf("%d",&Arr[0]);                          //Never put "\n" in scanf it may genrates indirect error
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]); 
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);

    printf("elements of Array are :\n");

    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}