#include "email.h"

class User
{
public:
    User(int id, char *email, char *password);
    void sendMessage(char *destiny_email, Email *email);

private:
    int id;
    char *email;
    char *password;
    int *receivedMessages;
    int *sentMessages;
};
