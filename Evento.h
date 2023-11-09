// Evento.h
#ifndef EVENTO_H
#define EVENTO_H

#include "Fecha.h"
#include <iostream>
#include <string>

class Evento {
private:
    std::string descripcion;
    Fecha fecha;
    std::string horaInicio;
    std::string horaFin;

public:
    Evento(const std::string& desc, const Fecha& f, const std::string& hInicio, const std::string& hFin)
        : descripcion(desc), fecha(f), horaInicio(hInicio), horaFin(hFin) {}

    void mostrarEvento() const {
        std::cout << "Descripcion: " << descripcion << "\nFecha: ";
        fecha.mostrar();
        std::cout << "Hora de Inicio: " << horaInicio << "\nHora de Fin: " << horaFin << std::endl;
    }
};

#endif // EVENTO_H
Agenda.h:

cpp
Copy code
// Agenda.h
#ifndef AGENDA_H
#define AGENDA_H

#include "Evento.h"
#include <vector>

class Agenda {
private:
    std::vector<Evento> eventos;

public:
    void agregarEvento(const Evento& evento) {
        eventos.push_back(evento);
    }

    void mostrarEventos() const {
        for (const auto& evento : eventos) {
            evento.mostrarEvento();
        }
    }
};

#endif