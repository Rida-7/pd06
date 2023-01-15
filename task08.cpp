#include <iostream>
using namespace std;

main()
{
    int h;
    int x;
    int y;
    cout << "Enter value for h: ";
    cin >> h;
    cout << "Enter value for x: ";
    cin >> x;
    cout << "Enter value for y: ";
    cin >> y;


    if ( (x == 1*h || x == 3*h , y == 0*h || y == 4*h ) || ( x == 0*h || x == 2*h , y == 0*h || y == 1*h) )
    {
        cout << "border";
    }
    else if ( ( (x > 0 && x < 3*h ) && ( y > 0 && y < 1*h)) || ((x > 1*h && x > 2*h) && (y > 0*h && y < 4*h )))
    {
        cout << "inside";
    }
    else
    {
        cout << "outside";
    }
}