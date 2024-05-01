#pragma once

#include <unordered_map>
#include <list>
#include <iostream>

struct LRU{
    size_t sz_;
    std::unordered_map<int, int> cache_data_;
    std::list<int> cache_data_list_;
    
    LRU(int size) : sz_(size) {
        cache_data_list_ = std::list<int>(sz_);
    }
    //default constructor
    LRU() : sz_(5) {
        cache_data_list_ = std::list<int>(sz_);
    }   
    
    void cache_update(int new_elem)  {
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
};


