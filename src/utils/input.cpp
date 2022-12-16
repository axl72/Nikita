#include "input.h"
#include <iostream>
#include <conio.h>

using namespace std;

char *read_string()
{
    char c;
    int index = 0;
    char *string = new char[1000];
    do
    {
        c = getch();

        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9' || c == '_' || c == '-' || c == '@' || c == '.')
        {
            cout << c;
            string[index] = c;
            index++;
        }

        else if (c == 8)
        {
            cout << "\b \b";
            string[index] = 0;
            index--;
        }

        else if (c == 13)
        {
            string[index] = '\0';
            return string;
        }

    } while (true);
}

char *read_password()
{
    char *buffer = new char[100];
    char c;
    int contador = 0;
    do
    {
        c = getch();
        if (c >= '0' && c <= '9')
        {
            cout << '*';
            buffer[contador] = c;
            contador++;
        }
        else if (c == 8 && contador > 0)
        {
            cout << "\b \b";
            buffer[contador] = c;
            contador++;
        }
        else if (c == 13 && contador > 0)
        {
            buffer[contador] = '\0';
            return buffer;
        }
    } while (true);
}

int read_integer()
{

    char buffer[10];
    char c;
    int contador = 0;
    do
    {
        c = getch();
        if (c >= '0' && c <= '9' && contador < 99)
        {
            cout << c;
            buffer[contador] = c;
            contador++;
        }

        else if (c == 8 && contador > 0)
        {
            cout << "\b \b";
            buffer[contador] = 0;
            contador--;
        }

        else if (c == 13 && contador > 0)
        {
            buffer[contador] = '\0';
            int result = atoi(buffer);
            return result;
        }
    } while (true);
}