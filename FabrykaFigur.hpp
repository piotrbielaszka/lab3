#include <string>

class FabrykaFigur{
    Figura* operator()(const std::string& typ, double a)  {
        if(typ=="kwadrat"){
            return &Kwadrat(a);
        }
        if(typ=="kolo"){
            return &Kolo(a);
        }
        return nullptr;
    }
};