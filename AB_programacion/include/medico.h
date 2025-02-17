#pragma once
#include <string>

class Medico {
private:
    std::string nombre;
    std::string especialidad;

public:
    Medico(std::string nombre = "", std::string especialidad = "");
    std::string getNombre() const;
    void setNombre(const std::string& nombre);
    std::string getEspecialidad() const;
    void setEspecialidad(const std::string& especialidad);
};