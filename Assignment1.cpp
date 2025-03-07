#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    cout << "\n\t\t\tNumber Guessing Game!!"
    <<endl;
    cout << "You must guess a number between 1 and 50. "
        "\nYou will be told if your guess is too high or low."
        <<endl;

        srand(time(0));
        
    while(true){
        //start game
        cout << "Press 1 to start and 0 to exit"
        <<endl;

       int ready;
       cout << "Begin?: ";
       cin >> ready;
        
    if (ready == 1){    

        //number generator
        srand(time(0));
        int secretNumber = 1 + (rand() % 50);
        int choice;
        int choicesLeft = 10;

        cout << "I have chosen my number between 1 and 50."
        << "You have 10 chances to figure it out."
        <<endl;
        
        
        for (int i =1; i <=10; i++){
            //guessing prompt
            cout << "\nWhats the number?: ";
            cin >> choice;

            //does it match?
            if (choice == secretNumber){
                cout << "You win!! "
                << choice
                << " is the right number!" << endl;

                cout << "See you next time!!\n\n"
                <<endl;
                break;
            }
            else {
                //wrong
                cout << "Sorry, "
                << choice
                << " is not correct :( ";
                
                //lower
                if (choice > secretNumber){
                    cout << "\nMy number is lower than yours."
                    <<endl;
                }
                //higher
                else {
                    cout << "\nThe number I chose is higher than this."
                    <<endl;
                }
                choicesLeft--;
                cout << "I'll give you "
                << choicesLeft
                << " more tries to find my number."
                <<endl;

                if (choicesLeft == 0){
                    cout << "AW man, you lost!"
                    << "The number I chose was "
                    << secretNumber
                    << ". Better luck next time!";
                }
            }
        }
    }
     //no
    else if (ready == 0){
        cout << "Goodbye!";
       exit(0);
    }
    else{
        cout << "Invalid input, please type 1 or 0."
        << endl;
    }
    }
    return 0;
}