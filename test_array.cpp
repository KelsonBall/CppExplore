#include <iostream>
#include <assert.h>
#include <array>
#include <functional>
#include <list>
#include "test_array.h"

using namespace std;

list<function<void()>> tests = {
    []{
        array<int, 5> test_array = { 1, 2, 3, 4, 5 };
        assert(test_array.size() == 5);
        assert(test_array[2] == 3);  
    },
    []{
        array<int, 3> test_array = { 1, 2, 3 };
        assert(test_array[1] == 2);
        test_array[1] = -1;
        assert(test_array[1] == -1);
    },
    []{
        array<int, 3> test_array = { 0, 0, 0 };
        test_array.fill(2);
        for (auto i : test_array ) 
        {
            assert(i == 2);
        }   
    },
    []{
        array<int, 3> test_array_a = { 1, 2, 3 };
        array<int, 3> test_array_b = { 0, 0, 0 };
        test_array_a.swap(test_array_b);
        assert(test_array_b[0] == 1);
        assert(test_array_b[2] == 3);
        for (auto i : test_array_a)
        {
            assert(i == 0);
        }
    }
};

void TestArray::Run()
{
    cout << "Running array tests" << endl;
    for (auto test : tests)
    {
        cout << '.';
        test();
    }
    cout << endl << "Done" << endl;
}