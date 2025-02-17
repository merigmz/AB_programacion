#pragma once
#include <string>
#include "paciente.h"
#include "medico.h"

class CitaMedica {
private:
    std::string fecha;
    std::string hora;
    Paciente paciente;
    Medico medico;

public:
    CitaMedica(std::string fecha = "", std::string hora = "",
        Paciente paciente = Paciente(), Medico medico = Medico());

    std::string getFecha() const;
    void setFecha(const std::string& fecha);
    std::string getHora() const;
    void setHora (const std::string& hora);
    Paciente getPaciente() const;
    void setPaciente(const Paciente& paciente);
    Medico getMedico() const;
    void setMedico(const Medico& medico);
};