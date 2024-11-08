#include <iostream>
#include <string>
#include <iomanip>
#include "function31.h"

int main(){
    try{
        //initate queue
        Linked<int> myQueue;
        
        //push values into the queue
        myQueue.push(3);
        myQueue.push(7);
        myQueue.push(18);
        myQueue.push(5);
        myQueue.push(45);
        myQueue.push(3);
        myQueue.push(88);
        myQueue.push(34);
        myQueue.push(1);
        myQueue.push(30);
        
        //display values of the queue
        if (myQueue.empty())
            cout << "The queue is empty and cannot be interated over to display values.";
        else{
            cout << "\nThe contents of the queue are: \n";
            for (int i = 0; i < myQueue.size(); i++){
                int valToPrint = myQueue.pop();
                cout << valToPrint << " ";
                myQueue.push(valToPrint);
            }
            cout << endl;
        }

        //call move to rear and display values of the queue
        myQueue.move_to_rear();
        cout << "Move to rear function called, here are the contents of the queue:\n";

        if (myQueue.empty())
            cout << "The queue is empty and cannot be interated over to display values.";
        else{
            for (int i = 0; i < myQueue.size(); i++){
                int valToPrint = myQueue.pop();
                cout << valToPrint << " ";
                myQueue.push(valToPrint);
            }
            cout << endl;
        } 
        
    }

    catch(...){
        cout << "There was an unexpected error.\n";
    }
    return 0;
}