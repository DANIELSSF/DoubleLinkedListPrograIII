//
// Created by danie on 15/08/2021.
//

#include "LinkedList.h"

template<class T>
    LinkedList<T>::LinkedList() {
        head= NULL;
        last=NULL;
        }

template<class T>
bool LinkedList<T>::isEmpty() {
    return head == NULL && last == NULL;
}

template<class T>
void LinkedList<T>::addNodeFirst(T info) {
    Node<T>* newNode = new Node<T>(info);

    if(isEmpty()){
        head= newNode;
        last= newNode;

    }else{
        newNode->next=head;
        head->previous=newNode;
        head=newNode;

    }


}

template<class T>
void LinkedList<T>::addNodelast(T info) {
    Node<T>* newNode = new Node<T>(info);

    if(isEmpty()){
        head=newNode;
        last=newNode;
    }else{
        last->next=newNode;
        newNode->previous=last;
        last=newNode;
    }

}

template<class T>
std::vector<T> LinkedList<T>::getLinkedList(bool f) {
    std::vector<T> out;
    Node<T>* aux = f ? head : last;
    while( aux != NULL ){
        out.push_back( aux->info );
        aux = f ? aux->next : aux->previous;
    }

    return out;
}

template<class T>
        Node<T> *LinkedList<T>::findNode(std::string id) {
            Node<T>* aux = head;

            while (aux != NULL ){
                if(id.compare(aux->info.getId())==0){
                    return aux;
                }
                aux=aux->next;
                          }
         return NULL;
        }

template<class T>
void LinkedList<T>::addNodeBeforeTo(Node<T>* node, T info) {
    if (node == head){
        addNodeFirst(info);
    }else{
        Node<T>* newNode= new Node<T> (info);
        Node<T>* aux = head;
        while (aux->next != node){
            aux = aux->next;

        }
        newNode->next=aux->next;
        aux->next= newNode;
    }

}

template<class T>
T *LinkedList<T>::findInfo(std::string id) {
    Node<T>* aux = head;
    while (aux != NULL){
        if(id.compare(aux->info.getId())==0){
            return &aux->info;
        }
        aux=aux->next;
    }
    return NULL;
}



template<class T>
T LinkedList<T>::getFirst() {
    return head->info;
}

template<class T>
T LinkedList<T>::getLast() {
    return last->info;

}
template<class T>
        void LinkedList<T>::addNodeAfterTo(Node<T> *node , T info) {
            if (node == last){
                addNodelast(info);
            }else{
                Node<T>* newNode= new Node<T> (info);
                Node<T>* aux = last;
                while (aux->previous != node){
                    aux = aux->previous;

                }
                newNode->previous=aux->previous;
                aux->previous= newNode;
            }

        }



template<class T>
void LinkedList<T>::addNodeSorted(T info) {
    Node<T>* newNode = new Node<T>(info);
    if(isEmpty()){
        head=newNode;
    }else{
        Node<T>* act = head;
        Node<T>* ant = NULL;
        while (act->next!= NULL && info.getId().compare(act->info.getId()) > 0 ){
            ant=act;
            act=act->next;
        }
        if (ant == NULL){
             head=newNode;
        }else{
            ant->next=newNode;

        }
        newNode->next=act;
    }

}

template<class T>
T LinkedList<T>::deleteNode(Node<T>* node) {
    T info = node->info;

    if (node == head){
        head=head->next;


    }else {
        Node<T>* aux= head;

        while (aux->next!=node){
            aux=aux->next;

        }
        aux->next=node->next;

    }
    delete(node);
    return info;
}

template<class T>
        LinkedList<T>::~LinkedList() {
            if((! isEmpty())){
                Node<T>* aux = head;
                Node<T>* aux1 = last;

                while(aux != NULL && aux1!=NULL){
                    Node<T>* delNode = aux;
                    aux=aux->next;
                    delete (delNode);

                }
            }
        }
