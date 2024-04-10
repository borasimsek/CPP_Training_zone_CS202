//
// Created by bora on 10.04.2024.
//

#include "Node.h"

Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}
int Node::getData() const {
    return this->data;
}
Node* Node::getNext() const {
    return this->next;
}
void Node::setNext(Node* next) {
    this->next = next;
}
void Node::setData(int data) {
    this->data = data;
}
