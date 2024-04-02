//
// Created by paulb on 22.05.2023.
//

#pragma once
#include <vector>
#include "produs.h"

using namespace std;

class RepositoryFile
{
private:
    vector<Produs> prods;
    string filename;
    void save();
public:
    RepositoryFile();
    RepositoryFile(string);
    void add(Produs&);
    bool remove(Produs&);
    void getAll(Produs[], int&);
    int getSize();
    Produs getElement(int poz);
    ~RepositoryFile();
};