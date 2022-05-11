#include <iostream>
#include <string>
#include "fonctionLogic.hpp"

using namespace std;

void and_function()
{
    //and_solution = a && b
    bool const two_false{false && false};
    bool const false_true{false && true};
    bool const true_false{true && false};
    bool const two_true{true && true};

    cout << "false && false = " << two_false << '\n';
    cout << "false && true = " << false_true << '\n';
    cout << "true && false = " << true_false << '\n';
    cout << "true && true = " << two_true << '\n';

}

void or_function()
{
    //or_solution = (a&&b)||(a&&!b)||(!a&&b)
    bool const two_false{(false && false)||(false && !false)||(!false && false)};
    bool const false_true{(false && true)||(false && !true)||(!false && true)};
    bool const true_false{(true && false)||(true && !false)||(!true && false)};
    bool const two_true{(true && true)||(true && !true)||(!true && true)};

    cout << "false && false = " << two_false << '\n';
    cout << "false && true = " << false_true << '\n';
    cout << "true && false = " << true_false << '\n';
    cout << "true && true = " << two_true << '\n';
}

void xor_fucntion()
{
    //xor_solution = (a && !b)||(!a && b)
    bool const two_false{(false && !false)||(!false && false)};
    bool const false_true{(false && !true)||(!false && true)};
    bool const true_false{(true && !false)||(!true && false)};
    bool const two_true{(true && !true)||(!true && true)};

    cout << "false && false = " << two_false << '\n';
    cout << "false && true = " << false_true << '\n';
    cout << "true && false = " << true_false << '\n';
    cout << "true && true = " << two_true << '\n';

}
