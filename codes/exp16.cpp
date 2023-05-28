#include <iostream>
using namespace std;

int winsNeeded(int gamesPlayed1, int winPercentage1, int winPercentage2);

int main()
{
    int a, b, c;

    cout << "Enter no. of games played initially: ";
    cin >> a;
    cout << endl;

    cout << "Enter Win Percentage 1: ";
    cin >> b;
    cout << endl;

    cout << "Enter Win Percentage 2: ";
    cin >> c;
    cout << endl;

    cout << "Number of games played initially= " << a << endl;
    cout << "Number of games won initially= " << (a * b) / 100 << endl;
    cout << "Number of games won during streak= " << winsNeeded(a, b, c) << endl;
    return 0;
}

int winsNeeded(int gamesPlayed1, int winPercentage1, int winPercentage2)
{
    int gamesWon1, gamesWon2;
    
    gamesWon1 = (gamesPlayed1 * winPercentage1) / 100;
    gamesWon2 = (gamesPlayed1 * winPercentage2 - 100 * gamesWon1) / (100 - winPercentage2);

    return gamesWon2;
}
