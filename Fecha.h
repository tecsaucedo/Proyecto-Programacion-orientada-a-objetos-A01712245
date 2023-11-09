// Fecha.h
#ifndef FECHA_H
#define FECHA_H

class Fecha {
private:
    int dia;
    int mes;
    int anio;

public:
    Fecha(int d, int m, int a) : dia(d), mes(m), anio(a) {}  // Constructor inline.

    // Getters y setters inline.
    int getDia() const { return dia; }
    void setDia(int d) { dia = d; }

    int getMes() const { return mes; }
    void setMes(int m) { mes = m; }

    int getAnio() const { return anio; }
    void setAnio(int a) { anio = a; }

    // Función para validar la fecha.
    bool esValida() const {
        return dia > 0 && dia <= 30 && mes > 0 && mes <= 12 && anio > 0;
    }

    // Función para mostrar la fecha.
    void mostrar() const {
        std::cout << dia << "/" << mes << "/" << anio << std::endl;
    }
};

#endif
