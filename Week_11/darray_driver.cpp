#include "darray.h"

using namespace std;

int main (int argc, char *argv[]){
    darray<int> di;
    int i;

    for(i = 0; i < 100; i++){
        di.add(i);
    }

    cout << di << endl;
    return 0;
}