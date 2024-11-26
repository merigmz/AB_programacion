#pragma once
#ifndef MEDICO_H
#define MEDICO_H

#include <string>
#include <vector>

class Medico {
private:
    std::string nombre;
    std::string especialidad;
    std::string id;

public:
    Medico(std::string nombre, std::string especialidad, std::string id);

    void mostrarInformacion() const;
    std::string getId() const;
    std::string getEspecialidad() const;
};

#endif

