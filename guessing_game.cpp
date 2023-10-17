#include <iostream>
#include <ctime>
using namespace std;
int rno,ans = 0;
void intro()
{
    cout << "Press 1 to play game. \nPress 2 for quit game.\n";
    int z;
    cin >> z;
    if (z == 2)
    {
        exit(0);
    }
    else if(z!=1 && z!=2){
        cout<<"Invalid input\n";
        intro();
    }
}

void thanks();

void guess(){
    int player_guess;
    cin >> player_guess;
    if(player_guess>20 || player_guess<1){
        cout<<"Invalid input, please guess the number between 1 to 20\nNow guess again\n";
        guess();
    }
    if (rno == player_guess)
    {
        cout << "!Wow marvellous!, you've guessed correct number\n";
        thanks();
    }
    else if (abs(rno - player_guess) <= 2)
    {
        cout << "Very nice guess and you were so close\n";
        ans++;
        cout<<"Please guess again\n";
        if(ans==3){
        cout << "The number was " << rno<<"\n";
        thanks();
        }
        else{
            guess();
        }
    }
    else
    {
        cout << "Oops the was not close, better luck next time.\n";
        ans++;
        cout<<"Please guess again\n";
        if(ans==3){
        cout << "The number was " << rno<<"\n";
        thanks();
        }
        else{
            guess();
        }
    }
}

int main()
{
    system("cls");
    intro();
    srand(time(0));
    rno = 1 + (rand() % 20);
    cout << "Please guess a number between 1 to 20\n";
    guess();
    return 0;
}

void thanks()
{
    cout << "Would you want to play again\nPress 1 to play again\nPress any key to Quit\n";
    int x;
    cin >> x;
    if (x == 1)
    {  
        guess();
    }
    else
    {
        cout << "Thanks for using this applications!!\n";
        exit(0);
    }
    
}