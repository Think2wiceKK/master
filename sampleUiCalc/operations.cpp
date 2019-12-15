#include "operations.h"
#include <iostream>
#include <sstream>

using namespace std;

operations::operations()
{
    firstOperator = "";
    secondOperator = "";
}

string operations::operate(string first_Operator, string second_Operator, char operation)
{
    stringstream fOperator(first_Operator);
    stringstream sOperator(second_Operator);

    int firstOp, secondOp, result = 0;
    fOperator >> firstOp;
    sOperator >> secondOp;

    if(secondOp == 0 && operation == '/')
    {
        return "Invalid";
    }

    switch (operation) {
    case '+': result = firstOp + secondOp;
        break;
    case '-': result = firstOp - secondOp;
        break;
    case '*': result = firstOp * secondOp;
        break;
    case '/': result = firstOp / secondOp;
        break;
    default: result = 0;

    }
    return to_string(result);
}
