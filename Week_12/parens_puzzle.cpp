#include <iostream>
using namespace std;

typedef void (*fptr)();
typedef fptr (*fptr1)();

void func1()
{
    cout << __PRETTY_FUNC__ << endl;
}

fptr func()
{
    cout << __PRETTY_FUNC__ << endl;
    return func1;
}

int main(int argc, char *argv[])
{
    func()()();

    return 0;
}