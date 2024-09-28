#include "functions.h"

using namespace std;

//uses try and catch for invalid input (when inserting an int, if the user enters something else) and other unknown errors
void insertFunction(vector<int> &s1){
    try{
        int userIn;
        cout << "Please enter the value you would like to add to the stack: ";
        cin >> userIn;
        s1.push_back(userIn);
    }
    catch (const invalid_argument&){
        cout << "Invalid input. Please enter a valid integer.\n";
    }
    catch(...){
        cout << "There was an unexpected error.\n";
    }
}

//uses try catch for an unexpected error, otherwise calls the pop_back function to remove the last element/top of stack
//already verified in main whether it is empty or not
void removeElement(vector<int> &s1){
    try{
        s1.pop_back();
    }
    catch(...){
        cout << "There was an unexpected error.\n";
    }
}

//uses the back function to return the value at the end of the vector/top of the stack
//already verified in main whether it is empty or not
int topOfStack(vector<int> &s1){
    return s1.back();
}

int avgFunction(vector<int> &s1){
    int total = 0;
    for (int i = 0; i < s1.size(); ++i)
        total += s1[i];
    return (total / s1.size());
}