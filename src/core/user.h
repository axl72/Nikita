#ifndef USUARIOS
#define USUARIOS
#include "email.h"

class User
{

public:
    User(int id, char *email, char *password);
    User(char *email, char *password);
    void sendMessage(char *destiny_email, Email *email);
    bool operator==(User &u1);
    char *getEmail();
    char *getPassword();

private:
    int id;
    char *email;
    char *password;
    int *receivedMessages;
    int *sentMessages;
};

#endif