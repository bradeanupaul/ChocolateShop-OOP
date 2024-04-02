//
// Created by paulb on 22.05.2023.
//

#pragma once
#include <string>
#include <iostream>

using namespace std;

class Produs
{
private:
    int cod;
    string nume;
    int pret;
public:
    Produs();
    Produs(int, string, int);
    Produs(const Produs&);
    Produs& operator=(const Produs&);
    bool operator==(const Produs&);
    int getCod();
    int getPret();
    string getNume();
    string Tostring();
};