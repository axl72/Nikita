#include "records.h"
#include "user.h"
#include <iostream>

void gurdar_lista_usuarios()
{
    FILE *usuarios = fopen(USERS_FILE, "a");

    if (usuarios == NULL)
    {
        std::cout << "El archivo " << USERS_FILE << "no pudo ser accedido";
        return;
    }

    User *buffer;

    for (int i = 0; i < lista_usuarios->size(); i++)
    {
        buffer = &(*lista_usuarios)[i];
        int total = fwrite(buffer, sizeof(class User), 1, usuarios);
    }

    fclose(usuarios);
}

void cargar_lista_usuarios()
{
    FILE *usuarios = fopen(USERS_FILE, "r");

    if (usuarios == NULL)
    {

        std::cout << "El archivo " << USERS_FILE << " no pudo ser accedido";
        return;
    }

    User *buffer;

    while (!feof(usuarios))
    {

        fread(buffer, sizeof(class User), 1, usuarios);
        lista_usuarios->push_back(*buffer);
    }

    fclose(usuarios);
}