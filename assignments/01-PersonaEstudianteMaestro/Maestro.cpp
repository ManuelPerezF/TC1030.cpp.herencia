#include "Maestro.hpp"
#include <iostream>

Maestro::Maestro() {

}

Maestro::Maestro(std::string nom, int ed, std::string dep)
{
    this -> nombre = nom;
    this -> edad = ed;
    this -> departamento = dep;
}

std::string Maestro::getDepartamento()
{
    return departamento;
}

void Maestro::muestraDatos()
{
    std::cout<<"Nombre: " << nombre << std::endl;
    std::cout<<"Edad: " << edad << std::endl;
    std::cout<<"Departamento: " << departamento << std::endl;
}