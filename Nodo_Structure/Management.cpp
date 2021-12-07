
#include "Management.h"
    LinkedList<Nvidia>* nvidiaM;

    Management::Management() {
        nvidiaM = new LinkedList<Nvidia>();
    }

   bool Management::isEmpty() {
   nvidiaM->isEmpty();
    }

    Nvidia* Management::find(string id) {
        for (int i = 0; i < nvidia.size(); i++) {
            if (nvidia.at(i).getId().compare(id) == 0) {
                return &nvidia.at(i);
            }
            return NULL;
        }
    }
    Nvidia *Management::vFindNode(string id) {
        if (find(id)== NULL){
            return nvidiaM->findInfo(id);
        }
        return NULL;
    }



    bool Management::vAddNodeFirst(string id, string name, int valueTarjet) {

    if (vFindNode(id) == NULL){
        if (!nvidiaM->findNode(id)) {
            nvidiaM->addNodeFirst(Nvidia(id,name,valueTarjet));
            nvidia.push_back(Nvidia(id, name, valueTarjet));


            return true;
        }

    }
    return false;
}

bool Management::vAddNodeLast(string id, string name, int valueTarjet) {
        if (vFindNode(id) == NULL){
            if (!nvidiaM->findNode(id)) {
                nvidiaM->addNodelast(Nvidia(id,name,valueTarjet));
                nvidia.push_back(Nvidia(id, name, valueTarjet));

                return true;
            }

        }
        return false;
    }


    vector<Nvidia> Management::getListNvidia(bool f) {
        if (!isEmpty()) {
            return nvidiaM->getLinkedList(f);
        }

    }

Nvidia *Management::findN(string id) {
        if (find(id)== NULL){
            return nvidiaM->findInfo(id);
        }
        return NULL;
}

bool Management::vAddNodeAfterTo(string idNode,string id, string name, int valueTarjet) {
        if (vFindNode(id) == NULL) {
            if (!nvidiaM->isEmpty()) {
                nvidia.push_back(Nvidia(id, name, valueTarjet));
                nvidiaM->addNodeAfterTo(nvidiaM->findNode(idNode), Nvidia(id, name, valueTarjet));
                return true;
            } else {
                return false;
            }
        }
        return false;
}

bool Management::vAddNodeBeforeTo(string idNode, string id, string name, int valueTarjet) {
        if (vFindNode(id) == NULL) {
            if (!nvidiaM->isEmpty()) {
                nvidia.push_back(Nvidia(id, name, valueTarjet));
                nvidiaM->addNodeBeforeTo(nvidiaM->findNode(idNode), Nvidia(id, name, valueTarjet));
                return true;
            } else {
                return false;
            }
        }
        return false;
}

bool Management::vSorted(string id, string name, int valueTarjet) {
        if (vFindNode(id) == NULL) {
            nvidia.push_back(Nvidia(id, name, valueTarjet));
            nvidiaM->addNodeSorted(Nvidia(id, name, valueTarjet));
            return true;
        }
        return false;
}

Nvidia Management::vGetFirst() {
        if (!nvidiaM->isEmpty()) {
            return nvidiaM->getFirst();
        }
}
Nvidia Management::vGetLast() {
        if (!nvidiaM->isEmpty()) {
            return nvidiaM->getLast();
        }
    }

Nvidia Management::vDelete(string idNode) {
        if (vFindNode(idNode) != NULL) {
            Node<Nvidia>* aux = nvidiaM->findNode(idNode);
            return nvidiaM->deleteNode(aux);
        }
}

Management::~Management() {

}


