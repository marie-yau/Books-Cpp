#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

struct programmer{
    string name;
    string title;
    string nickName;
    int preference;
};

int main(int argc, char** argv) {
    programmer *array = new programmer[2];
    array[0].name = "Mike";
    array[0].title = "Ing";
    array[0].nickName = "Big Mike";
    array[0].preference = 2;
    array[1].name = "Kate";
    array[1].title = "Mgr";
    array[1].nickName = "Kitty";
    array[1].preference = 0; 
    char choice;
    
    do{
        cout << "Display members by: \n";
        cout << "a) Name \t b) Title\n";
        cout << "c) Nickname \t d) Preference\n";
        cin >> choice;
    }
    while(choice < 'a' || choice > 'd');
    for(int i = 0; i < 2; i++){
        switch(choice){
            case 'a': cout << array[i].name << endl;
                break;
            case 'b': cout << array[i].title << endl;
                break;
            case 'c': cout << array[i].nickName << endl;
                break;
            case 'd': 
                if(array[i].preference == 0)
                    cout << array[i].name << endl;
                else if(array[i].preference == 1)
                    cout << array[i].title << endl;
                else
                    cout << array[i].nickName << endl;
        }
    }
    return 0;
}

