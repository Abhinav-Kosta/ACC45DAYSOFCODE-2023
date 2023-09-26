#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, s;
    float p,x;
    cout << "Time of hours on Monday: ";
    cin >> a;
    cout << "Time of hours on Tuesday: ";
    cin >> b;
    cout << "Time of hours on Wednesday: ";
    cin >> c;
    cout << "Time of hours on Thursday: ";
    cin >> d;
    cout << "Time of hours on Friday: ";
    cin >> e;
    s = a + b + c + d + e;
    cout << "Work hours on home equal to 1 hour in office: ";
    cin >> p;
    x = s*p;
    if (x < 120)
    {
        cout << "No work on weekdays.";
    }
    else if ((x > 120) && (x < 168))
    {
        cout << "Work on weekdays necessary.";
    }
    else if (x > 168)
    {
        cout << "Chef cann't complete his work.";
    }
    return 0;
}