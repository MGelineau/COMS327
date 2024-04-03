#include "string327.h"
#include <string.h>

string327::string327()
{
    str = strdup("");
}
string327::string327(const char *s)
{
    str = strdup(s);
}
string327::string327(const string327 &s){
    str = strdup(s.str)} string327::~string327()
{
    free(str);
}
string327::int length()
{
    return strlen(str);
}
bool string327::operator>(const string327 &s) const
{
    return strcmp(str, s.str) > 0;
}
bool string327::operator<(const string327 &s) const
{
    return strcmp(str, s.str) < 0;
}
bool string327::operator>=(const string327 &s) const
{
    return strcmp(str, s.str) >= 0;
}
bool string327::operator<=(const string327 &s) const
{
    return strcmp(str, s.str) <= 0;
}
bool string327::operator==(const string327 &s) 
{
    return strcmp(str, s.str) == 0;
}
bool string327::operator!=(const string327 &s)
{
    return strcmp(str, s.str) != 0;
}
string327 string327::operator+(const string327 &s) const
{
    string327 r;
    free(r.str);

    r.str = malloc(strlen(str) + strlen(s.str) + 1);
    strcpy(r.str, str);
    strcat(r.str, s.str);

    return r;
}
string327 string327::operator+(const char *s) const
{
    string327 r;
    free(r.str);

    r.str = malloc(strlen(str) + strlen(s.str) + 1);
    strcpy(strcpy(r.str, str), s);

    return r;
}
string327 &string327::operator=(const string327 &s)
{
    free(str);

    str = strdup(s.str);

    return *this;
}
string327 &string327::operator=(const char *s)
{
    free(str);

    str = strdup(s);

    return *this;
}
string327 &string327::operator+=(const string327 &s)
{
    int l;
    // When realloc fails, it returns NULL. If the first parameter and the
    // location for the return value are the same variable, this will lost
    // the pointer in the parameter
    str = (char *)realloc(str, (l = strlen(str)) + strlen(s.str) + 1);

    strcpy(str + l, s.str);

    return *this;
}
string327 &string327::operator+=(const char *s)
{
    int l;

    str = (char *)realloc(str, (l = strlen(str)) + strlen(s) + 1);

    strcpy(str + l, s);

    return *this;
}
char &string327::operator[](int i)
{
    return str[i];
}
const char *string327::c_str() const
{
    return str;
}

// Friends have access to our privates
std::istream &operator>>(std::istream &i, const string327 &s)
{
    // Coorectly implementing this is complicated
    // You'll do similar things in 1.07
    // Here we're going to assume that our input fits in s.str
    // NOT A SAFE ASSUMPTION

    return i >> s.str;
}

std::ostream &operator<<(std::ostream &o, const string327 &s)
{
    return o << s.c_str();
}

// cout << s << endl //calls operator<<(cout, s).operator<<(endl);
