double avg(int *arr, int size) {
    int sum = 0;
    int i = 0;
    for (; i < size; i++) {
        sum += *(arr + i);
    }
    return 1.0 * sum / size;
}

void copy_array(int *arr1, int *arr2, int size) {
    int i = 0;
    for (i; i < size; i++) {
        *(arr2 + i) = *(arr1 + i);
    }
}

int strlen(char *string) {
    int length = 0;
    int i = 0;
    while (string[i]){
        length++;
        i++;
    }
    return length;
}
