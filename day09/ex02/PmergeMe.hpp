#ifndef __PMERGEME_H__
#define __PMERGEME_H__

#include <iostream>
#include <sys/time.h>
#include <cmath>
#include <vector>
#include <deque>
#include <iomanip>

class PmergeMe
{
    private:
        std::vector <int> _v;
        std::deque <int> _s;
    public:
        PmergeMe(int, char **);
        ~PmergeMe();

        void    solve();
};

#endif