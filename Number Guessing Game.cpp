#include <iostream>
#include <cstdlib>   
#include <ctime>

using namespace std;

int main() {
    srand((unsigned int) time(0));   

    int  Number = rand() % 100 + 1;   
    int guess;
    int attempts = 0;
    
    cout << "\n        ___WELCOME TO THE NUMBER GUESSING GAME" << endl;
    cout<< "\n you will have 3 chance to guess the correct number\n";
    int chanceleft=3;
    int playerinput;
    cout << "enter the number between 1 and 100." << endl;

    for(int i=1; i<=3; i++)
    { 
        cout<<"\n Enter the guess: ";
        cin>>guess;

        if (guess < Number) {
            cout << "Too low! try again" << endl;
        } else if (guess > Number) {
            cout << "Too high! try again" << endl;
        } else {
            cout<< "you won!"<<endl;
            cout << "Congrats! You guessed the correct number" << attempts << " attempts." << endl;
        }
        chanceleft--;
        cout<<"\n (chanceleft to guess the random number: " << chanceleft << ")"<<endl;
        
        if (chanceleft ==0)
        {
        cout<<"the random number was: " << Number <<endl;
        
        }
    } while (guess !=Number);

    return 0;
}