# Makefile

#target: list of dependencies
#<literal tab> command to build target from the dependencies

#To build multiple programs
all:times_table recursion times_table.class

#These two lines are sufficient for assignment 0
recursion: recursion.c
		gcc recursion.c -o recursion

times_table: times_table.c
		gcc times_table.c -o times_table

#Run with command 'make'

clean:
	rm -f times_table recursion times_table.class *~ core

#README is a textfile
#shows how to run code if anything special is done to it
#if there's a bug tell them
#CHANGELOG (not needed for this assignment)
	Contains:
		date and timme: what youve done
		github gives these

	git log > CHANGELOG

#To package for submission
#make clean
#cd ..
# cp  -r <directory name> <new name>
#tar cvf <directory name>.tar <name of directory>
#gzip -9 <directory name>.tar
#c-create  v- verbose f-force gz - zip

#mkdir tmp
#cd tmp
#tar xvfz ../<directory name>.tar.gz
#rm -rf tmp (DELETES DIRECTORY) (DONT PUT A .)
