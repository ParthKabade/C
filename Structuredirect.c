#include<stdio.h>

#pragma pack(1)
//Declaration
struct Demo
{
    int i;  //4
    char c; //1 genrates padding 
    float f;  //4
            //9
};          


int main()
{

    struct Demo dobj;

    dobj.i=11;
    dobj.c='A';
    dobj.f=10.0f;
    printf("%d\n",dobj.i); //11
    printf("%c\n",dobj.c); //A
    printf("%f\n",dobj.f); //10.0



    return 0;
}