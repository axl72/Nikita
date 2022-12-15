#include "util/arrayTools.h"

class User
{
public:
    User(int id, char *email, char *password)
    {
        this->id = id;
        this->email = email;
        this->password = password;
        this->receivedMessages = get_array(1000);
        this->sentMessages = get_array(1000);
    }

private:
    int id;
    char *email;
    char *password;
    int *receivedMessages;
    int *sentMessages;
};
