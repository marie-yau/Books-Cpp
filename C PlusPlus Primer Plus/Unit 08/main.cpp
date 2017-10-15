#include <cstdlib>
#include <iostream>

template <class myType>
myType max5(myType array[]);

using namespace std;

int main(int argc, char** argv) {
    int array [5];
    cout << "Enter 5 numbers: ";
    cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4];
    int biggest = max5(array);
    cout << "The biggest number: " << biggest << endl;

    return 0;
}

template <class myType>
myType max5(myType array[]){
    myType biggest = array[0];
    for(int i = 0; i <= 4; i++){
        if(biggest < array[i]){
            biggest = array[i];
        }
    }    
    return biggest;
}