#include <iostream>
#include <vector>
#include <string>
#include "citamedica.h"
#include "medico.h"
#include "paciente.h"

std::vector<CitaMedica> citas;
std::vector<Medico> medicos;
std::vector<Paciente> pacientes;

void agregarPaciente() {
    std::string nombre;
    int edad;

    std::cout << "Ingrese nombre del paciente: ";
    std::getline(std::cin, nombre);

    std::cout << "Ingrese edad del paciente: ";
    std::cin >> edad;
    std::cin.ignore();

    pacientes.push_back(Paciente(nombre, edad));
    std::cout << "Paciente agregado correctamente.\n";
}

void agregarMedico() {
    std::string nombre, especialidad;

    std::cout << "Ingrese nombre del médico: ";
    std::getline(std::cin, nombre);

    std::cout << "Ingrese especialidad del médico: ";
    std::getline(std::cin, especialidad);

    medicos.push_back(Medico(nombre, especialidad));
    std::cout << "Médico agregado correctamente.\n";
}

void agregarCita() {
    if (pacientes.empty() || medicos.empty()) {
        std::cout << "Debe haber al menos un paciente y un médico registrados.\n";
        return;
    }

    std::string fecha, hora;

    std::cout << "Ingrese fecha de la cita (DD/MM/AAAA): ";
    std::getline(std::cin, fecha);

    std::cout << "Ingrese hora de la cita (HH:MM): ";
    std::getline(std::cin, hora);

    // Mostrar pacientes disponibles
    std::cout << "\nPacientes disponibles:\n";
    for (size_t i = 0; i < pacientes.size(); i++) {
        std::cout << i + 1 << ". " << pacientes[i].getNombre() << "\n";
    }

    int pacienteIdx;
    std::cout << "Seleccione el número del paciente: ";
    std::cin >> pacienteIdx;
    std::cin.ignore();
    pacienteIdx--;

    // Mostrar médicos disponibles
    std::cout << "\nMédicos disponibles:\n";
    for (size_t i = 0; i < medicos.size(); i++) {
        std::cout << i + 1 << ". " << medicos[i].getNombre()
            << " - " << medicos[i].getEspecialidad() << "\n";
    }

    int medicoIdx;
    std::cout << "Seleccione el número del médico: ";
    std::cin >> medicoIdx;
    std::cin.ignore();
    medicoIdx--;

    if (pacienteIdx >= 0 && pacienteIdx < pacientes.size() &&
        medicoIdx >= 0 && medicoIdx < medicos.size()) {
        citas.push_back(CitaMedica(fecha, hora,
            pacientes[pacienteIdx],
            medicos[medicoIdx]));
        std::cout << "Cita agregada correctamente.\n";
    }
    else {
        std::cout << "Índices inválidos.\n";
    }
}

void mostrarCitas() {
    if (citas.empty()) {
        std::cout << "No hay citas registradas.\n";
        return;
    }

    std::cout << "\nCitas registradas:\n";
    for (const auto& cita : citas) {
        std::cout << "\nFecha: " << cita.getFecha()
            << "\nHora: " << cita.getHora()
            << "\nPaciente: " << cita.getPaciente().getNombre()
            << "\nMédico: " << cita.getMedico().getNombre()
            << "\nEspecialidad: " << cita.getMedico().getEspecialidad()
            << "\n-----------------\n";
    }
}

int main() {
    while (true) {
        std::cout << "\nSistema de Gestión de Citas Médicas\n";
        std::cout << "1. Agregar Paciente\n";
        std::cout << "2. Agregar Médico\n";
        std::cout << "3. Agregar Cita\n";
        std::cout << "4. Mostrar Citas\n";
        std::cout << "5. Salir\n";
        std::cout << "Seleccione una opción: ";

        int opcion;
        std::cin >> opcion;
        std::cin.ignore();

        switch (opcion) {
        case 1:
            agregarPaciente();
            break;
        case 2:
            agregarMedico();
            break;
        case 3:
            agregarCita();
            break;
        case 4:
            mostrarCitas();
            break;
        case 5:
            return 0;
        default:
            std::cout << "Opción inválida.\n";
        }
    }

    return 0;
}