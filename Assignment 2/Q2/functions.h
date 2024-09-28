#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

void insertFunction(vector<int> &s1);
//Pre: takes in the stack
//Post: inserts a user value to the top of the stack 

void removeElement(vector<int> &s1);
//Pre: takes in the stack after verification that it is not empty in main
//Post: uses the pop_back function to remove the value at the end of the vector/top of stack

int topOfStack(vector<int> &s1);
//Pre: takes in the stack after verification that it is not empty in main
//Post: uses the back() function to return the value at the end of the vector/top of the stack

int avgFunction(vector<int> &s1);
//Pre: takes in the stack after verification that it is not empty in main
//Post: goes through stack and returns the average of the int in it 