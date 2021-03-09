//bzj^_^
//calculator.cpp

#include <iostream>
#include <sstream>
#include <string>

class calculator {
    using value_t = int;
    const char endc = '#';

private:
    struct expression {
        value_t lhs, rhs, result;
        char optr;
        std::string result_str;
    } expr;

    bool input() {
        std::cout << "Please input an expression like 2 + 3, or input operator as '#' to exit:" << std::endl;
        std::cin >> expr.lhs >> expr.optr >> expr.rhs;
        return expr.optr != endc;
    }

    void calculate() {
        switch (expr.optr) {
        case '+': expr.result = expr.lhs + expr.rhs; break;
        case '-': expr.result = expr.lhs - expr.rhs; break;
        case '*': expr.result = expr.lhs * expr.rhs; break;
        case '/': expr.result = expr.lhs / expr.rhs; break;
        case '%': expr.result = expr.lhs % expr.rhs; break;
        default:  expr.result_str = "Illegal operator!!!"; return;
        }

        std::ostringstream s; //字符串流
        s << expr.lhs << ' ' << expr.optr << ' ' << expr.rhs << " = " << expr.result;
        expr.result_str = s.str(); //获取流中的字符串
    }


    void display() {
        std::cout << expr.result_str << std::endl << std::endl;
    }


public:
    bool doCalc() {
        if (!input()) return false;
        calculate();
        display();
        return true;
    }
};

int main() {
    calculator c;
    while (c.doCalc());
    std::cout << "Good-bye!" << std::endl;

    return 0;
}
