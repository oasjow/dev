#include"linked_list.hpp"
#include<iostream>
#include<cassert>

using namespace std;

bool test_size();
bool test_push_back();
bool test_push_front();
bool test_insert();
bool test_remove();
bool test_remove_value();
bool test_is_empty();

void print_array(int*, int);

int main() {
    test_size();
    test_push_back();
    test_push_front();
    test_insert();
    test_remove();
    test_remove_value();
    test_is_empty();
    cout << "***All tests passed!***" << endl;
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
    cout << "push_back test passed" << endl;
    return true;
}

bool test_push_front() {
    //setup
    LinkedList list;
    list.push_back(5);
    list.push_back(10);

    //execution
    bool return_val = list.push_front(1);
    
    //validation
    assert(return_val == true);
    assert(list.get_head()->data == 1);
    assert(list.get_head()->next->data == 5);
    assert(list.get_head()->next->next->data == 10);

    //clean up
    cout << "push_front test passed" << endl;
    return true;
}

bool test_insert() {
    //setup
    LinkedList list;
    list.push_back(5);
    list.push_back(10);
    list.push_back(15);

    //execution
    bool return_val = list.insert(1, 7);
    bool return_val2 = list.insert(0, 3);
    bool return_val3 = list.insert(5, 20);

    //validation
    assert(return_val == true);
    assert(return_val2 == true);
    assert(return_val3 == false);
    assert(list.get_head()->data == 3);
    assert(list.get_head()->next->data == 5);
    assert(list.get_head()->next->next->data == 7);
    assert(list.get_head()->next->next->next->data == 10);
    assert(list.get_head()->next->next->next->next->data == 15);

    //clean up
    cout << "insert test passed" << endl;
    return true;
}

bool test_is_empty() {
    //setup
    LinkedList list;

    //execution
    bool return_val = list.is_empty();
    list.push_back(5);
    bool return_val2 = list.is_empty();


    //validation
    assert(return_val == true);
    assert(return_val2 == false);

    //clean up
    cout << "is_empty test passed" << endl;
    return true;
}

bool test_size() {
    //setup
    LinkedList list;
    list.push_back(5);
    list.push_back(10);
    list.push_back(15);

    //execution
    int size = list.size();

    //validation
    assert(size == 3);

    //clean up
    cout << "size test passed" << endl;
    return true;
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

    cout << "remove test passed" << endl;
    return true;
}

bool test_remove_value() {
    //setup
    LinkedList lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(5);
    cout << "-------------" << endl;
    cout << "remove_value test" << endl;
    cout << "Before remove: " << endl;
    print_array(lst.to_array(), lst.size());
    cout << endl;

    //execution
    cout << "removing 3" << endl << endl;
    bool result1 = lst.remove_value(3);

    //validation
    assert(result1 == true);
    assert(lst.size() == 5);
    cout << "After remove: " << endl;
    print_array(lst.to_array(), lst.size());
    cout << endl;

    //clean up
    cout << "remove_value test passed" << endl;
    cout << "-------------" << endl;
    return true;
}

void print_array(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
}