#include <iostream>
using namespace std;
string playActivity(string temperature, string humidity);
main()
{
    string temperature;
    string humidity;
    string result;

    cout << "Enter temperature: ";
    cin >> temperature;
    cout << "Enter humidity condition: ";
    cin >> humidity;
    result = playActivity(temperature, humidity);
    cout << result;


}

string playActivity(string temperature, string humidity)
{
    string activity;
    if (temperature == "warm" && humidity == "dry")
    {
        activity = "play tennis";
    }
    else if (temperature == "warm" && humidity == "humid")
    {
        activity = "swim";
    }
    else if (temperature == "cold" && humidity == "dry")
    {
        activity = "play basketball";
    }
    if (temperature == "cold" && humidity == "humid")
    {
        activity = "watch tv";
    }
    return activity;
}