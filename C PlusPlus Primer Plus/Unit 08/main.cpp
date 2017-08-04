#include <cstdlib>
#include <iostream>

using namespace std;

struct chocolateBar{
    string brand = "Twix";
    double price = 3.5;
    int calories = 340;
};

void displayStructure(const chocolateBar &bar);
void setStructureUser(chocolateBar &bar);
void setStructureAuto(chocolateBar &bar, string *p_brand, double price, int calories);

int main(int argc, char** argv) {
    chocolateBar twix;
    setStructureUser(twix);
    displayStructure(twix);
    
    string brand = "Mars";
    setStructureAuto(twix, &brand, 6.1, 250);
    displayStructure(twix);

    return 0;
}

void displayStructure(const chocolateBar &bar){
    cout << "- " << bar.brand << endl;
    cout << "- " << bar.price << endl;
    cout << "- " << bar.calories << endl;
}

void setStructureAuto(chocolateBar &bar, string *p_brand, double price, int calories){
    bar.brand = *p_brand;
    bar.price = price;
    bar.calories = calories;
}

void setStructureUser(chocolateBar &bar){
    cout << "Set brand? [y/n]";
    char answer;
    cin >> answer;
    if(answer == 'y')
        cin >> bar.brand;
    cout << "Set price? [y/n]";
    cin >> answer;
    if(answer == 'y')
        cin >> bar.price;
    cout << "Set calories? [y/n]";
    cin >> answer;
    if(answer == 'y')
        cin >> bar.calories;
}