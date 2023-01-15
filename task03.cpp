#include <iostream>
using namespace std;
string zodiacSign(int day, string month);
main()
{
    int day;
    string month;
    string result;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;

    result = zodiacSign(day, month);
    cout << result;
}

string zodiacSign(int day, string month)
{
    string sign;
    if (((day >=21 && day <= 31) && month == "March") || ((day >=1 && day <=19) && month == "April"))
    {
        sign = "Aries";
    }
    else if (((day >=20 && day <= 30) && month == "April") || ((day >=1 && day <=20) && month == "May"))
    {
        sign = "Taurus";
    }
    else if (((day >=21 && day <= 31) && month == "May") || ((day >=1 && day <=20) && month == "June"))
    {
        sign = "Gemini";
    }
    else if (((day >=21 && day <= 30) && month == "June") || ((day >=1 && day <=22) && month == "July"))
    {
        sign = "Cancer";
    }
    else if (((day >=23 && day <= 31) && month == "July") || ((day >=1 && day <=22) && month == "August"))
    {
        sign = "Leo";
    }
    else if (((day >=23 && day <= 31) && month == "August") || ((day >=1 && day <=22) && month == "September"))
    {
        sign = "Virgo";
    }
    else if (((day >=23 && day <= 30) && month == "September") || ((day >=1 && day <=22) && month == "October"))
    {
        sign = "Libra";
    }
    else if (((day >=23 && day <= 31) && month == "October") || ((day >=1 && day <=21) && month == "November"))
    {
        sign ="Scorpio";
    }
    else if (((day >=22 && day <= 30) && month == "November") || ((day >=1 && day <=21) && month == "December"))
    {
        sign = "Sagittarius";
    }
    else if (((day >=22 && day <= 31) && month == "December") || ((day >=1 && day <=19) && month == "January"))
    {
        sign = "Capricon";
    }
    else if (((day >=20 && day <= 31) && month == "January") || ((day >=1 && day <=18) && month == "February"))
    {
        sign = "Aquarius";
    }
    else if (((day >=19 && day <= 29) && month == "February") || ((day >=1 && day <=20) && month == "March"))
    {
        sign = "Pisces";
    }
    return sign;

}
