//I did use chatgpt for assistance on the list and iterator class functions since I am not that familiar with using them
//I also used the source code provided in the lecture slides for insertion sort on a vector, and modified it to work with iterators
#include "function33.h"


void insertionSort(list<int>& nums){
    //handling for if the list is empty
    if (nums.empty())
        cout << "The list is empty so there is nothing to sort.\n";
    else{
        //if the list only has one item in it, technically you don't need this, but i just thought of it so I put it in there
        if (nums.size() == 1)
            cout << "The sorted list is: " << nums.front() << endl;
        else{
            //insertion sort modified from the code on the slides
            cout << "The sorted list is: \n";
            list<int>::iterator iteri;
            list<int>::iterator iterj;
            int key;
            bool insertionNeeded = false;
            for (iterj = next(nums.begin()); iterj != nums.end(); ++iterj){
                key = *iterj;
                insertionNeeded = false;
                
                for (iteri = prev(iterj); iteri != prev(nums.begin()); iteri--){
                    if (key < *iteri){
                        *next(iteri) = *iteri;
                        insertionNeeded = true;
                    }
                    else
                        break;
                }
                if (insertionNeeded)
                    *next(iteri) = key;
            }
            //display the sorted list
            for (int num : nums)
            cout << num << " ";
            cout << endl;
        }
    }
}