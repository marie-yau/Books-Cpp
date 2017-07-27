#include <cstdlib>
#include <iostream>

using namespace std;

int fillArray(double *p_begin, double *p_end);
void showArray(double *p_begin, double *p_end);
void reverseArray(double *p_begin, double *p_end);

int main(int argc, char** argv) {
    int size = 7;
    double array[size];
    size = fillArray(array, array + size);
    showArray(array, array + size);
    reverseArray(array, array + size);
    showArray(array + 1, array + size + 1);
    reverseArray(array + 2, array + size - 1);
    showArray(array + 1, array + size + 1);

    return 0;
}

int fillArray(double *p_begin, double *p_end){
    int i = 0;
    while(p_end > p_begin){
        cout << "Enter number #" << (i+1) << ": ";
        if(!(cin >> (*p_begin)))         
            return i;
        p_begin++;
        i++;
    }
    return i + 1;
}

void showArray(double *p_begin, double *p_end){
    cout << "Numbers in array: ";
    while(p_end - 1 > p_begin){
        cout << (*p_begin) << " ";
        p_begin++;
    }    
    cout << endl;
}

void reverseArray(double *p_begin, double *p_end){
    double number1, number2;
    int size = p_end - p_begin;
    if(size % 2 == 0){
        for(int i = 0; i < size / 2; i++){
            number1 = *(p_begin + i);
            number2 = *(p_begin + size - 1 - i);
            *(p_begin + i) = number2;
            *(p_begin + size - 1 - i) = number1;
        }
    }
    else{
        for(int i = 0; i < (size - 1) / 2; i++){
            number1 = *(p_begin + i);
            number2 = *(p_begin + size - 1 - i);
            *(p_begin + i) = number2;
            *(p_begin + size - 1 - i) = number1;
        }
    }
}