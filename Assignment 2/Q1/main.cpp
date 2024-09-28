//Aarohi Patel Assignment 2 CS 303 - singly linked list
#include <iostream>
#include <string>
#include <iomanip>
#include "function.h"

//using namespace std;

void Menu();
//Pre: Nothing
//Post: Prints the Menu for the user

int main(){
    try{
        Linked<int> myList;
        char choice = 'y';
        Menu();
        cout << "Please make a selection: ";
        cin >> choice;
        choice = toupper(choice);
        //menu input verification 
        while (choice != 'Q'){
            while ((choice != 'A') && (choice != 'B') && (choice != 'C') && (choice != 'D') && (choice != 'Q') && (choice != 'E') && (choice != 'F') && (choice != 'G') && (choice != 'H') && (choice != 'I') && (choice != 'J')){
                cout << "Please enter a valid input (A, B, C, D, E, F, G, H, I, J, Q) - ";
                cin >> choice;
                choice = toupper(choice);
            }

            if (choice == 'A'){
                //push_front function
                int userVal;
                cout << "Please enter the value you would like to push: ";
                cin >> userVal;
                myList.push_front(userVal);
                cout << endl;
            }
            else if (choice == 'B'){
                //push_back function
                int userVal;
                cout << "Please enter the value you would like to push: ";
                cin >> userVal;
                myList.push_back(userVal);
                cout << endl;
            }
            else if (choice == 'C'){
                //pop_front function
                myList.pop_front();
                cout << "Function returned, either with error (if list is empty) or popped the first val\n";
                cout << endl;
            }
            else if (choice == 'D'){
                //pop_back function
                myList.pop_back();
                cout << "Function returned, either with error (if list is empty) or popped the last val\n";
                cout << endl;
            }
            else if (choice == 'E'){
                //front val
                myList.front();
                cout << endl;
            }
            else if (choice == 'F'){
                //back val
                myList.back();
                cout << endl;
            }
            else if (choice == 'G'){
                //empty function
                if (myList.empty())
                    cout << "The list is empty.";
                else 
                    cout << "The list is not empty.";
                cout << endl;
            }
            else if (choice == 'H'){
                //insert function
                int index; 
                int value;
                cout << "Enter the value you would like to insert: ";
                cin >> value;
                cout << "Enter the index you would like to insert this value in: ";
                cin >> index; 
                myList.insert(index, value);
                cout << endl;
            }
            else if (choice == 'I'){
                //remove function
                int index;
                cout << "Enter the index you want to remove from: ";
                cin >> index; 
                myList.remove(index);
                cout << endl;
            }
            else if (choice == 'J'){
                //find function
                int value;
                cout << "Enter the value you would like to search for: ";
                cin >> value;
                int found = myList.find(value);
                if (found == (myList.getNumItems()))
                    cout << "Your value was not found in the list.\n";
                else
                    cout << "Your value was found at index " << found << endl;
                cout << endl;
            }
            else if (choice == 'Q')
                break;
            Menu();
            cout << "Please make a selection: ";
            cin >> choice;
            choice = toupper(choice);    

        }
    }
    catch(...){
        cout << "There was an unexpected error.\n";
    }


    return 0;
}

//menu definition
void Menu(){
    cout << "\nChoose a function:" << endl;
    cout << "A. push_front" << endl; 
    cout << "B. push_back" << endl;
    cout << "C. pop_front" << endl;
    cout << "D. pop_back" << endl;
    cout << "E. front" << endl; 
    cout << "F. back" << endl;
    cout << "G. empty" << endl; 
    cout << "H. insert" << endl;
    cout << "I. remove" << endl;
    cout << "J. find" << endl;
    cout << "Q. Quit and exit the program." << endl;
}