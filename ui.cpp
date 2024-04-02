//
// Created by paulb on 22.05.2023.
//

#include "ui.h"
#include <iostream>
#include <string>

using namespace std;

UI::UI()
{

}

UI::UI(Service &s)
{
    serv = s;
}

UI::~UI() {
}

void UI::addProdus()
{

    int cod,pret;
    string nume;
    cout<<"Introduceti codul produsului:";
    cin>>cod;
    cout<<"Introduceti numele produsului:";
    cin>>nume;
    cout<<"Introduceti pretul produsului:";
    cin>>pret;
    try {
        vali.val_add(cod,nume,pret);
        serv.add(cod, nume, pret);
    }
    catch(const exception& what)
    {
        cout<<what.what();
    }
}

void UI::removeProdus()
{
    int cod;
    cout<<"Introduceti codul produsului:";
    cin>>cod;
    serv.remove(cod);
}

void UI::afisareAll()
{
    Produs rez[15];
    int size=0;
    serv.getAll(rez,size);
    for(int i=0;i<size;i++)
        cout<<rez[i].getCod()<<" "<<rez[i].getNume()<<" "<<rez[i].getPret()<<endl;
}

void UI::achizitie()
{
    int rest =0;
    cout<<"Introduceti codul produsului: ";
    int cod;
    cin>>cod;
    cout<<"Introduceti banii: ";
    int bani;
    cin>>bani;
    try
    {
        vali.val_ach(bani);
        int rez = serv.achizitie(cod, bani, rest);
        if(rez)
            cout<<"rest: "<<rest<<endl;
        else
            cout<<"Nu mai sunt produse solicitate!\n"
                  "Bani insuficienti!"<<endl;
    }
    catch(const exception& what)
    {
        cout<<what.what();
    }
}

void UI::printmenu()
{
    bool value = true;
    while(value)
    {
        cout<<endl;
        cout<<"1.Adaugare produs.\n"
              "2.Sterge produs.\n"
              "3.Afisare produse.\n"
              "4.Achizitie produs.\n"
              "0.Iesire.\n";
        int opt;
        cout<<"Introduceti optiunea: ";
        cin>>opt;
        cout<<endl;
        switch(opt)
        {
            case 1:
                addProdus();
                break;
            case 2:
                removeProdus();
                break;
            case 3:
                afisareAll();
                break;
            case 4:
                achizitie();
                break;
            default:
                value = false;
        }
    }

}

