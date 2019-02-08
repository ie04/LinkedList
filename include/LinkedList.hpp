#pragma once
#include "Node.hpp"

class LinkedList {
    public:
        LinkedList();
        ~LinkedList(){ delete head; }
        void insert(Data*);
        void show() const { head->show(); }
    private:
        HeadNode* head;


};