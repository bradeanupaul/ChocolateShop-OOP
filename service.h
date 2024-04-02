//
// Created by paulb on 22.05.2023.
//

#pragma once
#include "repofile.h"
#include "exceptiival.h"
#include "repository.h"

class Service
{
private:
    //RepositoryFile repo;
    RepositoryFile repo;
    Validator vali;
    int rest = 1000;
public:
    Service();
    Service(RepositoryFile&);
    Service(Service&);
    ~Service();
    void add(int, string, int);
    void remove(int);
    void getAll(Produs[], int&);
    int achizitie(int, int, int&);
};
