#include <cstdlib>
#include <iostream>
#include <new>
#include <string>

using namespace std;

int size = 2;
struct chaff{
    char dross[20];
    int slag;
};

int main(int argc, char** argv) {
    chaff * buffer = new chaff[size];
    
    strcpy(buffer[0].dross, "Abc");
    buffer[0].slag = 20;
    strcpy(buffer[1].dross, "Klm");
    buffer[1].slag = 3;
    
    for(int i = 0; i < size; i++)
        cout << buffer[i].dross << "\t" << buffer[i].slag << endl;
    
    delete [] buffer;
    return 0;
}

