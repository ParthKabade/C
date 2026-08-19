//Input:5
//Output:-5  -3   -1  
#include<stdio.h>


void Display(int iNo)               
{
    int iCnt=0;

    for(iCnt=(-iNo);iCnt<0;iCnt=iCnt+2)            //iCnt+=1 shorthand operator
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}


int main()
{
    int iValue=0;
    
    printf("Enter number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}