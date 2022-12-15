#include "array.h"

template <class T>
void Array<T>::add(T dato)
{
}

template <class T>
bool Array<T>::check_space()
{
    return Array::current_index < Array::size;
}