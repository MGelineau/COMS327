#include <stdio.h>

int main (int argc, char * argv[])
{
    const int i = 0;

    int *p;
    p = (int *) &i;
    *p = 1;

    *((int *) &i) = 1;

    printf("%d\n", i);
    return 0;
}