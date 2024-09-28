//Aarohi Patel Assignment 2 Q2 - stack with vector
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "functions.h"

using namespace std;

void Menu();
//Pre: Nothing
//Post: Prints the Menu for the user

int main(){
    vector<int> myStack;
    //test block, this is to show the contents of the stack, I know that iterating like this would not be a capability of stacks or efficient
    //for (int i = 0; i < myStack.size(); ++i){
    //    cout << myStack[i] << endl;
    //}
    char choice = 'y';
    Menu();
    cout << "Please make a selection: ";
    cin >> choice;
    choice = toupper(choice);
    //menu input verification 
    while (choice != 'Q'){
        while ((choice != 'A') && (choice != 'B') && (choice != 'C') && (choice != 'D') && (choice != 'E') && (choice != 'Q')){
            cout << "Please enter a valid input (A, B, C, D, E, Q) - ";
            cin >> choice;
            choice = toupper(choice);
        } 

        if (choice == 'A'){
            //function for option A, making sure the vector is not empty, and then calling the function
            if (myStack.empty())
                cout << "The stack is empty.\n";
            else 
                cout << "The stack is not empty.\n";
            cout << endl;
        }
        else if (choice == 'B'){
            //function for option B, calling the insert function
            insertFunction(myStack);
            cout << endl;
        }
        else if (choice == 'C'){
            //function for option C, making sure the vector is not empty, and then calling the remove function
            if (myStack.empty())
                cout << "The vector is empty, there is nothing at the top to remove.\n";
            else
                removeElement(myStack);
            
            cout << endl;
        }
        else if (choice == 'D'){
            int top;
            //function for option D, making sure the vector is not empty, and then calling the top of stack function
            if (myStack.empty())
                cout << "The vector is empty, there is nothing at the top.\n";
            else{
                top = topOfStack(myStack);
                cout << top << " is at the top of the stack.\n";
            }
            cout << endl;
        }
        else if (choice == 'E'){
            //function for option E, calling the average function. Making sure the vector is not empty, and then calling the average function for the stack
            if (myStack.empty())
                cout << "The vector is empty, there is nothing to average.\n";
            else{
                int sAverage;
                sAverage = avgFunction(myStack);
                cout << sAverage << " is the average of the stack.\n";
            }
            cout << endl;
        }
        else if (choice == 'Q')//for exiting the program
            break;
        Menu();
        cout << "Please make a selection: ";
        cin >> choice;
        choice = toupper(choice);
    }

    return 0;
}

//menu definition
void Menu(){
    cout << "\nChoose an option:" << endl;
    cout << "A. Check if the stack is empty." << endl; 
    cout << "B. Add a value to the stack." << endl;
    cout << "C. Remove a value from the stack." << endl;
    cout << "D. Find the top of the stack." << endl;
    cout << "E. Find the average of the stack." << endl;
    cout << "Q. Quit and exit the program." << endl;
}