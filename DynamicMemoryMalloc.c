#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 0;
    float *Marks = NULL;
    int i = 0; // loop counter

    printf("Enter No, of elements:\n");
    scanf("%d", &size);

    // Dynamic memory allocation
    Marks = (float *)malloc(size * sizeof(float));

    printf("enter your marks\n");

    // Iteration
    // steps  1.  2.  3.
    for (i = 0; i < size; i++)
    {
        scanf("%f", &Marks[i]); // 4
    }

    printf("Entered marks are\n"); // 5

    // steps  1.  2.  3.
    for (i = 0; i < size; i++)
    {
        printf("%f\n", Marks[i]); // 6
    }

    free(Marks);

    return 0;
}