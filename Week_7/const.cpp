#include <iostream>

using namespace std; // DONT DO THIS

int main(int argc, char *argv[])
{
    const int i = 0;

    *((int *)&i) = 1;

    cout << i << endl;

    return 0;
}