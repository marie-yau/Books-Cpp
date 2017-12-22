#include <cstdlib>
#include <string>

#include "Person.h"

using namespace std;

int main(int argc, char** argv) {
    Person p1 = Person("Smith", "Peter");
    Person p2("Willson", "James");
    Person *p3 = new Person("Small", "Jane");
    Person p4;
    
    p1.FormalShow();
    p2.Show();
    p3->FormalShow();
    p4.Show();

    return 0;
}

