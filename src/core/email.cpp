#include "email.h"

Email::Email(int id, char *body, char *header)
{
    this->id = id;
    this->body = body;
    this->header = header;
}