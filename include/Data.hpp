#pragma once
enum{ isLarger, isSmaller, isSame };

class Data {

public:
    Data(int);

    ~Data();

    //Returns compare values: larger, smaller, etc.
    int compare(const Data&);

    //Prints value variable
    void show() const;
private:
    //Stores node value
    int value;
    
};