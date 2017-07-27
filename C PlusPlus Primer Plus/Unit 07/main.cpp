#include <cstdlib>
#include <iostream>

using namespace std;

int fillArray(double array[], int size);
void showArray(double array[], int size);
void reverseArray(double array[], int size);

int main(int argc, char** argv) {
    double array[5];
    int size = 7;
    size = fillArray(array, size);
    showArray(array, size);
    reverseArray(array, size);
    showArray(array, size);
    reverseArray(array + 1, size - 2);
    showArray(array, size);

    return 0;
}

int fillArray(double array[], int size){
    for(int i = 0; i < size; i++){
        cout << "Enter number #" << (i+1) << ": ";
        if(!(cin >> array[i]))         
            return i;
    }
    return size;
}

void showArray(double array[], int size){
    cout << "Numbers in array: ";
    for(int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

void reverseArray(double array[], int size){
    double number1, number2;
    if(size % 2 == 0){
        for(int i = 0; i < size / 2; i++){
            number1 = array[i];
            number2 = array[size - 1 - i];
            array[i] = number2;
            array[size - 1 - i] = number1;
        }
    }
    else{
        for(int i = 0; i < (size - 1) / 2; i++){
            number1 = array[i];
            number2 = array[size - i - 1];
            array[i] = number2;
            array[size - i - 1] = number1;
        }
    }
}