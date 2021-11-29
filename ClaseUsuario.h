#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "ClaseReserva.h"
#include "ClaseMaquina.h"

using namespace std;

class Usuario {
private:
    string nombrecompleto_;
    string email_;
    string contraseña_;
    int id_;
    int limitetiempo_;
    list<Reserva>reservas_;
    list<Maquina>maquinas_;
    vector<int>recursos_;


public:
    Usuario(string nombrecompleto,string email, string contraseña, int id, int limitetiempo){nombrecompleto_=nombrecompleto; email_=email; contraseña_=contraseña;id_=id; limitetiempo_=0; }

    inline string getNombre() {return nombrecompleto_;}
    void setNombre(string nombrecompleto) { nombrecompleto_=nombrecompleto;}
    inline string getEmail() {return email_; }
    void setEmail(string email) {email_=email;}
    inline int getID(){return id_;}
    inline int getLimiteTiempo() {return limitetiempo_; }
    void setLimiteTiempo(string limitetiempo) { limitetiempo_=limitetiempo;}
    inline list<Reserva> getReservasMaquinas() {return reservas_;}
    bool crearReserva(list<Reserva>reservas,vector <int>recursos);
    int setReserva(int id_maquina);
    int eliminarReserva(int id_maquina);
};

#endif
