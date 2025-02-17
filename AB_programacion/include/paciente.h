#pragma once
#include <string>

class Paciente {
private:
    std::string nombre;
    int edad;

public:
    Paciente(std::string nombre = "", int edad = 0);
    std::string getNombre() const;
    void setNombre(const std::string& nombre);
    int getEdad() const;
    void setEdad(int edad);
};
