#pragma once
#include "Data.hpp"

//Node ADT
class Node {

    public:
        Node() {}
        virtual ~Node() {}
        virtual Node* insert(Data*) = 0;
        virtual void show() = 0;

    private:
};
//HeadNode stores no data, but instead sends it to the first InternalNode to deal with
class HeadNode : public Node{
    public:
        HeadNode();
        virtual ~HeadNode() { delete next; }
        virtual Node* insert(Data*);
        virtual void show(){ next->show(); }

    private:
        Node* next;
};
/*
InternalNode stores data and points to other nodes, it compares an incoming value
with itself and decides whether to create a new node before it (if it is larger)
or send it off to the next node (if it is smaller)
*/
class InternalNode : public Node{
    public:
        InternalNode(Data*, Node*);
        virtual ~InternalNode() { delete data; delete next; } //Deletes its value and then asks the next node to do the same
        virtual Node* insert(Data*);
        virtual void show() { data->show(); next->show(); } 
            /*
            Shows data and then asks the next node to run the same function, thereby cycling
            through the entire linked list
            */
    private:
        Data* data;
        Node* next;
};
/*
TailNode does not store data or point to another node, if data is sent to it,
it creates a node before itself (since it must be the largest value)
*/
class TailNode : public Node{

    public:
    TailNode(){};
    virtual ~TailNode(){};
    virtual Node* insert(Data*);
    virtual void show() {}; //Ends the cycle of show() commands

    private:
};