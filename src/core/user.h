#ifndef USUARIOS
#define USUARIOS
#include "email.h"
#include <vector>

using namespace std;
class User
{

public:
    User(int id, char *email, char *password);
    User(char *email, char *password);
    void sendMessage(char *destiny_email, Email *email);
    bool operator==(User &u1);
    char *getEmail();
    char *getPassword();
    void addMessageToReceived(Email *email);
    void addMessageToSent(Email *email);
    Email *readMessages();

private:
    int id;
    char *email;
    char *password;
    vector<int> receivedMessages;
    vector<int> sentMessages;
};

#endif