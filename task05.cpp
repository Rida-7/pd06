#include <iostream>
using namespace std;
float weekdayPrice(string fruit, float quantity);
float weekendPrice(string fruit, float quantity);
main()
{
    string fruit, day;
    float quantity;
    float result1, result2;

    cout << "Enter the Day: ";
    cin >> day;
    cout << "Enter Fruit: ";
    cin >> fruit;
    cout << "Enter Quantity: ";
    cin >> quantity;

    if (day == "Monday" || day == "Friday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday")
   {
    result1 = weekdayPrice(fruit, quantity);
    cout << "the price is: " << result1;
   }
   else if (day == "Sunday" || day == "Saturday")
   {
    result2 = weekendPrice(fruit, quantity);
    cout << "the price is: " << result2;
   }


}
float weekdayPrice(string fruit, float quantity)
{
    float rupees1;
    if (fruit == "Banana")
   {
    rupees1 = quantity*2.50;
   }
   else if (fruit == "Apple")
   { 
    rupees1 = quantity*1.20;
   }
   else if (fruit == "Orange")
   {
    rupees1 = quantity*0.85;
   }
   else if (fruit == "Grapefruit")
   {
    rupees1 = quantity*1.45;
   }
   else if (fruit == "Kiwi")
   {
    rupees1 = quantity*2.70;
   }
   else if (fruit == "Pineapple")
   {
    rupees1 = quantity*5.50;
   }
   else if (fruit == "Grapes")
   {
    rupees1 = quantity*3.85;
   }
   else {cout << "Invalid input" << endl;}
   
   return rupees1;
}
float weekendPrice(string fruit, float quantity)
{
    float rupees2;
   if (fruit == "Banana")
   {
    rupees2 = quantity*2.70;
   }
   else if (fruit == "Apple")
   {
    rupees2 = quantity*1.25;
   }
   else if (fruit == "Orange")
   {
    rupees2 = quantity*0.90;
   }
   else if (fruit == "Grapefruit")
   {
    rupees2 = quantity*1.60;
   }
   else if (fruit == "Kiwi")
   {
    rupees2 = quantity*3.00;
   }
   else if (fruit == "Pineapple")
   {
    rupees2 = quantity*5.60;
   }
   else if (fruit == "Grapes")
   {
    rupees2 = quantity*4.20;
   }
   else {cout << "Invalid input" << endl;}
   
   return rupees2;
}