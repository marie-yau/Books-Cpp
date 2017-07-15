#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    double array[10];
    double sum = 0;
    for(int i = 0; i < 10; i++){
        cout << "Enter " << (i + 1) << "# number: ";
        while(!(cin >> array[i])){
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Try again: ";
        }
        sum += array[i];
    }
    double average = sum / 10;
    cout << "Average value: " << average << endl;
    cout << "Values exceeding average value: ";
    for(int j = 0; j < 10; j++){
        if(array[j] > average)
            cout << array[j] << " ";
    }

    return 0;
}

