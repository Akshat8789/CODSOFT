#include <iostream>
using namespace std;

class Calculator
{
public:
    Calculator()
    {
        int n1, n2;
        char sign, option;
        do
        {
            cout << "Enter two Numbers :- " << endl;
            cin >> n1 >> n2;
            cout << "Give Arthmetic Sign of Operation " << endl;
            cin >> sign;
            if (sign == '+')
            {
                cout << "Addition = " << n1 + n2 << endl;
            }
            else if (sign == '-')
            {
                cout << "Substraction = " << n1 - n2 << endl;
            }
            else if (sign == '/')
            {
                cout << "Divide = " << n1 / n2 << endl;
            }
            else if (sign == '%')
            {
                cout << "Modulas = " << n1 % n2 << endl;
            }
            else if (sign == '*')
            {
                cout << "Multiplication = " << n1 * n2 << endl;
            }
            else{
                cout<<"Please check the Arthmetic sign"<<endl;
            }
            cout << "Want to do more Calculations ? [Y/N]" << endl;
            cin >> option;
        } while (option == 'n');
    }
};

int main()
{
    Calculator();
}