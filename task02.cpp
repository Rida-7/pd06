#include <iostream>
using namespace std;

string grade(float percentage);
main()
{
    string name;
    int engMarks;
    int mathsMarks;
    int chemMarks;
    int sSciMarks;
    int bioMarks;
    int totalMarks;
    float percentage;
    string result;

    cout << "Enter name of student: ";
    cin >> name;
    cout << "Enter Marks of English: ";
    cin >> engMarks;
    cout << "Enter Marks of Maths: ";
    cin >> mathsMarks;
    cout << "Enter Marks of Chemistry: ";
    cin >> chemMarks;
    cout << "Enter Marks of Social Sciences: ";
    cin >> sSciMarks;
    cout << "Enter Marks of Biology: ";
    cin >> bioMarks;

    totalMarks = engMarks+chemMarks+mathsMarks+sSciMarks+bioMarks;
    percentage = (totalMarks*100)/500;
    result = grade (percentage);
    cout << "Student name is: " << name << endl;
    cout << "Total marks are: " << totalMarks << endl;
    cout << "Percentage is: " << percentage << endl;
    cout << "Grade is: " << result ;

}

string grade (float percentage)
{
    string grade;
    if (percentage >=90)
    {
        grade = "A+";
    }
    else if (percentage >=80 && percentage < 90)
    {
        grade = "A";
    }
    else if(percentage >= 70 && percentage < 80)
    {
        grade = "B+";
    }
    else if (percentage < 70 && percentage >= 60)
    {
        grade = "B";
    }
    else if (percentage < 60 && percentage >=50)
    {
        grade = "C";
    }
    else if (percentage < 50 && percentage >= 40 )
    {
        grade = "D";
    }
    else if (percentage < 40 )
    {
        grade = "F";
    }
    return grade;

}