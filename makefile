#
# PROGRAM: Assign 9   
# PROGRAMMER: Samuel Piecz 
# LOGON ID: Z1732715 
# DATE DUE: 05/02/18 
#
# Compiler variables
CCFLAGS = -ansi -Wall -std=c++11

# Rule to link object code files to create executable file
assignment9: assignment9.o
	g++ $(CCFLAGS) -o assignment9.exe assignment9.o

# Rule to compile source code file to object code
assignment9.o: assignment9.cc
	g++ $(CCFLAGS) -c assignment9.cc

# Pseudo-target to remove object code and executable files
clean:
	-rm -f *.o assignment9.exe
