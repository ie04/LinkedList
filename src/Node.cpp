
#include "Node.hpp"

//HeadNode
HeadNode::HeadNode(){
    next = new TailNode; //Creates a tail when it is created. InternalNodes are placed between them
}

Node * HeadNode::insert(Data* data){
    next = next->insert(data); //Sends to next node
    return this; //Consistency
}

//InternalNode
InternalNode::InternalNode(Data* nData, Node* nNext): 
data(nData), next(nNext) //To be used in node creation
{}


Node* InternalNode::insert(Data* otherData){
    int result = data->compare(*otherData);

    switch(result){
        case isSame: //Does the same thing
        case isLarger: //Sets new node in front of it which points to itself
        {
            InternalNode* dataNode = 
                new InternalNode(otherData, this);
            return dataNode;
        }
        case isSmaller: //Sends it off to next node and asks it to deal with it
            next = next->insert(otherData);

            return this; //A pointer needs to be returned anyway even it isnt needed
    }
    return this; //Avoid compiler warning


}

//TailNode
Node * TailNode::insert(Data* data){
    InternalNode* dataNode = new InternalNode(data, this);
    return dataNode;
}
