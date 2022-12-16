#ifndef CORREOS
#define CORREOS
class Email
{
public:
    Email(int id, char *body, char *header);

private:
    int id;
    char *body;
    char *header;
};
#endif