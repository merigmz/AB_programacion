#include <iostream>
#include <vector>
#include "Paciente.h"
#include "Medico.h"
#include "CitaMedica.h"
#include "Servicio.h"

Paciente* buscarPacientePorId(const std::vector<Paciente>& pacientes, const std::string& id);
Medico* buscarMedicoPorId(const std::vector<Medico>& medicos, const std::string& id);

int main() {
    // Listas de datos
    std::vector<Paciente> listaPacientes;
    std::vector<Medico> listaMedicos;
    std::vector<CitaMedica> listaCitas;
    std::vector<Servicio> listaServicios;

    
    listaPacientes.emplace_back("Juan Perez", "P001", 30);
    listaPacientes.emplace_back("Maria Gomez", "P002", 25);
    listaPacientes.emplace_back("Henar Fuentes", "P003", 52);

    listaMedicos.emplace_back("Dra. Lopez", "Cardiolog�a", "M001");
    listaMedicos.emplace_back("Dr. Garc�a", "Pediatr�a", "M002");
    listaMedicos.emplace_back("Dr. Grande", "Geriatr�a", "M003");
    listaMedicos.emplace_back("Dr. Mero�o", "Cirug�a general", "M004");
    listaMedicos.emplace_back("Dra. Barber", "Cirug�a est�tica", "M005");
    listaMedicos.emplace_back("Dra. Moreno", "Dermatolog�a", "M006");
    listaMedicos.emplace_back("Dr. Blanco", "Ginecolog�a", "M007");

    listaCitas.emplace_back("2024-12-01", "10:00", "P001", "M001");
    listaCitas.emplace_back("2024-12-02", "12:00", "P002", "M002");
    listaCitas.emplace_back("2024-12-09", "13:00", "P003", "M003");
    listaCitas.emplace_back("2024-12-09", "17:00", "P004", "M004");
    listaCitas.emplace_back("2024-12-10", "09:30", "P005", "M005");
    listaCitas.emplace_back("2024-12-10", "11:15", "P006", "M006");
    listaCitas.emplace_back("2024-12-11", "18.00", "P007", "M007");

    listaServicios.emplace_back("Consulta General", 50.0);
    listaServicios.emplace_back("Radiograf�a", 100.0);
    listaServicios.emplace_back("Ecograf�a, 70.0");
    listaServicios.emplace_back("TAC, 200.0");
    listaServicios.emplace_back("Revisi�n, 20.0");
    listaServicios.emplace_back("An�lisis, 150.0");

    // Mostrar datos
    std::cout << "=== Pacientes ===" << std::endl;
    for (const auto& paciente : listaPacientes) {
        paciente.mostrarInformacion();
    }

    std::cout << "\n=== M�dicos ===" << std::endl;
    for (const auto& medico : listaMedicos) {
        medico.mostrarInformacion();
    }

    std::cout << "\n=== Citas M�dicas ===" << std::endl;
    for (const auto& cita : listaCitas) {
        cita.mostrarDetalles();
    }

    std::cout << "\n=== Servicios ===" << std::endl;
    for (const auto& servicio : listaServicios) {
        servicio.mostrarDetalles();
    }

    return 0;
}

// Funciones de utilidad para buscar un paciente por ID
Paciente* buscarPacientePorId(const std::vector<Paciente>& pacientes, const std::string& id) {
    for (const auto& paciente : pacientes) {
        if (paciente.getId() == id) {
            // Retornar un puntero al paciente (usar const_cast para eliminar la const)
            return const_cast<Paciente*>(&paciente);
        }
    }
    return nullptr;
}

// Funciones de utilidad para buscar un m�dico por ID
Medico* buscarMedicoPorId(const std::vector<Medico>& medicos, const std::string& id) {
    for (const auto& medico : medicos) {
        if (medico.getId() == id) {
            // Retornar un puntero al m�dico (usar const_cast para eliminar la const)
            return const_cast<Medico*>(&medico);
        }
    }
    return nullptr;
}
