#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    printf("Hello_World!");

    // b)
    //  stop_trying_to_make_" fetch "_happen_
    int i;
    char *a[] = {
        " happen _ ",
        " to _ ",
        " make _ ",
        " stop _ ",
        " \" fetch \" _ ",
        " trying _ ",
    };
    int o[] = {3, 5, 1, 2, 4, 0};
    for (i = 0; i < 6; i++)
    {
        printf(" % s ", a[o[i]]);
    }
    // stop _    trying _    to _    make _    " fetch " _    happen _
    return 0;

    // c)
    /* 0 1 2 *
     * 012345678901234567890123456 */
    // char s[] = " On _Wednesdays _we _ wear _pink ! ";
    // *(s + 1) = 'O';
    // *(s + 2) = 'n';
    // *(s + 3) = '_';
    // *(s + 4) = 'S';
    // *(s + 5) = 'a';
    // *(s + 6) = 't';
    // *(s + 7) = 'u';
    // *(s + 8) = 'r';
    // *(s + 26) = '.';
    // printf(" %s ", s + 1); //?

    // d)
    // char *s = " I _ just _ moved _ here _from _ Africa . ";
    // s[17] = '.';
    // s[18] = '\0 '; //?
    // printf(" % s ", s);

    // e)
    // char *p, s[] = " ! ocoC _nnelG _, og _uoY __! ocoC _nnelG _, uoy _rof _ruoF ";
    // for (p = s + strlen(s); *p; p--)
    // {
    //     putchar(*p);
    // }

    char *p, s[] = " ? brac _a _rettub _sI ";
    for (p = s + strlen(s) - 1; *p; p --)
    {
        putchar(*p);
    }
}