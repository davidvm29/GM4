#ifndef CLASEMAQUINA.H
#define CLASEMAQUINA.H

#include <cstdio>
#include <string>
#include <vector>


using namespace std;

class Maquina{

private:
vector<int>Recursos_;
string nombre_;
int cluster_;
int id_maquina_;

public:

Maquina(string nombre,string recursos,int cluster,int id_maquina){
nombre_=nombre;
cluster_=cluster;
id_maquina_=id_maquina;
Recursos_=recursos;
};

inline string getNombre(){return nombre_;}
inline void setNombre(string nombre){nombre_=nombre;}
inline int getCluster(){return cluster_;}
inline void setCluster(int cluster){cluster_=cluster;}
inline int getID(){return id_maquina_;}
inline void setID(int id_maquina){id_maquina_=id_maquina;}
inline void setRecursos(vector<int>recursos){Recursos_=recursos;}
};

#endif
