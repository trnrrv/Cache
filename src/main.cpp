//cache
#include <iostream>
#include "../include/caches.hpp"


int main(void) {
    std::cout << "Hello";
    LRU cache(6);

    cache.cache_update(4);
    return 0;
}