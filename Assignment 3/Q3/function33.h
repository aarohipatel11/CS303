#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <list>

using namespace std;

void insertionSort(list<int>& nums);
//Pre: takes in the unsorted, or it could be sorted (best case)
//Post: modifies the list for the integers in it to be sorted and changes the values as it 
    //goes because the list is passed by reference