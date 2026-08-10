
#include<stdio.h>

int main()
{
    
    float fInput1=0.0f;     //Variabel creation with default value
    float fInput2=0.0f;
    float fResult=0.0f; 

    printf("Enter First number\n");
    scanf("%f",&fInput1);

    printf("Enter Second number\n");
    scanf("%f",&fInput2);

    fResult=fInput1+fInput2;            //perfomes the addition(Bussiness logic)

    printf("Addition of both numbers is :%f\n",fResult);


    return 0;
}