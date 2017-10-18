#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

template <class myType>
myType maxn(myType array[], int size);
template <>
char * maxn(char * array[], int n);

int main(int argc, char** argv) {
    char a[] = "doggy", b[] = "cat", c[] = "pig", d[] = "elephant", e[] = "rabbit";
    char *arrString[5] = {a, b, c, d, e};
    cout << "Longest: " << maxn(arrString, 5) << endl;
    
    int arrInt[] = {1,6,-4,10,3};
    cout << "Largest: " << maxn(arrInt, 5) << endl;

    return 0;
}

template <class myType>
myType maxn(myType array[], int size){
    myType biggest = array[0];
    for(int i = 0; i < size; i++){
        if(biggest < array[i]){
            biggest = array[i];
        }
    }    
    return biggest;
}

template <>
char * maxn(char * array[], int n){
    char * largest = array[0];
    for(int i = 0; i < n; i++){
        if(strlen(array[i]) > strlen(largest)) {
            largest = array[i];
        } 
    }
    return largest;  
}
