#include <iostream>
using namespace std;

int main()
{
    int l, v1, v2, t, h, r;
    cout << "Enter the length of track in metres: ";
    cin >> l;
    cout << "Enter tortoise's speed in m/s: ";
    cin >> v1;
    cout << "Enter hare's speed in m/s: ";
    cin >> v2;
    if (v1 >= v2)
    {
        cout << "Enter hare's speed > tortoise's";
    }
    else if ((v1 < 0) || (v2 < 0))
    {
        cout << "Enter positive value in speed.";
    }
    else if (v1 < v2){
        t = l/v1;
        h = l/v2;
        r = (t - h) - 1;
        cout<<"Hare can start running after "<<r<<" seconds.";
    }
    return 0;
}