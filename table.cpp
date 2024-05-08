#include <iostream>
#include <iomanip>
// #include <cstring>

using namespace std;

int main()
{

    cout << "Let's build a multiplication table! " << endl;
    int rows, columns; // initialized variables

    cout << "Enter the number of rows (1 to 12 inclusive): ";

    cin >> rows; // asked for number of rows

    // Bacailly creates a bound from 1 - 12 of how many rows I can build
    while (rows < 1 || rows > 12)
    {
        cout << "Invalid input, please enter a number between 1 and 12: ";
        cin >> rows;
    }

    // Bacailly creates a bound from 1 - 12 of how many columns I can build
    cout << "Enter the number of columns (1 to 12 inclusive): ";
    cin >> columns; // input for number of columns
    while (columns < 1 || columns > 12)
    {
        cout << "Invalid input, please enter a number between 1 and 12: ";
        cin >> columns;
    }

    cout << "   ";
    for (int col = 1; col <= columns; col++)
    {
        cout << setw(4) << col;
    }
    cout << endl;

    for (int row = 1; row <= rows; row++)
    {
        cout << setw(2) << row << " ";
        for (int col = 1; col <= columns; col++)
        {
            cout << setw(4) << row * col;
        }
        cout << endl;
    }

    return 0;
}

/*
Code Ouput:-
Let's build a multiplication table!
Enter the number of rows (1 to 12 inclusive): 4
Enter the number of columns (1 to 12 inclusive): 10
      1   2   3   4   5   6   7   8   9  10
 1    1   2   3   4   5   6   7   8   9  10
 2    2   4   6   8  10  12  14  16  18  20
 3    3   6   9  12  15  18  21  24  27  30
 4    4   8  12  16  20  24  28  32  36  40

*/
