#include <iostream>
using namespace std;

//function for the options to choose from
//function for fortunes
//this game needs to provide the next set of options based on the previous choice

    //classes and functions
class OptionsClass{
    private:
    int choice1;
    int choice2;
    int choice3;

    public:
    //opening sequence
    void welcome(){
        cout << "Welcome Traveler, I see you have come seeking fortune." << endl;
        while(true){
            int ready;
            cout << "\e[1m 1. Aye\e[0m" << endl;
            cout << "\e[1m 2. Nay\e[0m" << endl;
            cout << "Your choice: " << endl;
            cin >> ready;
            if (ready == 1){
                getChoice1();
                break;
            }
            else if (ready == 2){
                cout << "Then be on your way." << endl;
                exit (0);
            }
            else if (ready != 1, 2){
                cout << "I'm sorry, I didn't understand that." << endl;
            }
    }
}


    //options
    void getChoice1(){
        cout << "Where are you headed?" << endl;
        cout << "1. North" << endl;
        cout << "2. South" << endl;
        cout << "3. East" << endl;
        cout << "4. West" << endl;
        cout << "Your choice: " << endl;
        cin >> choice1;
        if (choice1 == 1||2||3||4){
            getChoice2();
        }
        else {
            cout << "I'm sorry, I didn't understand that." << endl;
        }
    }
    void getChoice2(){
            cout << "I see, and what do you seek there?" << endl;
            cout << "5. Friendship" << endl;
            cout << "6. Saftey" << endl;
            cout << "7. Revenge" << endl;
            cout << "8. Adventure" << endl;
            cout << "Your choice: " << endl;
            cin >> choice2; 
        if (choice2 == 5||6||7||8){
            getChoice3();
        }
        else {
            cout << "I'm sorry, I didn't understand that." << endl;
        }
    }

    void getChoice3(){
            cout << "Oh? Are you certain?" << endl;
            cout << "9. It is written" << endl;
            cout << "10. We will see" << endl;
            cout << "Your choice: " << endl;
            cin >> choice3;
        if (choice3 == 9||10){
            getFortune();
        }
        else {
            cout << "I'm sorry, I didn't understand that." << endl;
        }
    }


    //fortunes
    void getFortune(){
        cout << "I understand now. Let me tell you your fortune:" << endl;
        if (choice1 == 1, choice2 == 5, choice3 == 9){
            cout << "A freak storm will come out of nowhere. Prepare by going to the dentist before you leave, not after." << endl;
        }
        else if (choice1 == 2, choice2 == 5, choice3 == 9){
            cout << "Eat nothing you had no hand in making. They seek to trap you." << endl;
        }
        else if (choice1 == 3, choice2 == 5, choice3 == 9){
            cout << "They never forgot you. Whether that is good or bad depends on if you remember them." << endl;
        }
        else if (choice1 == 4, choice2 == 5, choice3 == 9){
            cout << "The molehill on your side will become a mountain. 7 days." << endl;
        }
        else if (choice1 == 1, choice2 == 6, choice3 == 9){
            cout << "Double scan all documents, cerburus guards the gate." << endl;
        }
        else if (choice1 == 2, choice2 == 6, choice3 == 9){
            cout <<"Wild fires burn all trees, whether aspen or oak makes no diffrence. Be a redwood." << endl;
        }
        else if (choice1 == 3, choice2 == 6, choice3 == 9){
            cout <<"Lemons are a girls best friend. Francis is a liar." << endl;
        }
        else if (choice1 == 4, choice2 == 6, choice3 == 9){
            cout <<"A worm is turning in its grave. 3 months." << endl;
        }
        else if (choice1 == 1, choice2 == 7, choice3 ==9){
            cout <<"17 shadows, none of them yours. When did you lose it? Who has it now?" << endl;
        }
        else if (choice1 == 2, choice2 == 7, choice3 == 9){
            cout <<"A cup of sugar goes a long way to mending distant relationships. " << endl;
        } 
        else if (choice1 == 3, choice2 == 7, choice3 == 9){
            cout <<"Its already dead. There is nothing for you now, only woodchucks." << endl;
        }     
        else if (choice1 == 4, choice2 == 7, choice3 ==9){
            cout << "Your mother has opinions on that subject. You should call her. 13 weeks." << endl;
        } 
        else if (choice1 == 1, choice2 == 8, choice3 == 9){
            cout <<"Bring a gorilla suit and extra trousers. The avalanche will bring you closer to love." << endl;
        }
        else if (choice1 == 2, choice2 == 8, choice3 == 9){
            cout <<"A shark will become intimately familiar with your bone structure. Eat sunscreen." << endl;
        }
        else if (choice1 == 3, choice2 == 8, choice3 == 9){
            cout << "Vending machine accidents are on the rise. Be careful who you trust. 116 days." << endl;
        }
        else if (choice1 == 4, choice2 == 8, choice3 ==9){
            cout << "A wise man learns from the mistakes of others, rather than by making mistakes himself. Kill that guy." << endl;
        }
        else if (choice1 == 1, choice2 == 5, choice3 == 10){
            cout << "A rival seeks reconnection. You will want to shower before answering the phone. 15 seconds." << endl;
        }
        else if (choice1 == 2, choice2 == 5, choice3 == 10){
            cout <<"Return to excel spreadsheets. You forgot something important there, no I will not give you a hint." << endl;
        }
        else if(choice1 == 3, choice2 == 5, choice3 == 10){
            cout << "A new cup is in your future. Several things will go wrong first, the cup will help with none of them." << endl;
        }
        else if(choice1 == 4, choice2 == 5, choice3 ==10){
            cout << "You will have many friends for 3 days. Dont look for them, they do not want to be found." << endl;
        }
        else if(choice1 == 1, choice2 == 6, choice3 == 10){
            cout << "They know where you are now. Remain vigilent." << endl;
        }
        else if(choice1 == 2, choice2 == 6, choice3 == 10){
            cout <<"The ice is thin where you step. Belly crawl for best results." << endl;
        }
        else if(choice1 == 3, choice2 == 6, choice3 == 10){
            cout << "13 is your lucky number this summer. Sacrifice a goat for best results in the county fair." << endl;
        }
        else if(choice1 == 4, choice2 == 6, choice3 == 10){
            cout <<"Cut off the head of a hydra and three emerge in its place. But have you tried starving it? 6 weeks." << endl;
        }
        else if(choice1 == 1, choice2 == 7, choice3 == 10){
            cout <<"12 hours 3 minutes 24 seconds" << endl;
        }
        else if(choice1 == 2, choice2 == 7, choice3 == 10){
            cout <<"Nestle will be contacting you shortly. Be ready to run." << endl;
        }
        else if(choice1 == 3, choice2 == 7, choice3 == 10){
            cout <<"Its okay to give up. Please, for the love of everything good, give up." <<endl;
        }
        else if(choice1 == 4, choice2 == 7, choice3 == 10){
            cout <<"Do you remember fruit tootsie rolls? A trip to woodmans will bring you luck with an auto loan." << endl;
        }
        else if(choice1 == 1, choice2 == 8, choice3 == 10){
            cout <<"Two vast and trunkless legs of stone stand in the desert. You could be that trunk. Dream bigger." << endl;
        }
        else if(choice1 == 2, choice2 == 8, choice3 == 10){
            cout <<"Close the blinds, the birds are watching. Let them gossip, bird politics will never affect you." << endl;
        }
        else if(choice1 == 3, choice2 == 8, choice3 == 10){
            cout << "Keep a stapler on your person. Attacks will rain from above, hold yourself together. 20 years." << endl;
        }
        else if(choice1 == 4, choice2 == 8, choice3 == 10){
            cout <<"A table will bring you joy. Friendships will need mending and an addiction to rocks is entering your present." << endl;
        }
        else {
            cout << "I'm sorry, the fates have nothing to say to you. Get out." << endl;
        }


    }
    

    //play game
    void play(){
        //welcoming the player
        welcome(); //welcome is connected to getChoice1, so that doesnt need to be added here
    }

};



//main game code
int main(){
    //object of the class  
    OptionsClass options;
    //play the game
    options.play();

    return 0;
}