//
// Created by bora on 10.04.2024.
//

#include "LinkedList.h"

LinkedList::LinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
}
LinkedList::~LinkedList() {
    Node *tmp = this->head;
    while (tmp != nullptr) {
        Node *next = tmp->getNext();
        delete tmp;
        tmp = next;
    }
}
void LinkedList::insertFirst(Node *newNode) {
    if (this->tail == nullptr) {
        this->tail = newNode;
    } else {
        newNode->setNext(this->head);
    }
    this->head = newNode;
}
void LinkedList::insertLast(Node *newNode) {
    if (this->head == nullptr) {
        this->head = newNode;
    } else {
        this->tail->setNext(newNode);
    }
    this->tail = newNode;
}
Node *LinkedList::getPrevious(Node *node) {
    Node *tmp = head;
    Node *previous = nullptr;
    while (tmp != node) {
        previous = tmp;
        tmp = tmp->getNext();
    }
    return previous;
}
void LinkedList :: insertMiddle(Node* newNode, Node* prev) {
    newNode->setNext(prev->getNext());
    prev->setNext(newNode);
}
Node* LinkedList::search(int data) {
    Node* tmp = head;
    while (tmp != nullptr) {
        if (tmp->getData() == data) {
            return tmp;
        }
        tmp = tmp->getNext();
    }
    return nullptr;
}
Node* LinkedList:: nodeIth(int i) {
    Node* tmp = head;
    int j = 0;
    while (tmp != nullptr && j < i) {
        tmp = tmp->getNext();
        j++;
    }
    return tmp;
}