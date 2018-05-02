/***********************************************************
 CSCI 340 - Assignment 9 - Spring 2018
 
 Progammer: Sam Piecz
 Z-ID: Z1732715
 Section: 1
 TA: 
 Date Due: May 02, 2018 
 Purpose: Build Graph ADT & depth_first using C++ 
 ************************************************************/

#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include "assignment9.h"

using std::ifstream;
using std::vector;
using std::cout;
using std::cerr;
using std::endl;

/***************************************************************
  
 Name: depth_first

 Use:  

 Parameters: 

 Returns:  

 ***************************************************************/
void graph::depth_first( int );
{
    cout << "\nDFS\n" << endl;
}

/***************************************************************
  
 Name: graph

 Use: Constructor 

 Parameters: A filename 

 Returns: None. 

 ***************************************************************/
graph::graph( const char* filename );
{
    // Get the file as an ifstream object called infile
    ifstream infile(filename, ios::in);
    // Initialize string to hold each line of file
    string line;

    // Initialize counter
    int counter = 0;

    // Loop through all lines while you can keep getting a line
    while (getline(infile, line))
    {
        // if first iteration set size
        if (counter == 0)
        {
            size = int(line);
        }
        // otherwise do something with labels
        else if (counter == 1)
        {
            for (int index = 0; index < sizeof(line); index++)
            {
                labels.push_back(line[index]);
            }
        }
        // if none of these things need to set index values to position
        // inside main vector, sub the specific vertex
        else
        {
            for (int i = 0; i < sizeof(line); i++)
            {
                cout << line[i] << endl;
            }
        }

        // Increment counter 
        counter++;
    }

    cout << size << endl;

}

/***************************************************************
  
 Name: ~graph 

 Use: Destructor 

 Parameters: None. 

 Returns: None. 

 ***************************************************************/
graph::~graph();
{
}

/***************************************************************
  
 Name: get_size 

 Use: Returns the size of the graph object. 

 Parameters: None.  

 Returns: An integer. 

 ***************************************************************/
int graph::get_size() const;
{
    return size;
}

/***************************************************************
  
 Name: traverse 

 Use:  

 Parameters: None. 

 Returns: None. 

 ***************************************************************/
void graph::traverse( ) ;
{
    cout << "\nTraverse method\n" << endl;
}

/***************************************************************
  
 Name: print 

 Use: Prints graph. 

 Parameters: None. 

 Returns: None. 

 ***************************************************************/
void graph::print ( ) const;
{
    cout << "\nPrint Method\n" << endl;
}



#define ASSIGNMENT9_TEST
#ifdef 	ASSIGNMENT9_TEST

int main(int argc, char** argv) {
    if ( argc < 2 ) {
        cerr << "args: input-file-name\n";
        return 1;
    }
    
    graph g(argv[1]);

    g.print();
    
    g.traverse();

    return 0;
}

#endif
