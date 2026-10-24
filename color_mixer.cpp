
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{
    const int COLOR_SIZE = 20;
    char color1[COLOR_SIZE];
    char color2[COLOR_SIZE];

    cout << "Enter first primary color (red, blue, yellow): ";
    cin >> setw(COLOR_SIZE) >> color1;

    cout << "Enter second primary color (red, blue, yellow): ";
    cin >> setw(COLOR_SIZE) >> color2;

    if ((strcmp(color1, "red") != 0 &&
         strcmp(color1, "blue") != 0 &&
         strcmp(color1, "yellow") != 0) ||
        (strcmp(color2, "red") != 0 &&
         strcmp(color2, "blue") != 0 &&
         strcmp(color2, "yellow") != 0))
    {
        cout << "Error: Please enter only red, blue, or yellow." << endl;
    }
    else if (strcmp(color1, color2) == 0)
    {
        cout << "Mixed color: " << color1 << endl;
    }
    else if ((strcmp(color1, "red") == 0 &&
              strcmp(color2, "blue") == 0) ||
             (strcmp(color1, "blue") == 0 &&
              strcmp(color2, "red") == 0))
    {
        cout << "Mixed color: purple" << endl;
    }
    else if ((strcmp(color1, "red") == 0 &&
              strcmp(color2, "yellow") == 0) ||
             (strcmp(color1, "yellow") == 0 &&
              strcmp(color2, "red") == 0))
    {
        cout << "Mixed color: orange" << endl;
    }
    else
    {
        cout << "Mixed color: green" << endl;
    }

    return 0;
}
