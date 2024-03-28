#ifndef STRING327_H
#define STRING327_H
#include <iostream>

/*
string327 s, t;

if (strcmp(s.str, t.str) > 0) // str is private.  doesnt work
   ...

if (s.compare(t) > 0)
   ...

 if (s > t) // if(s.operator>(t))
   ...

cout << s + t; // operator<<(cout, s + t)
cout << s + "foo";

s = t;
s = "foo";

string327 u;

s = t = u;

*/

class string327
{
private:
   char *str;

public:
   string327();
   string327(const char *);
   string327(const string327 &);
   ~string327();
   int length();
   bool operator>(const string327 &);
   bool operator<(const string327 &);
   bool operator>=(const string327 &);
   bool operator<=(const string327 &);
   bool operator==(const string327 &);
   bool operator!=(const string327 &);
   string327 operator+(const string 327 &);
   string327 operator+(const char *);
   string327 &operator=(const string327 &);
   string327 &operator=(const char *);
   string327 &operator+=(const string327 &);
   string327 &operator+=(const char *);
   char &operator[](int);
   const char *c_str() const;

   // Friends have access to our privates
   friend std::istream &operator>>(std::istream &, const string327 &);
};

std::ostream &operator<<(ostream &, const string327 &);

#endif