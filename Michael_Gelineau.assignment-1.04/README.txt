Project_1.04 by Michael Gelineau

HOW TO RUN: Call 'make', then './poke327'.  It will prompt you for a cardinal direction to move the player character.  The player character cannot move out of bounds. 
The trainers should move closer to the PC, however it is a little buggy.

BUGS: the 'move_Trainers()' method is supposed to move the trainers closer to the PC after each turn.  It supposedly takes the values from the 8 directions from the trainers position,
compares them with min8, then moves the trainer to the spot with the lowest value.  It definitely does something!  This is called after every PC move and the trainers jump around,
just not according to what I wanted.
