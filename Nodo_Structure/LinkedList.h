//
// Created by danie on 15/08/2021.
//

#ifndef NODO_STRUCTURE_LINKEDLIST_H
#define NODO_STRUCTURE_LINKEDLIST_H

#include <vector>
#include "Node.h"
#include <string>

template<class T>
class LinkedList {
public:

    LinkedList();
    bool isEmpty();
    void addNodelast(T);
    void addNodeFirst(T);
    Node<T>* findNode(std::string);
    T* findInfo(std::string);
    std::vector<T>getLinkedList(bool);
    void addNodeBeforeTo(Node<T>*,T);
    void addNodeAfterTo(Node<T>*,T);
    void addNodeSorted(T);

    T deleteNode(Node<T>*);
    T getFirst();
    T getLast();

    virtual ~LinkedList();


private:
 Node<T>* head;
 Node<T>* last;


};



#endif //NODO_STRUCTURE_LINKEDLIST_H
