//
// Created by paulb on 22.05.2023.
//

#include "repofilemost.h"
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

void RepoFileMost::save()
{
    ofstream f(filename);
    for(int i=0;i< prods.size() ;i++)
    {
        Produs crt = prods[i];
        f<<crt.Tostring()<<endl;
    }
    Produs crt = prods[prods.size()];
    f<<crt.Tostring()<<endl;
    f.close();
}

RepoFileMost::RepoFileMost() {
}

RepoFileMost::RepoFileMost(string fn) {
    filename = fn;
    ifstream f(fn);
    while(!f.eof())
    {
        int cod;
        int pret;
        string nume;
        f>>cod>>nume>>pret;
        Produs p(cod,nume,pret);
        prods.push_back(p);
    }
    f.close();
}

void RepoFileMost::add(Produs &p) {
    Repository::add(p);
    save();
}

bool RepoFileMost::remove(Produs &p) {
    auto it = std::find(prods.begin(), prods.end(), p);
    if(it!=prods.end())
    {
        prods.erase(it);
        save();
        return true;
    }
    return false;
}

RepoFileMost::~RepoFileMost() {
}



