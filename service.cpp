//
// Created by paulb on 22.05.2023.
//

#include "service.h"

Service::Service()
{
}

Service::Service(RepositoryFile &r)
{
    repo = r;
}

Service::Service(Service &serv)
{
    repo = serv.repo;
}

Service::~Service()
{

}

void Service::add(int cod, string nume, int pret)
{
    Produs p(cod,nume,pret);
    repo.add(p);
}

void Service::remove(int cod)
{
    for(int i=0;i<repo.getSize();i++)
    {
        Produs p = repo.getElement(i);
        if(p.getCod() == cod)
        {
            Produs p1(cod, p.getNume(), p.getPret());
            repo.remove(p1);
        }
    }
}

int Service::achizitie(int cod, int bani, int &rest)
{
    Produs toate[15];
    bool ok = true;
    int size;
    repo.getAll(toate, size);
    for(int i=0;i<size and ok;i++)
        if(cod == toate[i].getCod())
        {
            repo.remove(toate[i]);
            ok = false;
            rest = bani-toate[i].getPret();
            if(rest<0)
                return 0;
        }
    rest = abs(rest);
    if(!ok)
        return 1;
    return 0;
}

void Service::getAll(Produs *byp, int &size)
{
    repo.getAll(byp, size);
}


