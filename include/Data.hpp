#pragma once

class Data {

public:
    Data(int);

    ~Data();
    //Returns compare values: larger, smaller etc.
    int compare(const Data&);

    //Prints value variable
    void show();
private:
    //Stores node value
    int value;
};