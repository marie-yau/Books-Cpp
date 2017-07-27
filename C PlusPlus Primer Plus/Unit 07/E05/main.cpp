#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int factorial(int n);

int main(int argc, char** argv) {
    int n = 0;
    bool stop = 0;
    while(true){
        cout << "Enter number: ";
        while(!(cin >> n)){
            cin.clear();
            while(n == '\n')
                continue;
            cout << "Try again: ";
        }
        int result = factorial(n);
        cout << "Factorial: " << result << endl;
        cout << "Cool... Once again? [y/n] ";
        string answer;
        do{
            cin >> answer;
            if(answer == "y")
                continue;
            else if(answer == "n"){
                stop = 1;
                break;
            }    
            else{
                cin.clear();
                while(answer == "\n")
                    continue;
                cout << "Try again: ";
            }
        }while(answer != "y" && answer != "n");    
        if(stop == 1)
            break;
    }

    return 0;
}

int factorial(int n){
    if(n > 1)
        return n * factorial(n-1);
    else
        return 1;
}
