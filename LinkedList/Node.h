//
// Created by bora on 10.04.2024.
//

#ifndef CPP_TRAINING_ZONE_CS202_NODE_H
#define CPP_TRAINING_ZONE_CS202_NODE_H


class Node {
    private:
        int data;
        Node* next;
    public:
        explicit Node(int data);
        int getData() const;
        Node* getNext() const;
        void setNext(Node *next);
        void setData(int data);


};


#endif //CPP_TRAINING_ZONE_CS202_NODE_H
