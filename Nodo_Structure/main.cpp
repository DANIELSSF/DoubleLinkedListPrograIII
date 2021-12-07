#include <iostream>
#include "Management.h"


using namespace std;
int opc;
string id;
string name, node,idNodo,idNode;
int valueTarjet;


Management *M = new Management();
// Aqui se agregan las tarjetas al inicio de la lista (addNodeFirst)
void addTarjetFirst(){
    cout << "Ingrese el ID la tarjeta Grafica Nvidia: " << endl;
    cin>>id;
    cout << "Ingrese Nombre de la Grafica: " << endl;
    cin>>name;
    cout << "Ingrese valor de la Grafica: " << endl;
    cin>>valueTarjet;
    if (M->vAddNodeFirst(id, name, valueTarjet)) {
        cout << "Se agrego correctamente" << endl;


    } else {
        cout << "ia existe XD" << endl;
    }
}

void addTarjetLast(){
    cout << "Ingrese el ID la tarjeta Grafica Nvidia: " << endl;
    cin>>id;
    cout << "Ingrese descripción del computador: " << endl;
    cin>>name;
    cout << "Ingrese valor del computador: " << endl;
    cin>>valueTarjet;



    if (M->vAddNodeLast(id, name, valueTarjet)) {
        cout << "Se agrego correctamente" << endl;

    } else {
        cout << "ia existe XD" << endl;
    }

}
void mostrarListaNvidia(){
    if (!M->isEmpty()) {
        for (int i = 0; i < M->getListNvidia(true).size(); i++) {
            cout << M->getListNvidia(true).at(i).converter() << endl;
        }
    }else{
        cout << "  Lista Vacia!!" << endl;
        cout << "  Ingresa inventario primero " << endl;

    }
}
void encontrarNodo(){
    if (!M->isEmpty()){
        cout << "  Encontrar Nodo Digite " << endl;
        cin>>node;
        if (M->vFindNode(node)!=NULL){
            cout << "El nodo con el id "<<node<<"  existe en la lista y es:" << endl;
            cout << M->vFindNode(node)->converter()<< endl;
        }
    }
}
void encontrarNodoId(){
    if (!M->isEmpty()){
        cout << "  Encontrar Nodo Digite el id" << endl;
        cin>>node;
        if (M->findN(id)!=NULL){
            cout << "El nodo con el id "<<node<<"  existe en la lista y es:" << endl;
            cout << M->findN(node)->converter()<< endl;
        }
    }
}
void insertarNodoDespues(){
    cout << "Ingrese ID de La tarjeta Nvidia anterior donde va a guardar despues La tarjeta Nvidia creada: " << endl;
    cin>>idNodo;
    cout << "Ingrese ID de La tarjeta Nvidia: " << endl;
    cin>>id;
    cout << "Ingrese descripcion de La tarjeta Nvidia : " << endl;
    cin>>name;
    cout << "Ingrese valor de La tarjeta Nvidia: " << endl;
    cin>>valueTarjet;

    if (M->vAddNodeAfterTo(idNodo, id, name, valueTarjet)) {

        cout << "La tarjeta Nvidia fue agregada correctamente" << endl;
    } else {
        cout << "La tarjeta Nvidia ya esta!!" << endl;
    }
}
void insertarNodoAntes(){
    cout << "Ingrese ID de La tarjeta Nvidia siguiente donde va a guardar antes La tarjeta Nvidia creada: " << endl;
    cin>>idNodo;
    cout << "Ingrese ID de La tarjeta Nvidia: " << endl;
    cin>>id;
    cout << "Ingrese descripcion de La tarjeta Nvidia : " << endl;
    cin>>name;
    cout << "Ingrese valor de La tarjeta Nvidia: " << endl;
    cin>>valueTarjet;

    if (M->vAddNodeBeforeTo(idNodo, id, name, valueTarjet)) {

        cout << "La tarjeta Nvidia fue agregada correctamente" << endl;
    } else {
        cout << "La tarjeta Nvidia ya esta!!" << endl;
    }

}
void ordenarNodos(){
    cout << "Ingrese Una lista de las Trajetas Nvidia graficas que desea odenar " << endl;

    cout << "Ingrese ID de la Trajeta Nvidia: " << endl;
    cin>>id;
    cout << "Ingrese descripcion de la Trajeta Nvidia: " << endl;
    cin>>name;
    cout << "Ingrese valor de Trajeta Nvidia: " << endl;
    cin>>valueTarjet;


    if (M->vSorted(id, name, valueTarjet)) {
        if (M->vFindNode(id) == NULL) {
            cout << "La Trajetas Nvidia fue agregado correctamente" << endl;
        }
    } else {
        cout << "La Trajetas Nvidia ya ta!" << endl;
    }
}
void obtenerUltimoNodo(){
    cout << "La Ultima Trajeta Nvidia existente en la lista es: " << M->vGetLast().converter()<<endl;

}
void obtenerPrimerNodo(){
    cout << "La primera Trajeta Nvidia existente en la lista es: " << M->vGetFirst().converter()<<endl;
}
void borrarNodo(){
    if (!M->isEmpty()) {
        cout << "Ingrese el código de la Trajeta Nvidia que desea eliminar" <<endl;
        cin>>idNode;

        cout << "El nodo eliminado fue: " << M->vDelete(idNode).converter()<<endl;
    }else{
        cout<<"No hay nodos para eliminar"<<endl;
    }

}
int main() {

    do{
        cout<<"\n ---------------------------------------------------------"<<endl;
        cout<<"                   Menu Tarjetas Graficas Nvidia          "<<endl;
        cout<<" -----------------------------|--------------------------"<<endl;
        cout<<"   1.Insertar al inicio       |  7.Agregar Nodo antes de: "<<endl;
        cout<<"   2.Insertar al Final        |  8.Ordenar Nodos          "<<endl;
        cout<<"   3.Mostrar Lista            |  9.Obtener Ultimo Nodo    "<<endl;
        cout<<"   4.Encontrar Nodo           |  10.Obtener primer Nodo  "<<endl;
        cout<<"   5.Encontrar Info           |  11.Borrar nodo"           <<endl;
        cout<<"   6.Agregar Nodo despues de: |  12. Salir"                <<endl;

        cout<<"\n Escoja Una opcion:"<<endl;
        cin>>opc;
        switch (opc) {
            case 1:cout<<"\n Insertar Nodo al Inicio"<<endl;
                addTarjetFirst();
                break;
            case 2:
                cout<<"\n Insertar Nodo al Final"<<endl;
                addTarjetLast();
                break;
            case 3:
                cout<<"\n Mostar Lista"<<endl;
                mostrarListaNvidia();
                break;
            case 4:
                cout<<"\n Encontrar Nodo"<<endl;
                encontrarNodo();
                break;
            case 5:
                cout<<"\n Encontrar Info"<<endl;
                encontrarNodoId();
                break;
            case 6:
                cout<<"\n Agregar Nodo despues de:"<<endl;
                insertarNodoDespues();
                break;
            case 7:
                cout<<"\n Agregar Nodo antes de:"<<endl;
                insertarNodoAntes();
                break;
            case 8:
                cout<<"\n Ordenar Nodos"<<endl;
                ordenarNodos();
                break;
            case 9:
                cout<<"\n Obtener Ultimo nodo"<<endl;
                obtenerUltimoNodo();
                break;
            case 10:
                cout<<"\n Obtener Primer nodo"<<endl;
                obtenerPrimerNodo();
                break;
            case 11:
                cout<<"\n Borrar Nodo"<<endl;
                borrarNodo();
                break;
            case 12:
                cout<<"\n F"<<endl;
                break;
            default:
                cout<<"\n opc no valida, lee bien"<<endl;
        }
    } while (opc!=13);
        cout<<"\n Opcion incorrecta"<<endl;
        return 0;





}
