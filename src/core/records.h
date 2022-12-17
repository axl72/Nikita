#ifndef RECORDS
#define RECORDS
#include <iostream>
#include "user.h"
#include <vector>
#define USERS_FILE "C:\\Users\\axell\\Desktop\\Proyecto-Hinojosa\\src\\data\\usuarios.data"
using namespace std;

User *usuario_conectado = NULL;
vector<User> *lista_usuarios = new vector<User>();
vector<Email> *lista_mensajes = new vector<Email>();

void gurdar_lista_usuarios();
void cargar_lista_usuarios();
#endif