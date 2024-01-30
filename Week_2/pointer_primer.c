#include <stdio.h>

// A pointer is a variable that holds an address.

// Records in C are called 'struct' (Classes in java)
struct foo
{
    int i;
    float f;
    char *s;
};

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

// We have three different dereference operators in C:
// The dereference operator: *
// The arrow operator: -> (derferences and then gets the field of a struct)
// The array index operator: [] (applies an offset, and then dereferencing)
void populate_foo(struct foo *f, int i, float d, char *s)
{
    f->i = i;
    f->f = d;
    f->s = s;
}

// How to read variable delcarations in C: Start with the variable name.
//                                         Go right when we can.
//                                         Go left when me must.
int main(int argc, char *argv[])
{
    int i, j;
    struct foo f;

    i = 0;
    j = 1;

    printf("i = %d, j = %d\n", i, j);

    // & is the address operator.  It takes the address of the variable
    // it is applied to.
    swap(&i, &j);

    printf("i = %d, j = %d\n", i, j);

    populate_foo(&f, 0, 3.14, "Hello World!");

    printf("%d %f %s\n", f.i, f.f, f.s);
    return 0;
}