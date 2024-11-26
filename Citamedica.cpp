#include "CitaMedica.h"
#include <iostream>

// Constructor
CitaMedica::CitaMedica(std::string fecha, std::string hora, std::string idPaciente, std::string idMedico)
    : fecha(fecha), hora(hora), idPaciente(idPaciente), idMedico(idMedico) {}

// M�todo para mostrar detalles de la cita m�dica
void CitaMedica::mostrarDetalles() const {
    std::cout << "Cita M�dica - Fecha: " << fecha << ", Hora: " << hora
        << ", ID Paciente: " << idPaciente << ", ID M�dico: " << idMedico << std::endl;
}

// M�todos de acceso
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

