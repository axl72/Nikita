#include <vector>
#include "../utils/arrayTools.h"
#include "user.h"
#include <string.h>
#include "records.h"

using namespace std;

User::User(int id, char *email, char *password)
{
    this->id = id;
    this->email = email;
    this->password = password;
}

User::User(char *email, char *password)
{
    this->email = email;
    this->password = password;
}

char *User::getEmail()
{
    return this->email;
}

char *User::getPassword()
{
    return this->password;
}

bool User::operator==(User &u)
{
    if (strcmp(this->email, u.email) == 0 && strcmp(this->password, u.password) == 0)
        return true;
    return false;
}

void User::sendMessage(char *destiny_email, Email *email)
{
    for (int i = 0; i < lista_usuarios->size(); i++)
    {
        User aux = (*lista_usuarios)[i];
        if (strcmp(aux.getEmail(), destiny_email) == 0)
        {
            aux.addMessageToReceived(email);
            this->addMessageToSent(email);
            return;
        }
    }
}

void User::addMessageToReceived(Email *email)
{
    this->receivedMessages.push_back(email->getId());
}

void User::addMessageToSent(Email *email)
{
    this->sentMessages.push_back(email->getId());
}

Email *User::readMessages()
{
    Email *mensajes_usuario = (Email *)malloc(sizeof(Email *) * 100);
    int contador = 0;
    for (int i = 0; i < this->receivedMessages.size(); i++)
    {
        for (int j = 0; j < lista_mensajes->size(); j++)
        {
            if (this->receivedMessages[i] == (*lista_mensajes)[j].getId())
            {
                mensajes_usuario[contador] = (*lista_mensajes)[j];
            }
        }
    }

    return mensajes_usuario;
}