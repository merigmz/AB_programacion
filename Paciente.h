#pragma once
#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>

class Paciente {
private:
    std::string nombre;
    std::string id;
    int edad;

public:
    Paciente(std::string nombre, std::string id, int edad);

    void mostrarInformacion() const;
    std::string getId() const;
    std::string getNombre() const;
    int getEdad() const;
};

#endif
