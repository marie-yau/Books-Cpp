#include <cstdlib>
#include <iostream>
#include "Stonewt.h"

using namespace std;

int main(int argc, char** argv) {
    Stonewt array [6];
    array[0] = Stonewt(10.2);
    array[1] = Stonewt(2.5);
    array[2] = Stonewt(23);
    double value;
    for(int i = 3; i < 6; i++){
        cout << "Enter value: ";
        cin >> value;
        array[i] = Stonewt(value);
    }
    
    Stonewt stone11 = Stonewt(11, 0);
    int smallest_index = 0, largest_index = 0, greater11_counter = 0;
    for(int i = 0; i < 6; i++){
        if(array[smallest_index] > array[i])
            smallest_index = i;
        if(array[largest_index] < array[i])
            largest_index = i;
        if(array[i] >= stone11)
            greater11_counter++;
    }
    
    cout << "\nSmallest: " << array[smallest_index];
    cout << "Largest: " << array[largest_index];
    cout << "There are " << greater11_counter << " than 11 stones.";

    return 0;
}

