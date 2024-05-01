#include "../include/caches.hpp"
#include "CppUTest/TestHarness.h"
#include "CppUTest/CommandLineTestRunner.h"

TEST_GROUP(LRUTest)
{
    void setup() {
        
    }
    void teardown() {

    }
};

TEST(LRUTest, add_diff_seq)
{
   int cache_size = 6;
   int ans[cache_size];
   LRU LRU_test(cache_size);

   for(int i = 0; i < cache_size; i++) {
    LRU_test.cache_update(i);
    ans[i] = i;
   }

   std::list<int>::iterator iter = LRU_test.cache_data_list_.begin();
}


int main(int argc, char** argv) {
    return CommandLineTestRunner::RunAllTests(argc, argv);
}