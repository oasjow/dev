#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    private:
        Node* head;
    public:
        int size() const;
        bool push_back(int);
        bool push_front(int);
        bool insert(int , int);
        bool remove(int);
        bool remove_value(int);
        bool is_empty() const;
};

#endif