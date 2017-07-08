#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    struct pizza{
        string company;
        int diameter;
        double weight;
    };
    cout << "Enter pizza company: ";
    pizza hawai;
    cin >> hawai.company;
    cout << "Enter pizza diameter: ";
    cin >> hawai.diameter;
    cout << "Enter pizza weight: ";
    cin >> hawai.weight;
    cout << "Pizza from " << hawai.company << ", with diameter " <<
            hawai.diameter << " cm, weights " << hawai.weight << " km";

    return 0;
}

