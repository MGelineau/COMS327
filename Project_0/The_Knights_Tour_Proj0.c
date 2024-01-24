#include <stdio.h>

#define size 5

int inBounds(int x, int y)
{
    if (x >= 0 && y >= 0 && x < size && y < size)
    {
        return 0;
    }
    else{
        return 1;
    }
}

void printTour(int squaresChecked, int step, int sol[size][size])
{
    int i, j;

    while(step < size * size) 
    {
        for(i = 0; i < size; i++) 
         {
            for(j = 0; j < size; j++) 
            {
                 if(sol[i][j] == step) 
                {
                    printf("%d,", 1 + (i * 5) + j);
                }
            }
         }
         step++;
    }

    for(i = 0; i < size; i++) 
    {
        for(j = 0; j < size; j++) 
        {
            if(sol[i][j] == step) 
            {
                printf("%d\n", 1 + (i * 5) + j);
            }
         }
    }
}

void knightsTourRec (int x, int y, int squaresChecked, int sol[size][size], int movesX[], int movesY [])
{
    int step = 0;
    int i,j;
    sol[x][y] = squaresChecked;
    



    if(squaresChecked >= size * size) 
    {
        printTour(squaresChecked, step, sol);

        //Sets the location back to zero so we can check other possibilities from this spot
        sol[x][y] = 0;
        return;
    }

    //Looks for possible jumps and calls recursively on function
    for(i = 0; i < 8; i++) 
    {
        int newX = x + movesX[i];
        int newY = y + movesY[i];

        if(inBounds(newX, newY) == 0 && sol[newX][newY] == 0) 
        {
            knightsTourRec(newX, newY, squaresChecked + 1, sol, movesX, movesY);
        }
    }

    
    sol[x][y] = 0;
}

void knightsTour ()
{
    //arrays that provide all possible knight moves
    int kMoveX[] = {1, 1, -1, -1, 2, 2, -2, -2};
    int kMovesY[] = {2, -2, 2, -2, 1, -1, 1, -1}; 

    int sol[size][size];
    int i, j;

    //Set sol set to 0 to mark as unvisited
    for (i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            sol[i][j] = 0;
        }
    }

    //Iterate through board and find all potential tours
    for (i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            knightsTourRec(i, j, 1, sol, kMoveX, kMovesY);
        }
    }


}


int main()
{
    knightsTour();
    return 0;
}