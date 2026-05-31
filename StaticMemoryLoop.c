#include<stdio.h>

int main()
{
    //static memory allocation
    float Marks[5]; //20byte

    int i=0;   //loop counter

    printf("enter your marks\n");

    //Iteration
//steps  1.  2.  3. 
    for(i=0;i<5;i++)
    {
        scanf("%f",&Marks[i]);  //4
    }
        
    printf("Entered marks are\n"); //5

//steps  1.  2.  3. 
    for(i=0;i<5;i++)
    {
        printf("%f\n",Marks[i]);  //6
    }
    
    return 0;
}