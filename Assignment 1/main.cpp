//Aarohi Patel Assignment 1 CS 303 - Arrays
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "functions.h"

using namespace std;

void Menu();
//Pre: Nothing
//Post: Prints the Menu for the user

int main(){
    //opening the file and verifying that it is open
    ifstream inFile;
    inFile.open("A1input.txt");
    if (!inFile.is_open()){
        cout << "There was an error in opening the input file.\n";
        return 0;
    }

    //initialize array and load array with file values
    int myArray[200] = {};
    for (int i = 0; i < 100; i++){
        int tempVal;
        inFile >> tempVal;
        myArray[i] = tempVal;
    }
    
    //test block
    /*for (int i = 0; i < 200; i++){
        cout << myArray[i] << " ";
    }
    cout << endl;*/

    //menu implementation
    char choice = 'y';
    Menu();
    cout << "Please make a selection: ";
    cin >> choice;
    choice = toupper(choice);
    //menu input verification 
    while (choice != 'Q'){
        while ((choice != 'A') && (choice != 'B') && (choice != 'C') && (choice != 'D') && (choice != 'Q')){
            cout << "Please enter a valid input (A, B, C, D, Q) - ";
            cin >> choice;
            choice = toupper(choice);
        } 

        if (choice == 'A'){
            //function for option A
            functionA(myArray, 200);
            for (int i = 0; i < 200; i++){
                cout << myArray[i] << " ";
            }
            cout << endl;
        }
        else if (choice == 'B'){
            //function for option B
            functionB(myArray, 200);
            for (int i = 0; i < 200; i++){
                cout << myArray[i] << " ";
            }
            cout << endl;
        }
        else if (choice == 'C'){
            //function for option C
            functionC(myArray, 200);
            for (int i = 0; i < 200; i++){
                cout << myArray[i] << " ";
            }
            cout << endl;
        }
        else if (choice == 'D'){
            //function for option D
            functionD(myArray, 200);
            for (int i = 0; i < 200; i++){
                cout << myArray[i] << " ";
            }
            cout << endl;
        }
        else if (choice == 'Q')
            break;
        Menu();
        cout << "Please make a selection: ";
        cin >> choice;
        choice = toupper(choice);
    }
    //close input file
    inFile.close();
}

//function definition for menu
void Menu(){
    cout << "\nChoose an option:" << endl;
    cout << "A. Check if a certain integer exists in the array." << endl; 
    cout << "B. Modify a value in the array with the index." << endl;
    cout << "C. Add a new integer to the end of the array." << endl;
    cout << "D. Remove an integer with the index." << endl;
    cout << "Q. quiz and exit the program." << endl;
}