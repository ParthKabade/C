#include<stdio.h>


//Declaration
struct Demo
{
    int i;  //4
    char c; //1 genrates padding 
    float f;  //4
};            //8
int main()
{

    struct Demo dobj;

    printf("%d\n",sizeof(dobj));

    return 0;
}