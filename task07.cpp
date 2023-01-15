#include <iostream>
#include <cmath>
using namespace std;

main()
{
    int startingHours;
    int startingMins;
    int arrivalHours;
    int arrivalMins;
    int result, result2, result3, result4, hourDifference, minDifference;

    cout << "Enter exam starting time (hours): ";
    cin >> startingHours;
    cout << "Enter exam starting time (mins): ";
    cin >> startingMins;
    cout << "Enter arrival time (hours): ";
    cin >> arrivalHours;
    cout << "Enter arrival time (mins): ";
    cin >> arrivalMins;

    result = (startingHours*60) + startingMins;
    result2 = (arrivalHours*60) + arrivalMins;
    result3 = abs(result - result2) ;
    minDifference = result3 % 60;
    hourDifference = result3 / 60;

    if (result < result2 )
    {
        cout << "LATE!!" << endl;
    }
    else if (result > result2 && result3 > 30)
    {
        cout << "EARLY!!" << endl;
    }
    else if (result > result2 && minDifference != 0 && result3 <= 30)
    {
        cout << "ON TIME!!" << endl;
        cout << minDifference << " minutes before starting time" << endl;
    }
    else if (result3 == 0 )
    {
        cout << "ON TIME!!" << endl;
    }
    if (result < result2 && result3 < 60)
    {
        result4 = result3 % 60;
        cout << result4 << " minutes after starting time" << endl;
    }
    else if (result < result2 && result3 >= 60)
    {
        cout << hourDifference << ":" << minDifference << " hours after starting time" << endl;
    }
    else if (result > result2 && result3 < 60  && result3 > 30)
    {
        cout << minDifference << " minutes before starting time" << endl;
    }
    else if (result > result3 && result3 >= 60 )
    {
        minDifference = (abs(startingMins - arrivalMins )) % 60;
        cout << hourDifference << ":" << minDifference << " hours before starting time" << endl;
    }
}