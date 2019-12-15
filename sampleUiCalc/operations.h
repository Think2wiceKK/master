#ifndef OPERATIONS_H
#define OPERATIONS_H
#include <string>
#include <cstring>
using namespace std;

class operations
{
public:
    string firstOperator;
    string secondOperator;
    char _operator;

public:
    operations();

    string operate(string firstOperator, string secondOperartor, char operation);
};

#endif // OPERATIONS_H
