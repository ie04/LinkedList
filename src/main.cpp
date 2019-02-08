#include <iostream>
#include "LinkedList.hpp"
int main() {
    int userInt;
    LinkedList ll;
    Data* currData;

    while(1){
        std::cout << "Enter value, 0 to terminate: ";
        std::cin >> userInt;

        if(!userInt)
            break;
        
        currData = new Data(userInt);

        ll.insert(currData);

    }

    ll.show();
}