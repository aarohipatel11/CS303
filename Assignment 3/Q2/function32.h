#pragma once

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;


int linear_search(vector<int>& items, int &target, size_t pos_last);
//Pre: takes in a vector, the target and the position of the first value to start at, which in this case is the last value in the vector
        //checks for if the vector is empty are already done by the time this function is called.
//Post: returns the index of the last occurrence of the target in the vector

//had to do this becuase there was something weird happeneing that didn't let me do vecotr<int> nums = {1,2,3}
void load(vector<int>& nums);
//Pre: Takes in an empty vector 
//Post: returns a loaded vector