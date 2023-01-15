#include <iostream>
using namespace std;
float appartment(string month, int day);
float studio(string month, int days);

main()
{
    string month;
    int day;
    float result3, result4;

    cout << "Enter month: ";
    cin >> month;
    cout << "Enter the number of days or your stay: ";
    cin >> day;

    result3 = appartment(month, day);
    cout << "Apartment: " << result3 << " $" << endl;

    result4 = studio (month, day);
    cout << "Studio: " << result4 << " $" << endl;


}

float studio (string month, int day)
{
    float result;
    if ((month == "May" || month == "October") && day <= 7)
    {
        result = 50.0*day;
    }
    else if ((month == "May" || month == "October") && day > 7 && day <= 14)
    {
        result = 50.0*day;
        result = result - (0.05*result); 
    }
    else if ((month == "May" || month == "October") && day > 14)
    {
        result = 50.0*day;
        result = result - (0.3*result);
    }
    else if ((month == "June" || month == "September") && day <= 14)
    {
        result = 75.20*day;
    }
    else if ((month == "June" || month == "September") && day > 14)
    {
        result = 75.20*day;
        result = result - (0.2*result);
    }
    else if (month == "July" || month == "August")
    {
        result = 76.0*day;
    }
    return result;
}

float appartment(string month, int day)
{
    float result2;
    if ((month == "May" || month == "October") && day <= 14)
    {
        result2 = 65.0*day;
    }
    else if ((month == "May" || month == "October") && day > 14)
    {
        result2 = 65.0*day;
        result2 = result2 - (0.1*result2);
    }

    else if ((month == "June" || month == "September") && day <= 14)
    {
        result2 = 68.70*day;
    }
    else if ((month == "June" || month == "September") && day > 14)
    { 
        result2 = 68.70*day;
        result2 = result2 - (0.1*result2);
    }
    else if ((month == "July" || month == "August") && day <= 14)
    {
        result2 = 77.0*day;
    }
    else if ((month == "July" || month == "August") && day > 14)
    {
        result2 = 77.0*day;
        result2 = result2 - (0.1*result2);
    }
    return result2;
}