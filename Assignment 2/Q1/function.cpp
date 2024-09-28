#include "function.h"

using namespace std;

//constructor of the class, which jsut sets default values for list
template <typename Item_Type>
Linked<Item_Type>::Linked(){
    headPtr = nullptr;
	tailPtr = nullptr;
    num_items = 0;
}


//return whether the list is empty or not depending on value of head pointer
template <typename Item_Type>
bool Linked<Item_Type>::empty(){
    return (headPtr == nullptr);
}


//adds a given value to the front of the list
template <typename Item_Type>
void Linked<Item_Type>::push_front(Item_Type userData){
    Node<Item_Type>* userNew = new Node<Item_Type>(userData);
    userNew->next = headPtr;
    headPtr = userNew;
    num_items++;
}


//adds a given value to the back of the list
template <typename Item_Type>
void Linked<Item_Type>::push_back(Item_Type userData){
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


//removes the value at the front of the list, or shows a message saying the list is empty
template <typename Item_Type>
void Linked<Item_Type>::pop_front(){
    try{
        if (headPtr == nullptr)
            throw runtime_error("\nCannot perform this operation b/c the list is empty.\n");
        else{
            Node<Item_Type>* temp = headPtr;
            //Item_Type data = headPtr->data; can be kept if you want to return the value popped
            headPtr = headPtr->next;
            delete temp;
            num_items--;
        }
    }
    catch(runtime_error& excpt){
        cout << excpt.what();
    }
    catch(...){
        cout << "There was an unexpected error.\n";
    }
}


//removes the value at the back of the list, or shows a message saying the list is empty
template <typename Item_Type>
void Linked<Item_Type>::pop_back(){
    try{
        if (headPtr == nullptr)
            throw runtime_error("\nCannot perform this operation b/c the list is empty.\n");
        else if (headPtr->next == nullptr){
            //Item_Type data = headPtr->data; can be kept if you want to return the value popped
            delete headPtr;
            headPtr = nullptr;
            tailPtr = nullptr;
            num_items--;
        }
        else{
            Node<Item_Type>* current_Node = headPtr;
            while (current_Node->next->next != nullptr)
                current_Node = current_Node->next;
            //Item_Type data = current_Node->next->data; can be kept if you want to return the value popped
            delete current_Node->next;
            current_Node->next = nullptr;
            tailPtr = current_Node;
            num_items--;
        }
    }
    catch(runtime_error& excpt){
        cout << excpt.what();
    }
    catch(...){
        cout << "There was an unexpected error.\n";
    }
}


//returns the value at the front of the list if the list is not empty, or returns a message saying that the list is empty
template <typename Item_Type>
void Linked<Item_Type>::front(){
    try{
        if (headPtr == nullptr)
            throw runtime_error("\nCannot perform this operation b/c the list is empty.\n");
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


//returns the value at the back of the list if the list is not empty, or returns a message saying that the list is empty
template <typename Item_Type>
void Linked<Item_Type>::back(){
    try{
        if (headPtr == nullptr)
            throw runtime_error("\nCannot perform this operation b/c the list is empty.\n");
        else{
            Node<Item_Type>* currentNode = headPtr;
            while (currentNode->next != nullptr)
                currentNode = currentNode->next;
            cout << "The value at the back is: " << currentNode->data;
        }
            
    }
    catch(runtime_error& excpt){
        cout << excpt.what();
    }
    catch(...){
        cout << "There was an unexpected error.\n";
    }
}


//inserts a value at a given index if its out of range it adds it to the end
template <typename Item_Type>
void Linked<Item_Type>::insert(size_t index, const Item_Type& item){
    if (index > num_items){
        index = num_items;
    }
    Node<Item_Type>* userNew = new Node<Item_Type>(item);
    if (index == 0){
        userNew->next = headPtr;
        headPtr = userNew;
    }
    else {
        Node<Item_Type>* current_Node = headPtr;
        for (int i = 0; i < index - 1; i++)
            current_Node = current_Node->next;
        userNew->next = current_Node->next;
        current_Node->next = userNew;
    }
    num_items++;
}


//removes a value from a given index and returns true, or if its an invalid index, it returns false
template <typename Item_Type>
bool Linked<Item_Type>::remove(size_t index){
    if (index < 0 || (index >= num_items)){
        return false;
    }
    if (index == 0){
        Node<Item_Type>* tempPtr = headPtr;
        headPtr = headPtr->next;
        delete tempPtr;
        num_items--;
        return true;
    }
    else{
        Node<Item_Type>* current_Node = headPtr;
        for (int i = 0; i < index - 1; i++)
            current_Node = current_Node->next;
        Node<Item_Type>* delete_Node = current_Node-> next;
        current_Node->next = delete_Node->next;
        delete delete_Node;
    
        num_items--;
        return true;
    }
}


//trys to find a given value in a list, returns the index if found, else returns the size of the list
template <typename Item_Type>
size_t Linked<Item_Type>::find(const Item_Type& item){
    Node<Item_Type>* current_Node = headPtr;
    for (size_t i = 0; i < num_items; i++){
        if ((current_Node != nullptr) && (current_Node->data == item))
            return i;
        current_Node = current_Node->next;
    }
    return num_items;
}

template class Linked<int>;