#include<stdio.h>
#include<stdlib.h>

int EvenSummation(int Arr[],int iSize)
{
    int iEvenSum=0,iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEvenSum=iEvenSum+Arr[iCnt];
        }
    }

    return iEvenSum;
}

int main()
{

    int *Brr=NULL;
    int iLength=0,iCnt=0,iRet=0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    Brr=(int *)malloc(sizeof(int)*iLength);

    printf("Enter the elements :\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet=EvenSummation(Brr,iLength);

    printf("Summation of even elements is : %d\n",iRet);


    return 0;
}