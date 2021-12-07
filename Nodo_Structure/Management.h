//
// Created by danie on 02/09/2021.
//

#ifndef NODO_STRUCTURE_MANAGEMENT_H
#define NODO_STRUCTURE_MANAGEMENT_H

#include <string.h>
#include "LinkedList.cpp"
#include "Nvidia.h"
#include <vector>



using namespace std;

class Management {
    public:

    Management();
    bool isEmpty();

    bool vAddNodeFirst(string id, string name, int valueTarjet);
    bool vAddNodeLast(string id, string name, int valueTarjet);
    bool vAddNodeAfterTo(string idNode,string id, string name, int valueTarjet);
    bool vAddNodeBeforeTo(string idNode,string id, string name, int valueTarjet);
    bool vSorted(string id, string name, int valueTarjet);

    Nvidia vGetFirst();
    Nvidia vGetLast();
    Nvidia vDelete(string idNode);

    vector<Nvidia> getListNvidia(bool);

    Nvidia *vFindNode(string id);
    Nvidia *find(string id);
    Nvidia *findN(string id);

    virtual ~Management();

private:
    vector<Nvidia> nvidia;




};


#endif //NODO_STRUCTURE_MANAGEMENT_H
