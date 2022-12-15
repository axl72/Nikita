template <class T>
class Array
{
public:
    Array(int size);

    void add(T dato);
    void remove(int index);
    void delete_all_items();

private:
    bool check_space();
    int size;
    int current_index;
    T *array;
};
