// #include "Figura.hpp"

#define dlugosc_wetk 10

class WektorFigur
{
private:
    Figura *f[dlugosc_wetk];
    unsigned int ilosc_elementow;

public:
    ~WektorFigur()
    {
        for (int i = 0; i < ilosc_elementow; i++)
        {
            delete f[i];
        }
    }

    Figura *operator[](unsigned int n)
    {
        if (n > ilosc_elementow)
            return nullptr;
        return f[n];
    }

    void push(Figura *fig)
    {
        if (ilosc_elementow + 1 < dlugosc_wetk)
        {
            ilosc_elementow++;
            f[ilosc_elementow - 1] = fig;
        }
    }

    void pop()
    {
        delete f[ilosc_elementow - 1];
        ilosc_elementow--;
    }

    void idWszystkie()
    {
        for (int i = 0; i < ilosc_elementow; i++)
        {
            f[i]->id();
        }
    }

    void wizytujWszystkie(WizytatorFigurBaza &v)
    {
        for (int i = 0; i < ilosc_elementow; i++)
        {
            f[i]->akceptuj(v);
        }
    }
};