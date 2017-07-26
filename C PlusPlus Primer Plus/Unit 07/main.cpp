#include <cstdlib>
#include <iostream>

using namespace std;

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void displayByValue(box myBox);
void displayByAddress(box *p_myBox);

int main(int argc, char** argv) {
    box myBox = {"Box A", 10, 20, 30, 5000};
    displayByValue(myBox);
    displayByAddress(&myBox);

    return 0;
}

void displayByValue(box myBox){
    cout << myBox.maker << ", " << myBox.height << ", " <<
            myBox.width << ", " << myBox.length << ", " <<
            myBox.volume << endl;
}

void displayByAddress(box *p_myBox){
    p_myBox->volume = p_myBox->height * p_myBox->width * p_myBox->length;
    cout << p_myBox->maker << ", " << p_myBox->height << ", " <<
            p_myBox->width << ", " << p_myBox->length << ", " <<
            p_myBox->volume << endl;    
}