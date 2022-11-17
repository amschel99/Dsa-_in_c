#include <stdio.h>
#include <stdlib.h>
int main()
{
    typedef int *integer_pointer;
    integer_pointer A, B;
    A = (integer_pointer)malloc(sizeof(int));

    printf("Initially location pointed by A has value %d\n", *A);
    printf("the a bove is a garbage value \n");
    *A = 5;
    printf("After allocation, location pointed by A has value  %d\n", *A);

    return 0;
}