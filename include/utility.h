/*************************************
Filename :- utility.h
Author :- Bateesh Dhingra
Date :- 11th Jul 2019
Description :- utility functions declaration e.g file read etc.
***********************************/
#ifndef _UTILITY_H_
#define _UTILITY_H_
#include <bits/stdc++.h>

using namespace std;

// extract the first number in a string
int extract_int(const string & );

// extract all numbers in a string
vector < int > extract_ints(const string & );

// read CVRP data file and parse to a vector
vector < vector < int > > readFile(const char * );

//getDistanceTable to preprocess all distance between any two customers

vector < vector < double > > getDistanceTable(vector < vector < int > > );
//getDistance between two points (px,py) and (dx,dy)
double getDistance(int px, int py, int dx, int dy);

// generic functions
template < typename T >
  bool contain(const vector < T > & vec,
    const T & elem) {
    if (find(vec.begin(), vec.end(), elem) == vec.end()) return false;
    else return true;
  }
 #endif
