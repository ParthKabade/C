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
    struct Demo *ptr =NULL;

    ptr = &dobj;

    ptr->i=11;
    ptr->c='A';
    ptr->f=10.0f;

    printf("%d\n",ptr->i);
    printf("%c\n",ptr->c);
    printf("%f\n",ptr->f);



    return 0;
}