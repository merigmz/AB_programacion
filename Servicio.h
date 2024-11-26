#pragma once
#ifndef SERVICIO_H
#define SERVICIO_H

#include <string>

class Servicio {
private:
    std::string nombre;
    double costo;

public:
    Servicio(std::string nombre, double costo);

    void mostrarDetalles() const;
    std::string getNombre() const;
    double getCosto() const;
};

#endif

