#include "functions.h"

using namespace std;


void functionA(int array1[], int size){
    try{
        //get the integer from the user that they want to check, validate that it is a int
        //iterate over array to see if that value is in the array, if so return the index that
        //it is at, if not, say it isn't in the array. Using try catch blocks for different kinds of errors
        //and finally a catch all
        cin.clear();
        int userInt;
        string input;
        cout << "Please enter the integer you want to check: ";
        cin >> input;

        userInt = stoi(input);

        bool found = false;
        for (int i = 0; i < size; i++){
            if (array1[i] == userInt){
                cout << "Your value was found at index " << i << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << "Your value was not found in the array.\n";
        cin.clear();
    }
    catch (const invalid_argument&){
        cout << "Invalid input. Please enter a valid integer.\n";
    }
    catch(...){
        cout << "There was an unexpected error.\n";
    }
}

void functionB(int array1[], int size){
    try{
        //get the index that the user wants to modify, make sure that they entered an int and that it is a valid index
        //get the vnew value that they want to replace the old one with
        //do operations to make the changes, saving the old val in a variable to present the changes made to the user
        //try catch blocks for certain exceptions and a catch all for anything unexpected. 
        cin.clear();
        string userIndex, userNewVal;
        int userIndexInt, userNewValInt, userOldValInt;
        cout << "Please enter the index that you want to modify: ";
        cin >> userIndex;
        userIndexInt = stoi(userIndex);

        if ((userIndexInt < 0) || (userIndexInt >= size))
            throw runtime_error("This is an invalid index\n");
        cout << "Please enter the new value: ";
        cin >> userNewVal;
        userNewValInt = stoi(userNewVal);
        
        if (userNewValInt == 0)
            throw runtime_error("You cannot add a 0 to the array\n");
        
        if (userNewValInt == 0)
            throw runtime_error("You cannot add a 0 to the array\n");
        userOldValInt = array1[userIndexInt];
        array1[userIndexInt] = userNewValInt;
        cout << "The old value at index " << userIndex << " was " << userOldValInt << ". It is now " << userNewValInt << "." << endl;
        cin.clear();
    }
    catch(runtime_error& excpt){
        cout << excpt.what();
    }
    catch (const invalid_argument&){
        cout << "Invalid input. Please enter a valid integer.\n";
    }
    catch(...){
        cout << "There was an unexpected error.\n";
    }
}

void functionC(int array1[], int size){
    try{
        //initialize variable and count the amount of zeros in the array. 
        //if there is at least 1 zero, then the value can be added, else throw error
        //if the user tries to add a 0, it errors out, because the logic is to where the first 0, is the first "empty" space
        //add the value where the first 0 is seen and exit
        //try and catch to catch known and unknown exceptions. 
        cin.clear();
        int userValInt, zeroCounter;
        string userVal;
        for (int i = 0; i < size; i++){
            if (array1[i] == 0)
                zeroCounter++;
        }
        if (zeroCounter <= 0){
            throw runtime_error("There is not enough space in the array to add more values.\n"); 
        }
        cout << "Please enter the value you would like to add to the end of the array: ";
        cin >> userVal;
        userValInt = stoi(userVal);
        if (userValInt == 0)
            throw runtime_error("You cannot add a 0 to the array.\n"); 
        for (int j = 0; j < size; j++){
            if (array1[j] == 0){
                array1[j] = userValInt;
                cout << "You new value has been added to the end of the array.\n";
                break;
            }      
        }
        cin.clear();
    }
    catch(runtime_error& excpt){
        cout << excpt.what();
    }
    catch (const invalid_argument&){
        cout << "Invalid input. Please enter a valid integer.\n";
    }
    catch(...){
        cout << "There was an unexpected error.\n";
    }
}

void functionD(int array1[], int size){
    try{
        //get the index from the user that they want to remove, validate and
        //overwrite that value with a for loop
        //try and catch blocks for known and unknown exceptions
        cin.clear();
        int userIndexInt;
        string userIndex;
        cout << "Please enter the index of the element you would like to remove: ";
        cin >> userIndex;
        userIndexInt = stoi(userIndex);
        if ((userIndexInt < 0) || (userIndexInt >= size))
            throw runtime_error("This is an invalid index\n");
        for (int i = userIndexInt; i < size - 1; i++){
            if (i >= userIndexInt)
                array1[i] = array1[i + 1];
        }
        cin.clear();
    }
    catch(runtime_error& excpt){
        cout << excpt.what();
    }
    catch (const invalid_argument&){
        cout << "Invalid input. Please enter a valid integer.\n";
    }
    catch(...){
        cout << "There was an unexpected error.\n";
    }
}