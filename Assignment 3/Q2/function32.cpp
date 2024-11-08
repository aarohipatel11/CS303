#include "function32.h"
#include <vector>

using namespace std;


int linear_search(vector<int>& items, int &target, size_t pos_last){
    if (pos_last == -1)
        return -1;
    if (target == items[pos_last])
        return pos_last;
    else 
        return linear_search(items, target, pos_last - 1);
}

void load(vector<int>& nums){
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(3);
    nums.push_back(54);
    nums.push_back(87);
    nums.push_back(23);
    nums.push_back(54);
    nums.push_back(6);
    nums.push_back(4);
    nums.push_back(7);
}