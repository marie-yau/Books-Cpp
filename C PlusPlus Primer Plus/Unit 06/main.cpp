#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout << "Enter sentence (q to stop): ";
    char sentence[100];
    int vowels = 0, consonants = 0, others = 0;
    cin.getline(sentence, 100);
    
    if(isalpha(sentence[0])){
        switch(sentence[0]){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            case 'y':
            case 'Y':
                vowels += 1;
                break;
            default:
                consonants += 1;
                break; 
        }        
    }
    else
        others += 1;

    for(int i = 0; i < 99; i++){
        if(sentence[i] == ' '){
            if(sentence[i+1] == 'q' && sentence[i+2]){
                break;
            }
            if(isalpha(sentence[i+1])){
                switch(sentence[i+1]){
                    case 'a':
                    case 'A':
                    case 'e':
                    case 'E':
                    case 'i':
                    case 'I':
                    case 'o':
                    case 'O':
                    case 'u':
                    case 'U':
                    case 'y':
                    case 'Y':
                        vowels += 1;
                        break;
                    default:
                        consonants += 1;
                        break;
                }
            }    
            else{
                others += 1;
            }    
        }   
    }
    cout << "Vowels: " << vowels << "\nConsonants: " << consonants << "\nOthers: " << others;
  
    return 0;
}

