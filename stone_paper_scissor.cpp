#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;
string cg;
void intro()
{
    cout << "Press 1 to play game. \nPress 2 for quit game.\n";
    int z;
    cin >> z;
    if (z == 2)
    {
        exit(0);
    }
}

void computer_output()
{
    // Want to print random value betwen (0,2);
    srand(time(0));
    int c = 1 + (rand() % 3);
    if (c == 1)
    {
        cout << "The computer chosed: rock\n";
        cg = "rock";
    }
    else if (c == 2)
    {
        cout << "The computer chosed: scissors\n";
        cg = "scissors";
    }
    else if (c == 3)
    {
        cout << "The computer chosed: paper\n";
        cg = "paper";
    }
}

void status(string ip, string cp)
{
    // to lower the string and compare it
    transform(ip.begin(), ip.end(), ip.begin(), ::tolower);
    transform(cp.begin(), cp.end(), cp.begin(), ::tolower);
    if (ip == cp)
    {
        // again go to loop
        cout << "It is tie, please enter again\n";
    }
    else if ((ip == "rock" && cp == "scissors") ||
             (ip == "scissors" && cp == "paper") ||
             (ip == "paper" && cp == "rock"))
    {
        // player wins and the loop breaks
        cout << "Congratulations!! You won the match\n";
        exit(0);
    }
    else if ((cp == "rock" && ip == "scissors") ||
             (cp == "scissors" && ip == "paper") ||
             (cp == "paper" && ip == "rock"))
    {
        // computer wins and loop breaks
        cout << " You lose, better luck next time\n";
        exit(0);
    }
    else
    {   
        //for invalid input
        cout << "Invlaid input, please check the spellings of the input & enter again\n";
    }
}

int main()
{
    intro();
    cout << "You're the player 1\nComputer is player 2\nPlease enter either rock or paper or scissors when asked(spellings must be correct)\nPlease Enter now\n";
    while (true)
    {
        string ip, cp;
        cin >> ip;
        computer_output();
        cp = cg;
        status(ip, cp);
    }
    return 0;
}