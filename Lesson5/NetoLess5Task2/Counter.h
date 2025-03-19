#ifndef COUNTER_H
#define COUNTER_H
#include <iostream>
class Counter {
private:
    int num{};

public:
    Counter(int set_num);
    int add();
    int subtract();
    int sol();
};

#endif
