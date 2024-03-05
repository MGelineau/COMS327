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
    

    // c)
    //* s + n == s(n)
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
    // printf(" %s ", s + 1);
    //On Saturdays we wear pink

    // d)
    // char *s = " I _ just _ moved _ here _from _ Africa . ";  //(READ ONLY SPACE)
    // s[17] = '.'; //Crash because its a read only.  Attempt to modify immutable data.  Runtime error
    // s[18] = '\0 '; //Null space
    // printf(" % s ", s);

    // e)
    // char *p, s[] = " ! ocoC _nnelG _, og _uoY __! ocoC _nnelG _, uoy _rof _ruoF ";
    // for (p = s + strlen(s); *p; p--)
    // {
    //     putchar(*p);
    // }
    //strlen(s)+ s = s.  s is beginning of array.  + length of string = null byte
    //*p is the null byte (No output)



    // char *p, s[] = " ? brac _a _rettub _sI ";
    // for (p = s + strlen(s) - 1; *p; p --)
    // {
    //     putchar(*p);
    // }
    //putchar prints a single character
    //Starts at I
    //Dont know if beginning has a null byte.  (Uses this to stop).  Runtime error

    //2
    



    //3
    //int * i  ( i is pointer to int)
    // *i = int
    //typedef takes existing type and a new type
    //a) list_item_t*
    //b)int32_t
    //c) uint32_t *
    //d) list_item_t
    //e) list_item_t
    //f) int
    // g) int32_t (*)(const void *, const void *)
    //h) void *
    //i) list_t
    //j) char

    int a = 5;
    int b = 7;
    swap(a, b);
    return 0;
}

void swap(int * a, int * b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

//int * p
//fpp(p)
//p is now free but you only set the copy null
//** is a pointer to a pointer
void freeplusplus(void ** p)
{
    free(*p);
    *p = NULL;
}

char *strndup (const char *s, size_t n)
{
    int i;
    char * t;
    if(t = malloc(n + 1))
    {
        for(i = 0; i < n && s[i]; i++)
        {
            t[i] = s[i]; //*(t + i) = *(s + 1)
        }
        t[i] = '\0';
    }
    return t;
}

