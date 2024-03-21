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
bool string327::operator>(const string327 &s)
{
    return strcmp(str, s.str) > 0;
}
bool string327::operator<(const string327 &s)
{
    return strcmp(str, s.str) < 0;
}
bool string327::operator>=(const string327 &s)
{
    return strcmp(str, s.str) >= 0;
}
bool string327::operator<=(const string327 &s)
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
string327 string327::operator+(const string 327 & s)
{
}
string327 string327::operator+(const char *s)
{
}
string327 &string327::operator=(const string327 &s)
{
}
string327 &string327::operator=(const char *s)
{
}
string327 &string327::operator+=(const string327 &s)
{
}
string327 &string327::operator+=(const char *s)
{
}
char &string327::operator[](int i)
{
}
const char *c_str()
{
}

// Friends have access to our privates
std::istream &operator>>(istream &, const string327 &i)
{
}

std::ostream &operator<<(ostream &o, const string327 &s)
{
}
