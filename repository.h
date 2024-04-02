//
// Created by paulb on 22.05.2023.
//

#pragma once
#include "produs.h"
#include <vector>

class Repository
{
protected:
    vector<Produs> prods;
public:
    Repository();
    Repository(vector<Produs>);
    Repository(const Repository&);
    void add(const Produs&);
    int remove(const Produs&);
    void getAll(Produs[], int&);
    int getSize();
    Produs getElement(int poz);
    ~Repository();
};
