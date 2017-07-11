#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout << "Enter number of rows: ";
    int numberRow;
    cin >> numberRow;
    for(int i = 1; i <= numberRow; i++){
        for(int j = numberRow - i; j > 0; j--){
            cout << ".";
        }
        for(int k = 1; k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

