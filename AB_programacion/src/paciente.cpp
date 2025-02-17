#include "paciente.h"

Paciente::Paciente(std::string nombre, int edad)
    : nombre(nombre), edad(edad) {
}

std::string Paciente::getNombre() const { return nombre; }
void Paciente::setNombre(const std::string& nombre) { this->nombre = nombre; }
int Paciente::getEdad() const { return edad; }
void Paciente::setEdad(int edad) { this->edad = edad; }