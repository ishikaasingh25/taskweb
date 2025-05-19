#include <iostream>
using namespace std;

class Calculator
{
private:
  double a, b;
  string operation;

public:
  Calculator(double num1, double num2, string op)
  {
    a = num1;
    b = num2;
    operation = op;
  }

  void calculate()
  {
    if (operation == "add" || operation == "+")
    {
      cout << "Result from addition " << (a + b) << endl;
    }
    else if (operation == "subtract" || operation == "-")
    {
      cout << "Result from subtraction " << (a - b) << endl;
    }
    else if (operation == "multiply" || operation == "*")
    {
      cout << "Result from multiplication " << (a * b) << endl;
    }
    else if (operation == "divide" || operation == "/")
    {
      if (b != 0)
        cout << "Result from division " << (a / b) << endl;
      else
        cout << "Error , Division by zero is not allowed" << endl;
    }
    else
    {
      cout << "Invalid operation, check your input" << endl;
    }
  }
};

int main()
{
  double a, b;
  string op;

  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;
  cout << "Enter operation (add/subtract/multiply/divide or +, -, *, /): ";
  cin >> op;

  Calculator calc(a, b, op);
  calc.calculate();

  return 0;
}
