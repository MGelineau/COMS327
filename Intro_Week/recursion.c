#include <stdio.h>
#include <stdlib.h>

unsigned fib(unsigned i)
{
    if (i < 2)
    {
        return i;
    }

    return fib(i - 1) + fib(i - 2);
}

// MAN pages?
int main(int argc, char *argv[])
{
    printf("%d\n", fib(atoi(argv[1])));

    return 0;
}

/*
 *gcc recursion.c -o recursion
 *./recursion 1,2,3 ...etc
 *
 * SUBMISSION:
 * Makefile
 * make
 * 
 */
