//
// Created by paulb on 22.05.2023.
//

#pragma once
#include "repository.h"
#include "produs.h"
#include <string>

using namespace std;

class RepoFileMost: public Repository
{
private:
    string filename;
public:
    void save();
    RepoFileMost();
    RepoFileMost(string);
    void add(Produs&);
    bool remove(Produs&);
    ~RepoFileMost();
};
