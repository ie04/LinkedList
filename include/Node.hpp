#pragma once
#include "Data.hpp"

class Node {

    public:
        Node() {}
        virtual ~Node() {}
        virtual Node* insert(Data*) = 0;
        virtual void show() = 0;

    private:
};

class HeadNode : public Node{
    public:
        HeadNode();
        virtual ~HeadNode() { delete next; }
        virtual Node* insert(Data*);
        virtual void show(){ next->show(); }

    private:
        Node* next;
};

class InternalNode : public Node{
    public:
        InternalNode(Data*, Node*);
        virtual ~InternalNode() { delete next; delete data; }
        virtual Node* insert(Data*);
        virtual void show() { data->show(); next->show(); }

    private:
        Data* data;
        Node* next;
};

class TailNode : public Node{

    public:
    TailNode(){};
    virtual ~TailNode(){};
    virtual Node* insert(Data*);
    virtual void show() {};

    private:
};