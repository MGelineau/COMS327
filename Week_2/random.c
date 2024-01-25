#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    //Randomly generated on compile but kept in save state.  will not give random numb
    // printf("%d\n", rand());


    //man 3 time
    srand(time(NULL)); //Seeds the randdom number generator.  
                    //This should be done exactly once in your program!

    printf("%d\n", rand()); //Range is [0, RAND_MAX]
    printf("%d\n", rand()); //RAND_MAX is 2^31 -1
    printf("%d\n", rand());

    printf("%d\n", rand() % 10); //Values [0, 9]
    printf("%d\n", rand() % 10); //More generally, rand % x gives [0, x - 1]
    printf("%d\n", rand() % 10);
    
    printf("%d\n", (rand() % 10) + 15); //Added shifts range, [15, 24]
    printf("%d\n", (rand() % 10) + 15); //More Generally, +y -> [x, (x - 1) + y]
    printf("%d\n", (rand() % 10) + 15);

    printf("%f\n", ((double) rand()) / RAND_MAX); // [0.0, 1.0]
    //To scae result, multipy by scaling factor:
    printf("%f\n", 25 * ((double) rand()) / RAND_MAX); // [0.0, 25.0]
    return 0;
}