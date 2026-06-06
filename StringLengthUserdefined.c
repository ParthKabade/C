#include <stdio.h>

//call by address
int strlenX(char * ptr)
{
    int i=0;

    while(*ptr != '\0')
    {
        i++;
        ptr++;
        printf("");
    }
    return i;
}


int main()
{
    char Str[] = "Ganesh";  //100

    int Ret=0;

    Ret=strlenX(Str);       //strlenX(100)

    printf("String length is : %d\n",Ret);
    

    return 0;
}