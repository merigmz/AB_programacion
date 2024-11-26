#include "Servicio.h"
#include <iostream>

Servicio::Servicio(std::string nombre, double costo)
    : nombre(nombre), costo(costo) {}

void Servicio::mostrarDetalles() const {
    std::cout << "Servicio: " << nombre << ", Costo: $" << costo << std::endl;
}

std::string Servicio::getNombre() const {
    return nombre;
}

double Servicio::getCosto() const {
    return costo;
}
