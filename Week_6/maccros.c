
// Value-type macro
#define FOO 42 //can be any value

// Function-type macro
#define min(x, y) (x < y ? x : y) // Always parens around function-type macros

#define min3 (x, y, z)(min(x, min(y, z)))
#define min4(x, y, z, w) (min(x, min(y, min(z, w))))
#define min8 (a, b, c, d, e, f, g, h) (min(min4(a, b, c, d), min4(e, f, g, h)))

// typeof only works in c99 or later
// Basic blocks have a value, equal to value of last line of block.
// Wrap basic block in parens to get an expression
#define max(x, y) ({    \
    typeof(x) _x = (x); \
    typeof(y) _y = (y); \
    _x > _y ? _x : _y;  \
})

//Stringiification - A macro parameter prefixed with a hash will be 
//turned into a string
#define stringify(x) #x;

struct lutable_entry
{
    char *name;
    int(*func)(int);
};

struct lutable_entry lookup_table[] =
{
    {"bar", bar},
    {"baz", baz},
    {"foo", foo},
};

#define luentry(x){#x, x}

struct lutable_entry lookup_table[] = 
{
    luentry(bar);
    luentry(baz);
    luentry(foo);
}

//## concatenates left and right hand sides into a 
//new symbol.  One of these must be a macro parameter, which is expanded before
// concatenation.  The other can be any string of symbols.
#define concat_pre(x) foo_ ##x
#define concat_suf(x) x ## _foo

int main(int argc, char *argv[])
{
    printf("%d\n", FOO);

    min(a, b) + 5;

    min(function_with_side_effect(), really_expensive_function());

    min3(a, b, c);
    min4(1, 2, 3, 4);
    min8(1, 2, 3, 4, 5, 6, 7, 8);

    stringify(foo);

    //This construction depends on the programmer being sure that the search key is valid
    bsearh(key, lookup_table, s, n, compare)->func(i);

    concat_pre(bar);
    concat_suf(bar);

    return 0;
}