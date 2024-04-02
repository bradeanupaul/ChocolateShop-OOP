//
// Created by paulb on 22.05.2023.
//

#pragma once
#include <stdexcept>

using namespace std;

class Validator
{
public:
    Validator(){};
    ~Validator(){};
    void val_add(int cod, string nume, int pret)
    {
        if(cod<0)
            throw invalid_argument("Codul nu poate fi negativ!\n");
        else if(nume == "")
            throw invalid_argument("Numele nu poate fi null!\n");
        else if(pret<0)
            throw invalid_argument("Pretul nu poate fi negativ!\n");
    }
    void val_ach(int bani)
    {
        if(bani<0)
            throw invalid_argument("Nu ati introdus banii corect!\n");
    }
};