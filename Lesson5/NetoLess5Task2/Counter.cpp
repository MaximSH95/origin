#include "Counter.h"

Counter::Counter(int set_num = 1) : num{ set_num } {}

int Counter::add() {
    return ++num;
};
int Counter::subtract() {
    return --num;
}
int Counter::sol()
{
    return num;
}