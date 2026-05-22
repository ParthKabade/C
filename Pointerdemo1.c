#include<stdio.h>

int main()

{
    int no = 11;
    int *p = &no;

    printf("%lu\n",no); //11
    printf("%lu\n",&no); //100
    printf("%lu\n",p); //100
    printf("%lu\n",*p); //11
    printf("%lu\n",sizeof(no)); //4
    printf("%lu\n",sizeof(p)); // 8
    printf("%lu\n",sizeof(*p)); //4

    return 0;
}