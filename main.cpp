// main.cpp
#include "Fecha.h"
#include "Evento.h"
#include "Agenda.h"
#include <iostream>

int main() {
    Fecha fechaHoy(8, 11, 2023);
    Evento reunion("Reunion con el equipo de proyecto", fechaHoy, "10:00", "12:00");
    Agenda miAgenda;

    miAgenda.agregarEvento(reunion);

    std::cout << "Eventos en mi agenda:\n";
    miAgenda.mostrarEventos();

    return 0;
}