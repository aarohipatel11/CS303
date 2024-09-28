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
    void push_front(Item_Type userData);
    void push_back(Item_Type userData);
    void pop_front();
    void pop_back();
    void front();
    void back();
    void insert(size_t index, const Item_Type& item);
    bool remove(size_t index);
    size_t find(const Item_Type& item);
    int getNumItems(){return num_items;}
};