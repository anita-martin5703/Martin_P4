// Anita Martin
// amartin98@cnm.edu
// First Class: SimpleCalc

// SimpleCalc.cpp

#include "SimpleCalc.h"
#include <iomanip>

void SimpleCalc::Calculate()
{

    switch (operation)
    {
    case '+':
        answer = number1 + number2;
        desc = "Your operation chosen is addition.\n";
        cout << desc;
        break;
    case '-':
        answer = number1 - number2;
        desc = "Your operation chosen is subtraction.\n";
        cout << desc;
        break;
    case '*':
        answer = number1 * number2;
        desc = "Your operation chosen is multiplication.\n";
        cout << desc;
        break;
    case '/':
        // Check for division by 0
        try
        {
            if (number2 = 0)
            {
                throw(number2);
            }
            else
            {
                answer = number1 / number2;
                desc = "Your operation chosen is division.\n";
                cout << desc;
            }
        }
        catch(double num2)
        {
            cout << "Exception Handling Warning: \n";
        }
        break;
    default:
        break;
    }
}

SimpleCalc::SimpleCalc(){}

void SimpleCalc::SetOperation(char oper, double op1, double op2)
{
    number1 = op1;
    number2 = op2;
    operation = oper;
    Calculate();
}

string SimpleCalc::GetResults()
{    
    stringstream ss;
    ss << setprecision(2) << fixed;
    if (desc == "No division by 0!")
    {
        ss << desc;
    }
    else
    {
        ss << answer;
    }            
    results = ss.str();
    return results;
}