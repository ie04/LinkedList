#include "LinkedList.hpp"

LinkedList::LinkedList(){
    head = new HeadNode;
}
void LinkedList::insert(Data* data){
    head->insert(data);
}