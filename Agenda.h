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

#endif // AGENDA_H
