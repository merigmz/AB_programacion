#include "Medico.h"
#include <iostream>

Medico::Medico(std::string nombre, std::string especialidad, std::string id)
    : nombre(nombre), especialidad(especialidad), id(id) {}

void Medico::mostrarInformacion() const {
    std::cout << "Médico: " << nombre << ", Especialidad: " << especialidad << ", ID: " << id << std::endl;
}

std::string Medico::getId() const {
    return id;
}

std::string Medico::getEspecialidad() const {
    return especialidad;
}
