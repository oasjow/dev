#include"linked_list.hpp"
#include<iostream>
#include<cassert>

using namespace std;

bool test_push_back();
bool test_push_front();
bool test_insert();
bool test_remove();
bool test_remove_value();

int main() {
    test_push_back();
}

bool test_push_back() {
    //setup
    LinkedList list;

    //execution
    bool return_val = list.push_back(5);
    bool return_val2 = list.push_back(10);

    //validation
    assert(return_val == true);
    assert(return_val2 == true);
    assert(list.get_head()->data == 5);
    assert(list.get_head()->next->data == 10);

    //clean up
    return true;
}

bool test_push_front() {
    //setup

    //execution

    //validation

    //clean up
    return false;
}

bool test_is_empty() {
    //setup

    //execution

    //validation

    //clean up
    return false;
}

bool test_size() {
    //setup

    //execution

    //validation

    //clean up
    return false;
}