#include <cstdlib>
#include <iostream>

using namespace std;

double computeProbability(int number1, int number2, int numberChosen);
int factorial(int n);

int main(int argc, char** argv) {
    cout << "Let's compute probability of winning in lottery." << endl;
    cout << "Enter first range: ";
    int firstNumber1, firstNumber2;
    cin >> firstNumber1 >> firstNumber2;
    cout << "Enter number of chosen numbers: ";
    int chosenNumbers;
    cin >> chosenNumbers;
    double probability1 = computeProbability(firstNumber1, firstNumber2, chosenNumbers);
    cout << "Probability of winning this round is " << probability1 << ".\n\n";
    cout << "Enter second range: ";
    int secondNumber1, secondNumber2;
    cin >> secondNumber1 >> secondNumber2;
    double probability2 = computeProbability(secondNumber1, secondNumber2, 1);
    cout << "Probability of winning this round is " << probability2 << ".\n\n";
    double totalProbability = probability1 * probability2;
    cout << "Probability of winning grand prize is " << totalProbability << ".\n";    

    return 0;
}

double computeProbability(int number1, int number2, int numberChosen){
    int total = number2 - number1 + 1;
    double probability = (double)(factorial(numberChosen) * factorial(total - numberChosen))/factorial(total);
    return probability;
}

int factorial(int n){
    if(n > 1)
        return n * factorial(n - 1);   
    else
        return 1;
}