#ifndef __RPN_H__
#define __RPN_H__

#include <iostream>
#include <stack>

class RPN {

    private:
        RPN() {}
    public:
        static int  calculate(char op, int a, int b);
        static void solve(char *str);
};

#endif