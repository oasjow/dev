#include"linked_list.hpp"

Node::~Node() {
    if (next != nullptr) {
        delete next;
        next = nullptr;
    }
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
    return false;
}

