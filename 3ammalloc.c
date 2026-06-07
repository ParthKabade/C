#include<stdio.h>
#include<stdlib.h>

int main()
{
    int no=0;
    printf("value of no is:""%d\n",no);

    int byte = 0;
    int * Marks = NULL;

    printf("value of byte is currently:""%d\n",byte);
    printf("input value of byte is:""%d\n",byte);
    scanf("%d",&byte);

    Marks=(float*)malloc(byte*sizeof(float));
    printf("%d",byte);

    return 0;


}