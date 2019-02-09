#pragma once
#include "Node.hpp"

class LinkedList {
    public:
        LinkedList();
        ~LinkedList(){ delete head; } //Deletes head, which sends a cycle of delete commands across the list
        void insert(Data*); //Gives it to head
        void show() const { head->show(); }
    private:
        HeadNode* head;


};