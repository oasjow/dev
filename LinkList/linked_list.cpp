#include"linked_list.hpp"

Node::Node() {
    data = 0;
    next = nullptr;
}

Node::~Node() {
    if (next != nullptr) {
        delete next;
        next = nullptr;
    }
}

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {
    if (head != nullptr) {
        delete head;
        head = nullptr;
    }
}

Node* LinkedList::get_head() const {
    return head;
}

bool LinkedList::push_back(int in) {
    if (head == nullptr) {
        head = new Node;
        head->next = nullptr;
        head->data = in;
    }
    else {
    Node* iter;
    for(iter = head; iter->next != nullptr; iter = iter->next);
    iter->next = new Node;
    iter->next->next = nullptr;
    iter->next->data = in;
    }
    return true;
}

bool LinkedList::push_front(int in) {
    Node* temp = new Node;
    temp->data = in;
    temp->next = head;
    head = temp;
    return true;
}

bool LinkedList::is_empty() const {
    if (head == nullptr) {
        return true;
    }
    return false;
}

int LinkedList::size() const {
    if (head == nullptr) {
        return 0;
    }
    int count = 1;
    Node* iter;
    for(iter = head; iter->next != nullptr; iter = iter->next) {
        count++;
    }
    return count;
}

bool LinkedList::insert(int index, int in) {
    if (index < 0) {
        return false;
    }
    if (index == 0) {
        return push_front(in);
    }
    Node* iter;
    int count = 0;
    for(iter = head; iter->next != nullptr; iter = iter->next) {
        count++;
        if (count == index) {
            Node* temp = new Node;
            temp->data = in;
            temp->next = iter->next;
            iter->next = temp;
            return true;
        }
    }
    return false;
}

bool LinkedList::remove(int index) {
    if(index < 0) {
        return false;
    }
    if(index == 0) {
        Node* temp = head->next;
        head->next = nullptr;
        delete head;
        head = temp;
        return true;
    }
    Node* iter;
    int count = 0;
    for(iter = head; iter->next != nullptr; iter = iter->next) {
        count++;
        if (count == index) {
            Node* temp = iter->next;
            iter->next = temp->next;
            temp->next = nullptr;
            delete temp;
            temp = nullptr;
            return true;
        }
    }
    return false;
}

bool LinkedList::remove_value(int value) {
    Node* iter;
    for(iter = head; iter->next != nullptr; iter = iter->next) {
        if (iter->next->data == value) {
            Node* temp = iter->next;
            iter->next = temp->next;
            temp->next = nullptr;
            delete temp;
            temp = nullptr;
            return true;
        }
    }
    return false;
}

int* LinkedList::to_array() const {
    int* arr = new int[size()];
    Node* iter;
    int arr_index = 0;
    for(iter = head; iter != nullptr; iter = iter->next) {
        arr[arr_index] = iter->data;
        arr_index++;
    }
    return arr;
}

int LinkedList::get(int index) const {
    Node* iter;
    int count = 0;
    for(iter = head; iter != nullptr; iter = iter->next) {
        if (count == index) {
            return iter->data;
        }
        count++;
    }
    return -1;
}