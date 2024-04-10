//
// Created by bora on 10.04.2024.
//

#ifndef CPP_TRAINING_ZONE_CS202_LINKEDLIST_H
#define CPP_TRAINING_ZONE_CS202_LINKEDLIST_H


#include "Node.h"

class LinkedList {
private:
    Node *head;
    Node *tail;
public:
    LinkedList();
    ~LinkedList();
    Node* getPrevious(Node *node);
    void insertFirst(Node* newNode);
    void insertLast(Node* newNode);
    static void insertMiddle(Node* newNode, Node* prev);
    Node* search(int data);
    Node* nodeIth(int i);
};


#endif //CPP_TRAINING_ZONE_CS202_LINKEDLIST_H
