/***********************************************************
 CSCI 340 - Assignment 9 - Spring 2018
 
 Progammer: Sam Piecz
 Z-ID: Z1732715
 Section: 1
 TA: 
 Date Due: May 02, 2018 
 Purpose: Build Graph ADT & depth_first using C++ 
 ************************************************************/
#ifndef ASSIGNMENT9_H
#define ASSIGNMENT9_H
#include <vector>
#include <list>

class graph {
    private:
        int size;
        std::vector< std::list<int> > adj_list;
        std::vector< char > labels;
        void depth_first( int );
    public:
        graph( const char* filename );
        ~graph();
        int get_size() const;
        void traverse( ) ;
        void print ( ) const;
};

#endif 
