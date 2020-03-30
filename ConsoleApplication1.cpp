#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
double DiceOdds(int, double);

int main()
{
    double odds7 = DiceOdds(7, 10000);    
}

double DiceOdds(int n, double numRolls)
{
    srand(time(0));

    double count = 0;

    for (size_t i = 0; i < numRolls; i++)
    {
        int die1 = (rand() % 6) + 1;
        int die2 = (rand() % 6) + 1;
        int roll = die1 + die2;

        if (roll == n)
        {
            count++;
        }
    }
    double odds = count / numRolls * 100.00;

    cout << odds << "%";
    return odds;
}
