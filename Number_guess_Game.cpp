#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//int random = offset + (rand() % range);

int main(){
    

    cout<<"\n\t\t\tWelcome to GuessTheNumber game!"<<endl;
    cout<<"You have to guess a number between 1 and 100. You'll have limited choices based on the level you choose. Good Luck!"<<endl;

    while(true){
        cout << "\nEnter the required number: \n";
        cout << "1 to start the number guessing game!\t";
        cout<<"0 to end this game!\n"<<endl;

        int choice ;
        cout<<"Enter the number: ";
        cin>>choice;

        srand(time(0));
        int secretNumber = 1 + (rand()% 100);
        int playerChoice;

        if(choice==1){
            cout << "\nYou have 10 choices for finding the secret number between 1 and 100.";
            int choicesLeft=10;
            for(int i=1;i<=10;i++){
                cout << "\n\nEnter the number: ";
                cin>>playerChoice;
                if(playerChoice==secretNumber){
                    cout << "Well played! You won, " << playerChoice << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout<<"Play the game again with us!!\n\n"<<endl;
                    break;
                }else{
                    cout << "Nope, " << playerChoice << " is not the right number\n";
                    if(playerChoice>secretNumber){
                        cout << "The secret number is smaller than the number you have chosen" << endl;
                    }
                    else{
                        cout << "The secret number is greater than the number you have chosen" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. " << endl;
                    if(choicesLeft==0){
                        cout << "You couldn't find the secret number, it was "<<secretNumber<<", You lose!!\n\n";
                        cout<<"Play the game again to win!!!\n\n";
                    }
                }
            }
        }
        else if(choice==0){
            return 0;
        }
        else{
            cout << "Wrong choice, Enter valid choice to play the game! (0,1)"<<endl;
        }
    }
    return 0;
}