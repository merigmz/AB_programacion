#include "citamedica.h"

CitaMedica::CitaMedica(std::string fecha, std::string hora,
    Paciente paciente, Medico medico)
    : fecha(fecha), hora(hora), paciente(paciente), medico(medico) {
}

std::string CitaMedica::getFecha() const { return fecha; }
void CitaMedica::setFecha(const std::string& fecha) { this->fecha = fecha; }
std::string CitaMedica::getHora() const { return hora; }
void CitaMedica::setHora(const std::string& hora) { this->hora = hora; }
Paciente CitaMedica::getPaciente() const { return paciente; }
void CitaMedica::setPaciente(const Paciente& paciente) { this->paciente = paciente; }
Medico CitaMedica::getMedico() const { return medico; }
void CitaMedica::setMedico(const Medico& medico) { this->medico = medico; }