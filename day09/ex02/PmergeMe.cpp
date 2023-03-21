#include "PmergeMe.hpp"

template <class T>
void    SortInsert(T & nums, size_t max_size) {

    if (nums.size() < max_size)
    {
        int key, j;
        for (size_t i = 1; i < nums.size(); i++)
        {
            key = nums[i];
            j = i - 1;
            while (j >= 0 && nums[j] > key)
            {
                nums[j + 1] = nums[j];
                j = j - 1;
            }
            nums[j + 1] = key;
        }
        return ;
    }
    T a(nums.begin(), nums.begin() + nums.size()/2);
    T b(nums.begin() + nums.size()/2, nums.end());
    SortInsert(a, max_size);
    SortInsert(b, max_size);
    std::merge(a.begin(), a.end(), b.begin(), b.end(), nums.begin());
}

PmergeMe::PmergeMe(int ac, char **av) {

    if (ac > 3000 || ac < 3)
        throw std::out_of_range("Error args out of bounds");
    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; av[i][j]; j++)
            if (!isdigit(av[i][j]))
                throw std::out_of_range("Error arg not a number");
        if (std::stol(av[i]) > long(std::numeric_limits<int>::max))
            throw std::out_of_range("Error arg over limit");
        this->_v.push_back(std::stoi(av[i]));
        this->_s.push_back(std::stoi(av[i]));
    }
}

unsigned long long GetCurrentTimeMs()
{
    timeval tv;
    gettimeofday(&tv, NULL);
    return (unsigned long long)(tv.tv_sec) * 1000000 + (unsigned long long)(tv.tv_usec);
}

PmergeMe::~PmergeMe() {}

void    PmergeMe::solve() {

    unsigned long long start, end;

    std::cout << "Before:\t";
    for (size_t i = 0; i < this->_v.size(); i++)
        std::cout << this->_v[i] << " ";

    start = GetCurrentTimeMs();
    SortInsert(this->_v, 1 + log2(this->_v.size()));
    end = GetCurrentTimeMs();

    std::cout << "\nAfter: \t";
    for (size_t i = 0; i < this->_v.size(); i++)
        std::cout << this->_v[i] << " ";

    std::cout << "\nTime to process a range of 5 elements with std::vector :  " << double(end - start) << " us\n";

    start = GetCurrentTimeMs();
    SortInsert(this->_s, 1 + log2(this->_s.size()));
    end = GetCurrentTimeMs();

    std::cout << "Time to process a range of 5 elements with std::deque :  " << double(end - start) << " us\n";
    
}
