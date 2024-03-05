
#include <iostream>

// std is the standard namespace.  Everything in the STL (Standard template library)
//  is in the standard namespace.  To look inside a namespace, use 'namespace::'
//  :: is called the scope resolution operator

using namespace std; //Considered bad practice, have to avoid names that exist in the namespace
// This line tells the compiler to always look for symbols in the standard namespace
//It is no longer necessary to use std:: after this line in order to access STL symbols.
//However, it contaminates the default namespace with all of those thousands of symbols.
//This is considered bad practice!





// g++ instead of gcc
int main(int argc, char *argv[])
{
    // iostream : cin, cout, cerr
    // FILE * : stdin, stdout, stderr
    // These are the same
    // std::cout << "Hello World!" << std::endl;
    cout << "Hello World!" << endl;


    return 0;
}