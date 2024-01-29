#include <stdio.h>

//A pointer is a variable that holds an address.

void swap(int *x, int *y)
{
    int tmp;

    // * is the dereference operator.  It fetches the value addressed by the pointer
    printf("x = %d, y = %d\n", *x, *y);

    tmp = *x;
    *x = *y;
    *y = tmp;

    printf("x = %d, y = %d\n", *x, *y);
}

//How to read variable delcarations in C: Start with the variable name.
//                                        Go right when we can.
//                                        Go left when me must.
int main(int argc, char *argv[])
{
    int i,j;

    i = 0;
    j = 1;

    printf("i = %d, j = %d\n", i, j);

    // & is the address operator.  It takes the address of the variable
    // it is applied to.
    swap(&i, &j);
    
    printf("i = %d, j = %d\n", i, j);

    return 0;
}