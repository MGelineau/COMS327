#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
* The map measures 80 units in the x (horizontal) direction and 21 units in the y (vertical) direction.
*
*At least two paths pass through your map, one oriented N-S, the other E-W (Paths are #)
*
*Your map should have a Pokemon Center and a Pok ´ emart, Represented by one or more ’C’ and ’M’, ´respectively. I make my Pokemon Centers and Pok ´ emarts ´ 2 × 2
*Your Pokemon Center and Pok ´ emart, should be reachable from the path without having to go through ´tall grass [GENERATE LAST]
*
* Your map should contain at least two regions of tall grass (represented with colons)
*
*Your map should contain at le+ast one region of water (represented with tildes)
*
*The outermost cells of the map are immovable boulders (represented using percent signs), except that
there is one exit on each border. Your N-S path goes between the top and bottom exit, while the E-W
path goes between the left and right exits.2
*
*
*  Your map should contain at least two clearings (regions of short grass). Clearings are represented
using periods.
*
*Other option terrain includes rocks and boulders (’%’), trees (’ˆ’), and whatever else you think would
be interesting
*/

#define wid 80
#define hei 21
#define boulder '%'
#define tree '^'
#define road '#'
#define tallG ':'
#define clearing '.'
#define water '~'
#define mart 'M'
#define center 'C'

/*
*Print board
*/
void print_board(char ter[hei][wid])
{
      int i, j;
    for (i = 0; i < hei; i++)
    {
        for (j = 0; j < wid; j++)
        {
            printf("%2c", ter[i][j]);
        }
        printf("\n");
    }
}

/*
* Generate paths
*/
void generate_Paths(char ter[hei][wid])
{
    int xTop = (rand() % wid);
    int xBot = (rand() % wid);
    int yLeft = (rand() % hei);
    int yRight = (rand() % hei);
    int i;


    if (xTop > xBot)
    {
        int countM = 0;
        int countC = 0;

        //Link to the y value on left
        for (i = 0; i <= yLeft; i++)
        {
            ter[i][xTop] = road;
        }

        i = 20;
        while (i >= yLeft)
        {
            ter[i][xBot] = road;
            i--;
        }

        //Connect yLeft to the x value farthest away
        for (i = 0; i <= xTop; i++)
        {
            ter[yLeft][i] = road;
        }


        //Same with yRight
        i = 79;
        while (i >= xBot)
        {
            int randX = rand() % 2;
            int randY = rand() % 2;
            ter[yRight][i] = road;

            if (randX == 0 && countM != 1)
            {
                ter[yRight - 1][i - 3] = mart;
                countM++;
            }

            if (randY == 0 && countC != 1)
            {
                ter[yRight + 1][i - 3] = center;
                countC++;
            }


            i--;
        }


        
    }

    else
    {
        int countM = 0;
        int countC = 0;

        //Link to the y value on left
        for (i = 0; i <= yLeft; i++)
        {
            ter[i][xTop] = road;
        }

        i = 20;
        while (i >= yLeft)
        {
            ter[i][xBot] = road;
            i--;
        }

        //Connect yLeft to the x value farthest away
        for (i = 0; i <= xBot; i++)
        {
            ter[yLeft][i] = road;
        }

        //Same with yRight
        i = 79;
        while (i >= xTop)
        {
            int randX = rand() % 2;
            int randY = rand() % 2;
            ter[yRight][i] = road;

            if (randX == 0 && countM != 1)
            {
                ter[yRight - 1][i - 3] = mart;
                countM++;
            }

            if (randY == 0 && countC != 1)
            {
                ter[yRight + 1][i - 3] = center;
                countC++;
            }
            i--;
        }
    }
}

/*
* Generate Tall Grass
*/
void generate_TallG (char ter[hei][wid])
{
    int testX = (rand() % 78) + 1;
    int testY = (rand() % 19) +1;

    int i,j;

    int height = hei - testY;
    int width = wid -testX;

     for (i = height % 3 + 1; i < height; i++)
    {
        for (j = width % 3 + 1; j < width; j++)
        {
            ter[i][j] = tallG;
        }
    }

}

/*
* Generate Water
*/
void generate_Water (char ter[hei][wid])
{
    int testX = (rand() % 78) + 1;
    int testY = (rand() % 19) +1;

    int i,j;

    int height = hei - testY;
    int width = wid -testX;

     for (i = height % 3 + 1; i < height; i++)
    {
        for (j = width % 3 + 1; j < width; j++)
        {
            ter[i][j] = water;
        }
    }

}

/*
*Generates full border and short grass with no entrances or exits
*/
void generate_border(char ter[hei][wid])
{
    int i, j;
    for (i = 0; i < hei; i++)
    {
        for (j = 0; j < wid; j++)
        {
            ter[i][j] = boulder;
        }
    }

    for (i = 1; i < hei -1; i++)
    {
        for (j = 1; j < wid -1; j++)
        {
            ter[i][j] = clearing;
        }
    }

}

/*
* Generate other elements
*/
void generate_Other(char ter[hei][wid])
{
    int i, j;
    for (i = 0; i < hei; i++)
    {
        for (j = 0; j < wid; j++)
        {
            int randM = rand() % 18;
            if (randM % 7 == 0 && ter[i][j] != boulder)
            {
                ter[i][j] = tree;
                randM++;
            }

            if (randM % 9 == 0)
            {
                ter[i][j] = boulder;
                randM++;
            }
            
        }
    }
}

int main (int argc, char *argv[])
{
    srand(time(NULL));

    char ter[hei][wid];
    
    //Self explanatory
    generate_border(ter);

    //generates 2 regions of grass and a region of water
    generate_TallG(ter);
    generate_TallG(ter);
    generate_Water(ter);

    generate_TallG(ter);
    generate_Water(ter);

    generate_Other(ter);

    generate_Paths(ter);
    
    
    print_board(ter);

    
    return 0;
}