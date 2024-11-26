#pragma once
#ifndef CITAMEDICA_H
#define CITAMEDICA_H

#include <string>

class CitaMedica {
private:
    std::string fecha;
    std::string hora;
    std::string idPaciente;
    std::string idMedico;

public:
    // Constructor
    CitaMedica(std::string fecha, std::string hora, std::string idPaciente, std::string idMedico);

    // M�todos b�sicos
    void mostrarDetalles() const;

    // M�todos de acceso
    std::string getFecha() const;
    std::string getHora() const;
    std::string getIdPaciente() const;
    std::string getIdMedico() const;
};

#endif


