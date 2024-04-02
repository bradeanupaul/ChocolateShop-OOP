//
// Created by paulb on 22.05.2023.
//

#pragma once
#include "service.h"
#include "exceptiival.h"

class UI
{
private:
    Service serv;
    void addProdus();
    void removeProdus();
    void afisareAll();
    void achizitie();
    Validator vali;
public:
    UI();
    UI(Service&);
    ~UI();
    void printmenu();
};
