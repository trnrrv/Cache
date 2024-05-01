#include "caches.hpp"

void LRU::cache_update(int new_elem) {
    bool data_found = false;
    for(auto n : cache_data_list_) {
        if(n == new_elem)  {
            std::cout << cache_data_list_.front() << std::endl;
            std::cout << cache_data_list_.back() << std::endl;
            data_found = true;
            break;
        }
    } 
    if(data_found == false) {
        cache_data_list_.push_front(new_elem);
    } else {
        if(new_elem != cache_data_list_.front()) {
            cache_data_list_.remove(new_elem);
            cache_data_list_.push_front(new_elem);
        }
    }
}