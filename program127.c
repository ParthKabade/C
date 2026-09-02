#include<stdio.h>
#include<stdlib.h>

int CountFrequeny(int Arr[],int iSize)
{
    int iCount=0,iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%11==0)
        {
            iCount++;
        }
    }
    return iCount;
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

    iRet=CountFrequeny(Brr,iLength);

    printf("elements are : %d\n",iRet);

    free(Brr);


    return 0;
}