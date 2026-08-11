#include<stdio.h>

float AddTwoNumbers(
                        float fNo1,             //First input
                        float fNo2              //Second input
                   )
{
    float fAns= 0.0f;                           //Variable to store result

    fAns=fNo1+fNo2;                             //Perfome addition

    return fAns;
    
}

int main()
{
    
    float fInput1=0.0f;     //Variabel creation with default value
    float fInput2=0.0f;
    float fResult=0.0f; 

    printf("Enter First number\n");
    scanf("%f",&fInput1);

    printf("Enter Second number\n");
    scanf("%f",&fInput2);

    fResult=AddTwoNumbers(fInput1,fInput2);            

    printf("Addition of both numbers is :%f\n",fResult);


    return 0;
}