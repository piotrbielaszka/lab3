#include "Figura.hpp"
#include "WektorFigur.hpp"
#include "FabrykaFigur.hpp"
#include <iostream>

void id(const Figura &f)
{
    f.id();
}

int main()
{
    Kwadrat k(2);
    id(k);
    // id(static_cast<Figura>(k));

    // Figura *f = new Kwadrat{3};
    // Kwadrat *k2 = dynamic_cast<Kwadrat *>(f);
    // f->id();
    // k2->id();
    BytGeometryczny bg();
   // bg.id();
    
}