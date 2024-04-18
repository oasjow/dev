#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

class Node {
    public:
        int data;
        Node* next;
        Node();
        ~Node();
};

class LinkedList {
    private:
        Node* head;
    public:
        int size() const;
        bool push_back(int);
        bool push_front(int);
        bool insert(int, int);
        bool remove(int);
        bool remove_value(int);
        bool is_empty() const;
        int* to_array() const;
        Node* get_head() const;
        LinkedList();
        ~LinkedList();
};

#endif