#include <iostream>
using namespace std;

int main()
{
    int n, c;
    // n be the total number of friends.
    // c be the number of cars required.
    // Given that, a single car can only carry 4 people at most.
    cout << "Enter the total number of friends: ";
    cin >> n;
    if (n > 0)
    {
        if (n % 4 == 0)
        {
            c = n / 4;
            cout << "Number of cars required are " << c;
        }
        else if (n % 4 != 0)
        {
            c = (n / 4) + 1;
            cout << "Number of cars required are " << c;
        }
    }
    else
    {
        cout << "Invalid Input";
    }

    return 0;
};
