//
// Created by danie on 15/08/2021.
//

#ifndef NODO_STRUCTURE_NVIDIA_H
#define NODO_STRUCTURE_NVIDIA_H
#include <string>
#include <ostream>

class Nvidia {
public:
    Nvidia(const std::string id, const std::string name, int valueTarjet);

    Nvidia();

    const std::string &getId() const;

    void setId(const std::string &id);

    const std::string &getName() const;

    void setName(const std::string &name);

    int getValueTarjet() const;

    void setValueTarjet(int valueTarjet);

    friend std::ostream &operator<<(std::ostream &os, const Nvidia &nvidia);

    virtual ~Nvidia();

    std::string converter();

private:
    std::string id;
    std::string name;
    int valueTarjet;
    std::string parseInt(int valueTarjet);
};


#endif //NODO_STRUCTURE_NVIDIA_H
