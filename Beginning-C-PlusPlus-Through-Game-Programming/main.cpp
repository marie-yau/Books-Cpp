#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    string word = "hello", *p_word = &word, **pp_word = &p_word;
    cout << (**pp_word) << ": " << (**pp_word).size() << endl;

    return 0;
}

