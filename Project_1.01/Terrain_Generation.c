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
*Your map should contain at least one region of water (represented with tildes)
*
*The outermost cells of the map are immovable boulders (represented using percent signs), except that
there is one exit on each border. Your N-S path goes between the top and bottom exit, while the E-W
path goes between the left and right exits.2
*
*
*  Your map should contain at least two clearings (regions of short grass). Clearings are represented
using periods.
*
*• Other option terrain includes rocks and boulders (’%’), trees (’ˆ’), and whatever else you think would
be interesting
*/

#define wid 80
#define hei 21
#define boulder '%'
#define tree '^'
#define road '#'
#define longG ':'
#define clearing '.'
#define water '~'

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
*Generates full border with no entrances or exits
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

int main (int argc, char *argv[])
{
    char ter[hei][wid];
    generate_border(ter);

    print_board(ter);

    
    return 0;
}