
#include "Node.hpp"

//HeadNode
HeadNode::HeadNode(){
    next = new TailNode;
}
Node * HeadNode::insert(Data* data){
    next = next->insert(data);
    return this;
}

//InternalNode
InternalNode::InternalNode(Data* nData, Node* nNext): 
data(nData), next(nNext)
{}


Node* InternalNode::insert(Data* otherData){
    int result = data->compare(*otherData);

    switch(result){
        case isSame: //Does the same thing
        case isLarger: //Sets new node in front of it
        {
            InternalNode* dataNode = 
                new InternalNode(otherData, this);
            return dataNode;
        }
        case isSmaller: 
            next = next->insert(otherData);
            return this;
    }
    return this; //Avoid compiler warning


}

//TailNode
Node * TailNode::insert(Data* data){
    InternalNode* dataNode = new InternalNode(data, this);
    return dataNode;
}
