#include <string>

#include "shop.h"

using namespace std;

int corndog_price;

int advertisement_price;

// stock shop

void initialize_shop(int (*func)(int, int)) {
    corndog_price = 5 + func(-2, 2);
    advertisement_price = 20 + func(-5, 5);
}

int buyStock(string item, int amount) {
    return 0;
}


// player shop



