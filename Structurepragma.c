#include<stdio.h>

#pragma pack(1)
//Declaration
struct Demo
{
    int i;  //4
    char c; //1 genrates padding 
    float f;  //4
};            //9
int main()
{

    struct Demo dobj;

    printf("%d\n",sizeof(dobj));    //9

    return 0;
}