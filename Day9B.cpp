#include <iostream>
using namespace std;

int main()
{
    int a, x, y;
    cout << "Enter the cost of renting cooler for month: ";
    cin >> x;
    int p = x;
    cout << "Enter the purchasing cost of cooler: ";
    cin >> y;
    if (x < y)
    {
        for (int i = 1; p < y; i++)
        {
            p = x + (x * i);
            a = i;
        }
        cout << "Chef can rent cooler for " << a << " month(s).";
    }
    else
    {
        cout << "Rent is greater than purchasing price.";
    }

    return 0;
}