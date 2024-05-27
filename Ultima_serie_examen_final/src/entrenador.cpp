#include "entrenador.h"
#include <iostream>

using namespace std;

entrenador::entrenador(string id, string nom1, string nom2, string ape1, string ape2, string fechan)
{
    this->id = id;
    this->nom1 = nom1;
    this->nom2 = nom2;
    this->ape1 = ape1;
    this->ape2 = ape2;
    this->fechan = fechan;
}

string entrenador::setid(string id)
{
    this->id = id;
    return id;
}

string entrenador::getid()
{
    return id;
}

string entrenador::setnom1(string nom1)
{
    this->nom1 = nom1;
    return nom1;
}

string entrenador::getnom1()
{
    return nom1;
}

string entrenador::setnom2(string nom2)
{
    this->nom2 = nom2;
    return nom2;
}

string entrenador::getnom2()
{
    return nom2;
}

string entrenador::setape1(string ape1)
{
    this->ape1 = ape1;
    return ape1;
}

string entrenador::getape1()
{
    return ape1;
}

string entrenador::setape2(string ape2)
{
    this->ape2 = ape2;
    return ape2;
}

string entrenador::getape2()
{
    return ape2;
}

string entrenador::setfechan(string fechan)
{
    this->fechan = fechan;
    return fechan;
}

string entrenador::getfechan()
{
    return fechan;
}

void entrenador::menu()
{
    system("cls");
    int opc;

    do
    {
        cout << "\n";
        cout << "\t+------------------------------------------+" << endl;
        cout << "\t|\t\t            \t\t   |" << endl;
        cout << "\t|\t  Catalogo de Entrenadores\t   |" << endl;
        cout << "\t|\t\t            \t\t   |" << endl;
        cout << "\t+------------------------------------------+" << endl;
        cout << "\t|\t\t            \t\t   |" << endl;
        cout << "\t|\t\t1) Insertar\t\t   |" << endl;
        cout << "\t|\t\t            \t\t   |" << endl;
        cout << "\t|\t\t2) Desplegar \t\t   |" << endl;
        cout << "\t|\t\t            \t\t   |" << endl;
        cout << "\t|\t\t3) Modificar \t\t   |" << endl;
        cout << "\t|\t\t            \t\t   |" << endl;
        cout << "\t|\t\t4) Borrar\t\t   |" << endl;
        cout << "\t|\t\t            \t\t   |" << endl;
        cout << "\t|\t    5) Salir del programa\t   |" << endl;
        cout << "\t|\t\t            \t\t   |" << endl;
        cout << "\t|\t    6) Regresar al menu\t\t   |" << endl;
        cout << "\t|\t\t            \t\t   |" << endl;
        cout << "\t+------------------------------------------+" << endl;
        cout << "\n" << endl;
        cout << "\t\tIngrese el numero de opcion: ";
        cin >> opc;

        switch(opc)
        {
        case 1:
            system("cls");
            insertar();
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            desplegar();
            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");
            modificar();
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");
            borrar();
            system("pause");
            system("cls");
            break;
        case 5:
            exit(0);
            break;
        case 6:
            system("cls");
            break;
        default:
            cout << "\n\t Opcion invalida...Por favor prueba otra vez..";
            cin.ignore();
            cin.get();
            system("cls");
        }
    } while (opc!=6);
}

void entrenador::insertar()
{

}

void entrenador::desplegar()
{

}

void entrenador::modificar()
{

}

void entrenador::borrar()
{

}
