#include <iostream>
#include  <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    string Equipo;
    int Partidos, Puntaje=0,Goles1, Goles2,Partido;    
    srand(time(NULL));

    cout<<"INGRESE EL NOMBRE DE SU EQUIPO"<<endl;
    cin>>Equipo;
    cout<<"INGRESE LA CANTIDAD DE PARTIDOS PENDIENTES"<<endl;
    cin>>Partidos;
    for (int i = 0; i < Partidos; i++)
    {
        Goles1 = rand() % 5 +0;
        Goles2 = rand() % 5 +0;

        if(Goles1 == Goles2){
            Partido=1;
            Puntaje+=Partido;
        }else if(Goles1>Goles2){
            Partido=3;
            Puntaje+=Partido;
        } else{
            Partido=0;
            Puntaje+=Partido;
        } 

        cout<<"\tPARTIDO "<<i+1<<endl<<"\n\tPuntos del Olimpia\nEste Partido: "<<Partido<<"\nGlobal: "<<Puntaje<<endl;
        cout<<"Goles del olimpia: "<<Goles1<<"\tGoles Equipo "<<i+1<<": "<<Goles2<<endl<<endl;        
    }

    cout<<"Puntaje total del "<<Equipo<<": "<<Puntaje;    
    return 0;
}