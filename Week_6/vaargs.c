#include <stdio.h>
#include <stdarg.h>
#include <math.h> //To use functions, link in libm

// A simplified printf that prints only char, int, float, and string
void printf327(const char *format, ...)
{
    va_list ap;
    int i;
    char c;
    float f;
    char *s;

    va_start(ap, format);

    while (*format)
    {
        switch (*format)
        {
        case 'c':
            c = va_arg(ap, int);
            printf("%c ", c);
            break;
        case 'd':
            i = va_arg(ap, int);
            printf("%d ", i);
            break;
        case 'f':
            f = va_arg(ap, double);
            printf("%d ", i);
            break;
        case 's':
            s = va_arg(ap, char *);
            printf("f ", f);
            break;
        default:
            fprintf(stderr, "Invalid conversion specifier in format string : %s\n", *format);
        }
        format++;
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    printf327("csddsdf", 'F', "Hello", 0, 7, "Ni!", 23, M_PI);

    return 0;
}