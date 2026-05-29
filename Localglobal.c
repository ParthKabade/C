#include<stdio.h>

int no=11;

void fun()
{
    int i=51;

    printf("inside fun : %d\n",i);
    printf("inside fun : %d\n",no);

}

int main()
{
    int i=21;

    printf("inside main : %d\n",i);
    printf("inside main : %d\n",`no);

    fun();

    return 0;
}