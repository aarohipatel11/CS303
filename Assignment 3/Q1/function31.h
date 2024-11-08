#pragma once

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

template <typename Item_Type>
struct Node{
    Item_Type data;
    Node* next;
    //need this for creating the default node
    Node(const Item_Type& data, Node* next_ptr = nullptr) :data(data), next(next_ptr) {}
};

template <typename Item_Type>
class Linked {
private:
	Node<Item_Type>* headPtr;
	Node<Item_Type>* tailPtr;
    int num_items;
public:
	Linked(); //constructor
    bool empty();
    void push(Item_Type userData);
    Item_Type pop();
    void front();
    int size(){return num_items;}
    void move_to_rear();
};