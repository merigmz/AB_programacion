#include "medico.h"

Medico::Medico(std::string nombre, std::string especialidad)
    : nombre(nombre), especialidad(especialidad) {
}

std::string Medico::getNombre() const { return nombre; }
void Medico::setNombre(const std::string& nombre) { this->nombre = nombre; }
std::string Medico::getEspecialidad() const { return especialidad; }
void Medico::setEspecialidad(const std::string& especialidad) { this->especialidad = especialidad; }