# include "function33.h"

int main(){
    try{
        //initalize list and push some values onto it.
        list<int> myList;
        myList.push_back(75);
        myList.push_back(25);
        myList.push_back(35);
        myList.push_back(20);
        myList.push_back(10);

        //display contents of unsorted list
        cout << "Here are the contents of the original list: \n";
        for (int val : myList)
            cout << val << " ";
        cout << endl;

        //call insertion sort function
        insertionSort(myList);
        

    }
    catch(...){
        cout << "There was an unexpected error.\n";
    }
    return 0; 
}