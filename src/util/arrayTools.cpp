int *get_array(int size){
    int *array = new int[size];

    for(int i=0; i<size; i++)
        array[i] = -1;
    return array;
}