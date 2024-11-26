#include "CitaMedica.h"
#include <iostream>

// Constructor
CitaMedica::CitaMedica(std::string fecha, std::string hora, std::string idPaciente, std::string idMedico)
    : fecha(fecha), hora(hora), idPaciente(idPaciente), idMedico(idMedico) {}

// Método para mostrar detalles de la cita médica
void CitaMedica::mostrarDetalles() const {
    std::cout << "Cita Médica - Fecha: " << fecha << ", Hora: " << hora
        << ", ID Paciente: " << idPaciente << ", ID Médico: " << idMedico << std::endl;
}

// Métodos de acceso
std::string CitaMedica::getFecha() const {
    return fecha;
}

std::string CitaMedica::getHora() const {
    return hora;
}

std::string CitaMedica::getIdPaciente() const {
    return idPaciente;
}

std::string CitaMedica::getIdMedico() const {
    return idMedico;
}

