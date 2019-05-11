#include<iostream>
using namespace  std;
int main() {
    int value, size, index;
    cin >> value;
    cin >> size;
    int *a = (int*) malloc (size * sizeof(int));
    for(index = 0; index < size; index++)
        cin >> a[index];
    for(index = 0; index < size; index++) {
        if(a[index] == value) {
            cout << index;
            break;
        }
    }
    free(a);
    return 0;
}