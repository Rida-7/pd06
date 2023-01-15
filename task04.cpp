#include <iostream>
using namespace std;
float chargesRegular(char serviceCode, int mins);
float chargesPremium(char serviceCode, string time ,int mins);
main()
{
    char serviceCode;
    string time;
    int mins;
    float result3, result4;

    cout << "Enter service code: ";
    cin >> serviceCode;

    if (serviceCode == 'P' ||serviceCode == 'p')
    {
        cout << "Enter the time...day or night: " ;
        cin >> time;
    }
      cout << "Enter mins you used the service: ";
      cin >> mins;

    if (serviceCode == 'r' || serviceCode == 'R')
    {
        result3 = chargesRegular(serviceCode, mins);
        cout << "Charges are: " << result3 << " $" << endl;
    }
    else if (serviceCode == 'p' || serviceCode == 'P')
    {
        result4 = chargesPremium(serviceCode, time, mins);
        cout << "Charges are: " << result4 << " $" << endl;
    }
    else { cout << "ERROR" << endl;}

}

float chargesRegular(char serviceCode, int mins)
{
    float result;
    if (mins <= 50)
    {
        result = 10.0;
    }
    else if (mins > 50)
    {
        result = (mins-50);
        result = (result*0.20) + 10.0;
    }
    return result;
}

float chargesPremium(char serviceCode, string time ,int mins)
{
    float result2;
    if (time == "day" && mins <= 75)
    {
        result2 = 25.0;
    }
    else if (time == "day" && mins > 75)
    {
        result2 = (mins - 75);
        result2 = (result2*0.10) + 25.0;
    }
    else if (time == "night" && mins <= 100)
    {
        result2 = 25.0;
    }
    else if (time == "night" && mins > 100 )
    {
        result2 = mins - 100;
        result2  =(result2*0.05) + 25.0;
    }
    return result2;
}