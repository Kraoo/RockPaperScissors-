#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char user, computer;

    int randNum;

    srand(5);

    randNum = rand() % 3;

    if (randNum == 0)
    {
        computer = 'R';
    }

    else if (randNum == 1)
    {
        computer = 'P';
    }

    else 
        computer = 'S';
    
    cout << "Enter R, P, S";
    cin >> user;

    if (computer == 'R')
    {
        if (user == 'R')
        {
            cout << "It's a tie!";
        }

        else if (user == 'P')
        {
            cout << "You win! Paper beats rock";
        }

        else if (user == 'S')
        {
            cout << "You lose! Rock beats scissors";
        }
        
        
    }
    
    
    
    
    return 0;
}
