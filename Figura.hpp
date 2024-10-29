#include <iostream>

class WizytatorFigurBaza;

class BytGeometryczny
{
    // double a;
public:
    virtual void id() const = 0;
};

class Figura : public BytGeometryczny
{
private:
    double pole;

public:
    double getPole() const { return pole; }
    Figura(double p) : pole{p} {}
    ~Figura() { std::cout << "Niszczona figura!\n"; }
    virtual void id() const { std::cout << "Figura:\t pole: " << pole << "\n"; }
    virtual void akceptuj(WizytatorFigurBaza &v) {}
};

class Kolo : public Figura
{
private:
    double promien;

public:
    Kolo(double r) : Figura(r * r * 3.14), promien(r) {}
    ~Kolo() { std::cout << "Niszczone kolo!\n"; }
    void id() const override { std::cout << "Kolo:\t pole: " << getPole() << ";\t promien: " << promien << "\n"; }
    void akceptuj(WizytatorFigurBaza &v) override { v.wizytuj(*this); }
};

class Kwadrat : public Figura
{
private:
    double bok;

public:
    Kwadrat(double a) : Figura(a * a), bok(a) {}
    ~Kwadrat() { std::cout << "Niszczony kwadrat!\n"; }
    void id() const override { std::cout << "Kawdrat:\t pole: " << getPole() << ";\t dlugosc boku: " << bok << "\n"; }
    void akceptuj(WizytatorFigurBaza &v) override { v.wizytuj(*this); }
};

class WizytatorFigurBaza
{
public:
    void wizytuj(Kolo &k)
    {
        k.id();
    }
    void wizytuj(Kwadrat &k)
    {
        k.id();
    }
};

class WizytatorDrukujacy:WizytatorFigurBaza{
public:
    void wizytuj(Kolo &k)
    {
        k.id();
    }
    void wizytuj(Kwadrat &k)
    {
        k.id();
    }
};