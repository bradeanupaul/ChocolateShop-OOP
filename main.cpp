//
// Created by paulb on 22.05.2023.
//

#include "repofile.h"
#include "repository.h"
#include "repofilemost.h"
#include "service.h"
#include "ui.h"
#include "teste.h"

int main() {
    test_service();
    test_repo();
    test_repo_file();
    RepositoryFile repof("C:\\Users\\paulb\\Desktop\\OOP Ciocolata\\produse.txt");
    Repository repo;
    RepoFileMost repofm("C:\\Users\\paulb\\Desktop\\OOP Ciocolata\\produse.txt");
    cout<<"merge";
    Service serv(repof);
    UI ui(serv);
    ui.printmenu();
    return 0;
}
