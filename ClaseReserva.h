#ifndef RESERVA_H
#define RESERVA_H

#include <iostream>
#include <string>
#include <list>
#include "ClaseMaquina.h"

using namespace std;

class Reserva{
private:
	int id_usuario_;
	int tiempoReserva_;
	int id_maquina_;
	int tiempoRestante_;
	vector<int>recursos_;
	list <Maquina> Maquina_;

public:

Reserva(int id_usuario,int tiempoReserva,int id_maquina,int tiempoRestante,vector<int>recursos){
	id_usuario_=id_usuario;
	tiempoReserva_=tiempoReserva;
	id_maquina_=id_maquina;
	tiempoRestante_=tiempoRestante;
	recursos_=recursos;
};

bool ComprobarLimiteRecursos(int idMaquina,vector<int>recursos);
bool ExisteReserva(int id_maquina,int tiempoRestante);
inline int getIdUsuario(){return id_usuario_;}
inline int getDuracionRestante(){return tiempoRestante_;}
inline int getIdMaquina(){return id_maquina_;}
inline void setIdUsuario(int id_usuario){id_usuario_=id_usuario;}
inline void setIdMaquina(int id_maquina){id_maquina_=id_maquina;}
inline int getTiempoReserva(){return tiempoReserva_;}
inline void setTiempoReserva(int tiempoReserva){tiempoReserva_=tiempoReserva;}
inline vector<int> getRecursos(){return recursos_;}
inline void setRecursos(vector<int>recursos){recursos_=recursos;}
};

#endif
