#include <iostream>
#include <vector>
#include "core/user.h"
#include "utils/input.h"
#include <string.h>
#include "core/records.h"

using namespace std;

int user_menu(User *usuario_conectado)
{
    do
    {
        cout << "1. Enviar mensaje" << endl;
        cout << "2. Leer mensajes" << endl;
        cout << "3. Cerrar sesion" << endl;

        int op = read_integer();

        switch (op)
        {
        case 1:
            break;
        }
    } while (true);
}

bool register_menu(vector<User> *lista_usuarios)
{
    do
    {
        cout << "\t\tFORMUARIO DE REGISTRO\n";
        cout << "Ingrese su correo: ";
        char *email = read_string();
        cout << endl;
        cout << "Ingrese su contraseña: ";
        char *password = read_password();
        cout << endl;
        cout << "Verifique su contraseña: ";
        char *check_password = read_password();
        cout << endl;

        if (strcmp(password, check_password) == 0)
        {
            User *nuevo_usuario = new User(lista_usuarios->size() + 1, email, password);
            lista_usuarios->push_back(*nuevo_usuario);
            gurdar_lista_usuarios();
            cout << "Usuario registrado exitosamente" << endl;
            system("pause");
            return true;
        }

        return false;

    } while (true);
}

User *login(vector<User> *lista_usuarios)
{
    do
    {

        cout << "\t\tINICIO DE SESION\n";
        cout << "Correo: ";
        char *email = read_string();
        cout << endl;
        cout << "password: ";
        char *password = read_password();
        cout << endl;

        User *aux = new User(email, password);

        for (int i = 0; i < lista_usuarios->size(); i++)
        {

            User actual = (*lista_usuarios)[i];

            if ((*lista_usuarios)[i] == *aux)
            {

                cout << "Inicion de sesion exitoso";
                return &(*lista_usuarios)[i];
            }
        }

        cout << "Error en las credenciales" << endl;

    } while (true);
}

int main_menu()
{
    int op;
    do
    {
        cout << "\t\tMENU PRINCIPAL" << endl;
        cout << "1. Iniciar Sesion" << endl;
        cout << "2. Registrarse" << endl;
        cout << "3. Salir" << endl;
        cout << "4. Ver lista de usuarios" << endl;
        cout << "Ingrese una opcion: ";
        op = read_integer();

        if (op <= 5 && op >= 1)
        {
            return op;
        }

    } while (true);
}

int main()
{

    do
    {
        system("cls");
        int op = main_menu();
        system("cls");

        switch (op)
        {
        case 1:
            usuario_conectado = login(lista_usuarios);

            if (usuario_conectado == NULL)
            {
                cout << "Credenciales incorrectas";
                continue;
            }

            system("cls");
            user_menu(usuario_conectado);

            break;

        case 2:
            register_menu(lista_usuarios);
            break;

        case 3:
            break;

        case 4:
            cout << "Size of vector: " << lista_usuarios->size();
            for (int i = 0; i < lista_usuarios->size(); i++)
            {

                cout << (*lista_usuarios)[i].getEmail() << endl;
                cout << (*lista_usuarios)[i].getPassword() << endl;
            }

            break;
        }

        system("pause");

    } while (true);

    return 0;
}