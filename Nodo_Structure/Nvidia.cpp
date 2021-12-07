//
// Created by danie on 15/08/2021.
//

#include "Nvidia.h"
#include <sstream>

Nvidia::Nvidia(const std::string id, const std::string name, int valueTarjet) {
    this->id=id;
    this->name=name;
    this->valueTarjet=valueTarjet;
}

Nvidia::Nvidia() {
    this->id = "";
    this->name = "";
    this->valueTarjet = 0;
}

const std::string &Nvidia::getId() const {
    return id;
}

void Nvidia::setId(const std::string &id) {
    Nvidia::id = id;
}

const std::string &Nvidia::getName() const {
    return name;
}

void Nvidia::setName(const std::string &name) {
    Nvidia::name = name;
}

int Nvidia::getValueTarjet() const {
    return valueTarjet;
}

void Nvidia::setValueTarjet(int valueTarjet) {
    Nvidia::valueTarjet = valueTarjet;
}

std::ostream &operator<<(std::ostream &os, const Nvidia &nvidia) {
    os << "id: " << nvidia.id << " name: " << nvidia.name << " valueTarjet: " << nvidia.valueTarjet;
    return os;
}
std::string Nvidia::parseInt(int valueTarjet) {
    std::ostringstream aux;
    aux<<valueTarjet;
    return aux.str();
}

std::string Nvidia::converter() {
    std::string valueTarjets = parseInt(valueTarjet);
    return "Id=" + id + ", Name:" + name + ", Value:" + valueTarjets;
}

Nvidia::~Nvidia() {

}


