//
// Created by Amo on 2022/10/22.
//

#include <iostream>
#include "SLList.h"

int main() {
    SLList<int> lst1;
    lst1.pushBack(1);
    lst1.pushBack(2);

    SLList<int> lst2;
    lst2 = lst1;

    for (auto & x : lst2) {
        std::cout << x << ' ';
    }

    return 0;
}
