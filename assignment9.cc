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
#include <string>
#include <cctype>
#include "assignment9.h"

using namespace std;


/***************************************************************
  
 Name: graph

 Use: Constructor 

 Parameters: A filename 

 Returns: None. 

 ***************************************************************/
graph::graph( const char* filename )
{
    // Get the file as an ifstream object called infile
    ifstream infile(filename, ios::in);
    // Initialize string to hold each line of file
    string line;

    // Start vector
    vector<list<int>> adj_list;
    vector<char> labels;

    // Initialize counter for get line
    int counter = 0;

    // Loop through all lines while you can keep getting a line
    while (getline(infile, line))
    {
        if (counter == 0)
        {
            size = stoi(line);
            cout << "Size: " << size << endl;
            counter++;
            continue;
        }
        else if (counter == 1)
        {
            counter++;
            continue;
        }

        list<int> edge_list;
        edge_list.resize(size);

        for (int i = 0; i < line.size(); i++)
        {
            if(isspace(line[i]))
            {
                continue;
            }
            else if (isalpha(line[i]))
            {
                labels.push_back(line[i]);
                cout << "Label: " << line[i] << endl;
            }
            else if (isdigit(line[i]))
            {
                edge_list.push_back(line[i]);
                cout << "Edge: " << line[i] << endl;
            }
            
        }

        // Add list to adj_list
        adj_list.push_back(edge_list);

        // Increment counter 
        counter++;
    }

}

/***************************************************************
  
 Name: ~graph 

 Use: Destructor 

 Parameters: None. 

 Returns: None. 

 ***************************************************************/
graph::~graph()
{
}

/***************************************************************
  
 Name: get_size 

 Use: Returns the size of the graph object. 

 Parameters: None.  

 Returns: An integer. 

 ***************************************************************/
int graph::get_size() const
{
    return size;
}

/***************************************************************
  
 Name: traverse 

 Use:  

 Parameters: None. 

 Returns: None. 

 ***************************************************************/
void graph::traverse( )
{
    cout << "\nTraverse method\n" << endl;
}

/***************************************************************
  
 Name: depth_first

 Use:  

 Parameters: 

 Returns:  

 ***************************************************************/
void graph::depth_first( int var )
{
    cout << "\nDFS" << endl;
}

/***************************************************************
  
 Name: print 

 Use: Prints graph. 

 Parameters: None. 

 Returns: None. 

 ***************************************************************/
void graph::print ( ) const
{
    for(int i = 0; i < labels.size(); i++)
    {
        cout << labels[i] << endl;
    }

    for(auto& m : adj_list)
    {
        for(auto n : m )
        { 
            cout << n << endl;
        }
    }

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
