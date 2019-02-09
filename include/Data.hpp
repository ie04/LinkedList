#pragma once
enum{ isLarger, isSmaller, isSame };

class Data {

public:
    Data(int);

    ~Data();

    //Compares its value with some other data, returning isLarger, isSmaller, or isSame
    int compare(const Data&);

    //Prints value variable
    void show() const;
private:
    //Stores node value
    int value;
    
};