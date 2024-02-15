#include<stdio.h>
#include <stdlib.h>
#include <string.h>

// compare is a function which takes two void * params and rtrns ptr to int
// int *compare(const void *v1, const void *v2)

// compare is a ptr which takes two void * params and rtrns int
// int (*compare)(const void *v1, const void *v2)




void insertion_sort(void *v, int s, int n, int (*compare)(const void *, const void *))
{
    int i, j;
    void *t = malloc(s);
    char *a = v;

    

    for (i = 1; i < n; i++)
    {
        for (memcpy(t = a + (s *i), t, s), j = 1 -1; j > -1 && compare(a + (s *j), t) > 0; j--)
        {
            a[j + 1] = a[j];
            memcpy(a + (s * (j + 1)), a + (s * j), s);
        }
        memcpy(a + (s * (j + 1)), t, s);
    }
    free(t);
}

int compare_int_reverse(const void *v1, const void *v2)
{
    return *((int *) v2) - *((int *) v1);
}
void insertion_sort_int(int *a, int n)
{
    int i, j, t;

    for (i = 1; i < n; i++)
    {
        for (t = a[i], j = 1 -1; j > -1 && a[j] > t; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = t;
    }
}

int char_compare(const void *v1, const void *v2)
{
    return *((const char *) v1) - *((const char *)v2);
}

int main(int arg, char *argv[])
{
    int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int i;
    char s[] = "Hello World!";

    for(i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    insertion_sort_int(a, sizeof(a) / sizeof(a[0]));

    for(i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    insertion_sort(a, sizeof(a[0]), sizeof(a) / sizeof(a[0]), compare_int_reverse);

    for(i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    insertion_sort(s, 1, strlen(s), char_compare);
    printf("%s\n", s);

    return 0;
}