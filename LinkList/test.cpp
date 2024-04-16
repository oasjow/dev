#include"linked_list.hpp"
#include<iostream>
#include<cassert>

using namespace std;

bool test_push_back();
bool test_push_front();
bool test_is_empty();
bool test_size();
bool test_insert();
bool test_remove();
bool test_remove_value();

int main() {
    test_push_back();
    test_remove();
    cout << "All tests passed!" << endl;
    return 0;
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

bool test_remove() {
    LinkedList lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(5);

    bool result1 = lst.remove(0);
    bool result2 = lst.remove(2);
    bool result3 = lst.remove(5);

    assert(result1 == true);
    assert(result2 == true);
    assert(result3 == false);
    assert(lst.size() == 3);
    assert(lst.get_head()->data == 2);
    assert(lst.get_head()->next->data == 3);
    assert(lst.get_head()->next->next->data == 5);

    return true;
}