#include "Data.hpp"
#include <iostream>

//Compare values
enum{ isLarger, isSmaller, isSame };

Data::Data(int newValue):value(newValue){}

Data::~Data(){}

int Data::compare(const Data& toCmp){

    if( this->value > toCmp.value)
        return isSmaller;

    if( this->value < toCmp.value)
        return isLarger;
        
    else
        return isSame;
    
}

void Data::show(){ 
    std::cout << value << std::endl; 
}