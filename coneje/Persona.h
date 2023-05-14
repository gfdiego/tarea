#pragma once
#include<iostream>
using namespace std;


class Persona
{
protected: string nombres, direccion;
         int telefono = 0;
         //constructor
protected:
    Persona() {

    }
    Persona(string nom,  string dir, int tel) {
        nombres = nom;
        direccion = dir;
        telefono = tel;
    

    }
};
