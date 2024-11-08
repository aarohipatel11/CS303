#include "function31.h"

using namespace std;

//constructor of the class, which just sets default values for queue
template <typename Item_Type>
Linked<Item_Type>::Linked(){
    headPtr = nullptr;
	tailPtr = nullptr;
    num_items = 0;
}

//return whether the queue is empty or not depending on value of head pointer
template <typename Item_Type>
bool Linked<Item_Type>::empty(){
    return (headPtr == nullptr);
}

//returns the value at the front of the queue if the queue is not empty, or returns a message saying that the queue is empty
template <typename Item_Type>
void Linked<Item_Type>::front(){
    try{
        if (headPtr == nullptr)
            throw runtime_error("\nCannot perform this operation b/c the queue is empty.\n");
        else   
            cout << "The value at the front is: " << headPtr->data;
    }
    catch(runtime_error& excpt){
        cout << excpt.what();
    }
    catch(...){
        cout << "There was an unexpected error.\n";
    }
}

//adds a given value to the back of the queue
template <typename Item_Type>
void Linked<Item_Type>::push(Item_Type userData){
    Node<Item_Type>* userNew = new Node<Item_Type>(userData);
    if (headPtr == nullptr)
        headPtr = userNew;
    else{
        Node<Item_Type>* current_Node = headPtr;
        while (current_Node->next != nullptr)
            current_Node = current_Node->next;
        current_Node->next = userNew;
    }
    num_items++;
}

//removes the value at the front of the queue, and returns that value, or shows a message saying the queue is empty
template <typename Item_Type>
Item_Type Linked<Item_Type>::pop(){
    try{
        if (headPtr == nullptr)
            throw runtime_error("\nCannot perform this operation b/c the queue is empty.\n");
        else{
            Node<Item_Type>* temp = headPtr;
            Item_Type data = headPtr->data; 
            //can be kept if you want to return the value popped
            headPtr = headPtr->next;
            delete temp;
            num_items--;
            return data;
        }
    }
    catch(runtime_error& excpt){
        cout << excpt.what();
    }
    catch(...){
        cout << "There was an unexpected error.\n";
    }
}

//moves the element currently at the front of the queue to the rear of the queue.
template <typename Item_Type>
void Linked<Item_Type>::move_to_rear(){
    try{
        if (headPtr == nullptr)
            throw runtime_error("\nCannot perform this operation b/c the queue is empty.\n");
        else{
            Item_Type dataAtFront = headPtr->data;
            Linked<Item_Type>::pop();
            Linked<Item_Type>::push(dataAtFront);
        }
    }
    catch(runtime_error& excpt){
        cout << excpt.what();
    }
    catch(...){
        cout << "There was an unexpected error.\n";
    }
}


template class Linked<int>;