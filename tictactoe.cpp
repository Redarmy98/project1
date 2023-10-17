#include <iostream>
using namespace std;
// Declaration of global varaibles
int contnue, res = 0, num = 0;
string a = "123456789";

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

void tictoe()
{
    system("cls");
    cout << " ____________________\n";
    cout << "|      |      |      |\n";
    cout << "|  " << a[0] << "   |  " << a[1] << "   |  " << a[2] << "   |\n";
    cout << "|______|______|______|\n";
    cout << "|      |      |      |\n";
    cout << "|  " << a[3] << "   |  " << a[4] << "   |  " << a[5] << "   |\n";
    cout << "|______|______|______|\n";
    cout << "|      |      |      |\n";
    cout << "|  " << a[6] << "   |  " << a[7] << "   |  " << a[8] << "   |\n";
    cout << "|______|______|______|\n";
}

void draw()
{
    num = 0;
    for (int i = 0; i < 9; i++)
    {
        if (a[i] == 'X' || a[i] == 'O')
        {
            num++;
        }
    }
}

bool result()
{
    if ((a[0] == a[4] && a[4] == a[8]) ||
        (a[2] == a[4] && a[4] == a[6]) ||
        (a[0] == a[1] && a[1] == a[2]) ||
        (a[5] == a[4] && a[4] == a[3]) ||
        (a[6] == a[7] && a[7] == a[8]) ||
        (a[6] == a[3] && a[3] == a[0]) ||
        (a[4] == a[7] && a[7] == a[1]) ||
        (a[2] == a[5] && a[5] == a[8]))
    {
        res = true;
    }
    return res;
}

void input_1(int ip)
{
    if ((ip < 1) || (ip > 9))
    {
        cout << "Invalid input\n";
    }
    else if (a[ip - 1] == 'X' || a[ip - 1] == 'O')
    {
        cout << "Invalid input\n";
    }
    else
    {
        a[ip - 1] = 'X';
        contnue++;
        tictoe();
    }
}

void input_2(int ip)
{
    if ((ip < 1) || (ip > 9))
    {
        cout << "Invalid input\n";
    }
    else if (a[ip - 1] == 'X' || a[ip - 1] == 'O')
    {
        cout << "Invalid input\n";
    }
    else
    {
        a[ip - 1] = 'O';
        contnue++;
        tictoe();
    }
}

void thanks();

int main()
{
    int ip_1, ip_2, i = 0;
    intro();
    tictoe();
    cout << "Press the box number to put X or O in the required box\nX for player 1 & O for player 2\n";
    while (true)
    {
        contnue = 0;
        while (contnue == 0)
        {
            cout << "Player 1: ";
            cin >> ip_1;
            input_1(ip_1);
            result();
            draw();
            if (res == true)
            {
                cout << "Congratulations !! Player 1 wins the match\n\n";
                thanks();
            }
            else if (num == 9)
            {
                cout << "It was a tough match & Match is a tie\n";
                thanks();
            }
        }

        while (contnue == 1)
        {
            cout << "Player 2: ";
            cin >> ip_2;
            input_2(ip_2);
            result();
            if (res == true)
            {
                cout << "Player 2 wins the match\n";
                thanks();
            }
        }
    }
    return 0;
}

void thanks()
{
    cout << "Would you want to play again\nPress 1 to play again\nPress 2 to Quit\n";
    int x;
    cin >> x;
    if (x == 1)
    {
        string a = "123456789";
        num = 0, res = 0;
        main();
    }
    else
    {
        cout << "Thanks for using this applications!!";
        exit(0);
    }
}