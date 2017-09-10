#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    double one = 1.000, two = 1.414, three = 1.732, four = 2.000, five = 2.236;
    cout << "N\tSquare Root\n";
    cout << "1\t" << one << endl;
    cout << "2\t" << two << endl;
    cout << "3\t" << three << endl;
    cout << "4\t" << four << endl;
    cout << "5\t" << five << endl;

    return 0;
}

