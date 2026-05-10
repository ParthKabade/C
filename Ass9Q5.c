#include<stdio.h>

int main()
{
    double no = 3.14;

    double *a = &no;
    double **b = &a;
    double ***c = &b;
    double ****d = &c;

    printf("%zu\n", sizeof(no));
    printf("%zu\n", sizeof(a));
    printf("%zu\n", sizeof(b));
    printf("%zu\n", sizeof(c));
    printf("%zu\n", sizeof(d));
    printf("%zu\n", sizeof(**d));
    printf("%zu\n", sizeof(****d));
    printf("%zu\n", sizeof(*a));
    printf("%zu\n", sizeof(***c));
    printf("%zu\n", sizeof(**c));

    return 0;
}