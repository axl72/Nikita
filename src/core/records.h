#include <iostream>
#include <user.h>
#include <vector>

using namespace std;

User *usuario_conectado = NULL;
vector<User> *lista_usuarios = new vector<User>();

void gurdar_lista_usuarios();
void cargar_lista_usuarios();