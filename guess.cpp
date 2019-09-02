#include <iostream>
using namespace std;

int main(){
    int ans = 5, guess;

    cout << "Guess a number between 1 an 10 or enter 0 to exit: ";
    cin >> guess;

    while(guess != 0){
        if(guess == ans){
            cout << "Correct!" << endl;
            return 0;
        }
        else{
            cout << "Incorrect. Enter another number or e to exit: ";
            cin >> guess;
        }
    }
    return 0;
}