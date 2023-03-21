#include "RPN.hpp"

int RPN::calculate(char op, int a, int b) {
    
    switch (op)
    {
        case '+':
            return (a + b);
        case '-':
            return (a - b);
        case '/':
            if (b)
                return (a / b);
            else
                throw std::out_of_range("Error Divide by 0");
        case '*':
            return (a * b);
    }
    return 0;
}

void    RPN::solve(char *str) {
    
    std::stack<int> q;

    while(str && *str) {
        if (*str != ' ')
        {
            if (((int)std::string("+-*/").find(*str) == -1 && !isdigit(*str))
                || (q.size() < 2 && (int)std::string("+-*/").find(*str) != -1))
                throw std::out_of_range("Error Syntax");
            if (isdigit(*str))
                q.push(*str - '0');
            else {
                int b = q.top();
                q.pop();
                int a = q.top();
                q.pop();
                q.push(calculate(*str, a, b));
            }
        }
        str++;
    }
    if (q.size() == 1)
        std::cout << q.top() << std::endl;
    else
        throw std::out_of_range("Error operator");
}