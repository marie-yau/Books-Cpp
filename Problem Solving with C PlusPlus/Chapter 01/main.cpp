#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout << "Enter character: ";
    char ch;
    cin >> ch;
    cout << "  " << ch << ch << "  " << endl;
    cout << " " << ch << "  " << ch << " " << endl;
    cout << " " << ch << "    " << endl;
    cout << " " << ch << "  " << ch << " " << endl;
    cout << "  " << ch << ch << "  " << endl;

    return 0;
}

