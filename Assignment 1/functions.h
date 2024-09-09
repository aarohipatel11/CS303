#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

void functionA(int array1[], int size);
//Pre: take in the array and the size of the array as parameters
//Post: check if the user entered int is in the array and if so, return the index in which it is at. 

void functionB(int array1[], int size);
//Pre: take in the array and the size of the array as parameters
//Post: modifies the index the user wants to change and return the old and new values at that index.

void functionC(int array1[], int size);
//Pre: take in the array and the size of the array as parameters
//Post: add the user value to the end of the array

void functionD(int array1[], int size);
//Pre: take in the array and the size of the array as parameters
//Post: Remove the value at the user provided index
