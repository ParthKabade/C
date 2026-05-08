
#include<stdio.h>

int Addition( int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;  //bussiness logic
    return Ans;  //give answer
}

int main()

{
     int  Result=0,A=0,B=0;

    printf("Value of A :\n");
    scanf("%d",&A);
    printf("Value of B :\n");
    scanf("%d",&B);

    Result = Addition(A,B);
    
    printf("Addition is :%d\n",Result);
    
    return 0;
}