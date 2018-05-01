/***********************************************************
 CSCI 340 - Assignment 9 - Spring 2018
 
 Progammer: Sam Piecz
 Z-ID: Z1732715
 Section: 1
 TA: 
 Date Due: May 02, 2018 
 Purpose: Built Graph ADT & depth_first using C++ 
 ************************************************************/

#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include "assignment9.h"
using namespace std;













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
