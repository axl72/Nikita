#include "../utils/arrayTools.h"
#include "user.h"
#include <string.h>

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

void User::sendMessage(char *email, Email *message)
{
}