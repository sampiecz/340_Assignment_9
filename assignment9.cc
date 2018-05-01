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

/***************************************************************
  
 Name: depth_first

 Use:  

 Parameters: 

 Returns:  

 ***************************************************************/
void graph::depth_first( int );
{
}

/***************************************************************
  
 Name: graph

 Use: Constructor 

 Parameters: A filename 

 Returns: None. 

 ***************************************************************/
graph::graph( const char* filename );
{
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
}

/***************************************************************
  
 Name: traverse 

 Use:  

 Parameters: None. 

 Returns: None. 

 ***************************************************************/
void graph::traverse( ) ;
{
}

/***************************************************************
  
 Name: print 

 Use: Prints graph. 

 Parameters: None. 

 Returns: None. 

 ***************************************************************/
void graph::print ( ) const;
{
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
