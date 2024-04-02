//
// Created by paulb on 22.05.2023.
//

#include "teste.h"
#include "repository.h"
#include "service.h"
#include "repofile.h"
#include "produs.h"
#include <cassert>

void test_repo()
{
    Repository r;
    assert(r.getSize() == 0);
    Produs p(1,"mars", 5);
    r.add(p);
    assert(r.getSize() == 1);
    Produs p1 = r.getElement(0);
    assert(p == p1);
    Produs p2(2,"twix",6);
    Produs p3(3,"snickers",4);
    r.add(p2);
    r.add(p3);
    assert(r.getSize() == 3);
    assert(r.remove(p2) == 1);
    assert(r.getSize() == 2);
}

void test_service()
{
    Service s;
    s.add(1,"mars",10);
    Produs p(1,"mars",10);
    s.add(2,"fagaras",2);
    s.add(3,"snickers",4);
    s.add(4,"grisine",6);
    Produs p1(3,"snickers",4);
    s.remove(2);
}

void test_repo_file()
{
    //RepositoryFile repof("C:\\Users\\paulb\\Desktop\\OOP Ciocolata\\teste.txt");
}