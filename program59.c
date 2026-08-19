//Input:5
//Output:5  4   3   2   1
#include<stdio.h>


void Display(int iNo)               
{
    int iCnt=0;

    for(iCnt=iNo;iCnt>=1;iCnt--)            //iCnt+=1 shorthand operator
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