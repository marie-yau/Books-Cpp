#include <cstdlib>
#include <iostream>

using namespace std;

struct person{
    string name;
    int age;
};


int main(int argc, char** argv) {
    person Marie = {"Marie", 23};
    cout << Marie.name << " is " << Marie.age << " years old.";

    return 0;
}

