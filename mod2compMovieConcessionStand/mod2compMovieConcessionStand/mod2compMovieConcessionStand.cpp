// mod2compMovieConcessionStand.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    std::cout << "Mod. 2 Comp. by Kevin Bell\n\n";
    auto popcorn = 0,candy = 0, drinks = 0;
    auto total = 0.0, popcornPrice = 5.00, candyPrice = 3.50, drinkPrice = 2.50, change = 0.0, moneyGivenToSnackShoppe = 0.0;
    cout << "Welcome to the Snack Shoppe" << endl;
    cout << "How many bags of popcorn do you want? ";
    cin >> popcorn;
    cout << "How many boxes of candy do you want? ";
    cin >> candy;
    cout << "How many drinks do you want? ";
    cin >> drinks;
    if (popcorn == 0 && candy == 0 && drinks == 0) {
        cout << "Thank you for stopping at the Snack Shoppe, enjoy the movie!" << endl;
    }
    else {
        total = popcorn * popcornPrice + candy * candyPrice + drinks * drinkPrice;
        cout << "Total cost: $" << setprecision(2) << fixed << total << endl;
        cout << "Enter total of money you are paying: ";
        cin >> moneyGivenToSnackShoppe;
        change = moneyGivenToSnackShoppe - total;
        if (change < 0) {
            cout << "That isn't enough money, sorry, no snacks" << endl;
            cout << "Enjoy the movie!" << endl;
        }
        if (change > 0) {
            cout << "Thank you, your change is $" << setprecision(2) << fixed << change << endl;
            cout << "Enjoy the movie and your snacks!!" << endl;
        }
    }
    //Keep window open til done
    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
