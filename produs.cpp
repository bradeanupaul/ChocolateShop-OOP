//
// Created by paulb on 22.05.2023.
//

#include "produs.h"

Produs::Produs()
{
    cod = 0;
    pret = 0;
    nume = "";
}

Produs::Produs(int c, string n, int p)
{
    cod = c;
    nume = n;
    pret = p;

}

Produs::Produs(const Produs &p)
{
    cod = p.cod;
    nume = p.nume;
    pret = p.pret;
}

Produs &Produs::operator=(const Produs &p)
{
    if(this!=&p)
    {
        nume = p.nume;
        cod = p.cod;
        pret = p.pret;
    }
    return *this;
}

bool Produs::operator==(const Produs &p) {
    return ((nume == p.nume) && cod == p.cod && pret == p.pret);
}

int Produs::getCod() {
    return cod;
}

int Produs::getPret() {
    return pret;
}

string Produs::getNume() {
    return nume;
}

string Produs::Tostring() {
    return std::to_string(cod) + " " + nume + " " + std::to_string(pret);
}

