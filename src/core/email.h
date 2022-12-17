#ifndef CORREOS
#define CORREOS
class Email
{
public:
    Email(int id, char *body, char *header);
    int getId();

private:
    int id;
    char *body;
    char *header;
};
#endif