# Makefile

#target: list of dependencies
#<literal tab> command to build target from the dependencies

#To build multiple programs
all:times_table recursion times_table.class

intro: intro.o
	gcc intro.o -o intro
	
recursion: recursion.c
		gcc recursion.c -o recursion

times_table: times_table.c
		gcc times_table.c -o times_table

#Run with command 'make'

clean:
	rm -f times_table recursion times_table.class *~ core

