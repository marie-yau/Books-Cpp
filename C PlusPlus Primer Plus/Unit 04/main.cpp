#include <cstdlib>
#include <iostream>

using namespace std;

struct person{
    string name;
    int age;
};

int main(int argc, char** argv) {
    person friends[2] = {{"Paul", 20}, {"John", 23}};
    cout << "My friends are " << friends[0].name << " and " << friends[1].name << ".";

    return 0;
}

