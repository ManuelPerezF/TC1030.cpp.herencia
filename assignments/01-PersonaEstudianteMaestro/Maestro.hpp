#pragma once
#include<string>
#include "Persona.hpp"

class Maestro : public Persona
{
public:
    Maestro();
    Maestro(std::string nom, int ed, std::string dep);
    std::string getDepartamento();
    void muestraDatos();
private:
    std::string departamento;
    
};

