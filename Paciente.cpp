#include "Paciente.h"
#include <iostream>

Paciente::Paciente(std::string nombre, std::string id, int edad)
    : nombre(nombre), id(id), edad(edad) {}

void Paciente::mostrarInformacion() const {
    std::cout << "Paciente: " << nombre << ", ID: " << id << ", Edad: " << edad << std::endl;
}

std::string Paciente::getId() const {
    return id;
}

std::string Paciente::getNombre() const {
    return nombre;
}

int Paciente::getEdad() const {
    return edad;
}

