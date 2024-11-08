#include "function32.h"
#include <vector>

int main(){
    try{
        vector<int> myNumbers;
        load(myNumbers);
        int userTarget;
        cout << "Here are the values in the vector:\n";
        for (auto i : myNumbers)
            cout << i << " ";
        cout << endl;
        cout << "Enter the target you would like to search for: ";
        cin >> userTarget;
        if (myNumbers.empty())
            cout << "The vector is empty, so no values can be searched.\n";
        else{
            int result = linear_search(myNumbers, userTarget, myNumbers.size() - 1);
            if (result == -1)
                cout << "That value was not found in the vector.\n";
            else 
                cout << "Your the last occurence of the value in question is at index " << result << ".\n";
        }
    }
    catch(...){
        cout << "There was an unexpected error.\n";
    }
    return 0; 
}