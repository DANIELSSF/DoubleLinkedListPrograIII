//
// Created by danie on 15/08/2021.
//

#ifndef NODO_STRUCTURE_NODE_H
#define NODO_STRUCTURE_NODE_H

#include <cstdlib>

template<class T> class LinkedList;
template <class T>

class Node {
    friend class LinkedList<T>;
    public:
    Node(T);


    ~Node();

    private:
     T info;
    Node<T>* next;
    Node<T>* previous;


};

template<class T>
Node<T>::Node(T info) {
    Node::info = info;
    next = NULL;
    previous= NULL;
}
template<class T>
    Node<T>::~Node() {

        }



#endif //NODO_STRUCTURE_NODE_H
