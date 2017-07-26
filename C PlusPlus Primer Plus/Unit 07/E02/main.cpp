#include <cstdlib>
#include <iostream>

using namespace std;

int input (int array[], int maxSize);
void display (int array[], int size);
double computeAverage (int array[], int size);

int main(int argc, char** argv) {
    int maxSize = 10;
    int array[maxSize];
    cout << "Type -1 to quit." << endl;
    int size = input(array, maxSize);
    display(array, size);
    cout << "\nAverage: " << computeAverage(array, size);

    return 0;
}

int input(int array[], int maxSize){
    int size = 0;
    for(int i = 0; i < maxSize; i++){
        cout << "Enter score #" << (i+1) << ": ";
        while(!(cin >> array[i])){          
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Try again: ";
        }
        while(array[i] < -1){
            cout << "Try again: ";
            cin >> array[i];
        }
        if(array[i] == -1)
            break;
        size++;    
    }
    return size;
}

void display(int array[], int size){
    cout << "Your score:";
    for(int i = 0; i < size; i++){
        cout << " " << array[i];
    }
}

double computeAverage(int array[], int size){
    double sum;
    for(int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum / size;
}
