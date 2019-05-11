#include<iostream>
using namespace std;
int main() {
    int cases,i,k,count=0;
    cin >> cases;
    int *arr = (int*) malloc (cases * sizeof(int));
    for(i=0; i< cases; i++)
        cin >> arr[i];      //array input
    for(i=0; i<cases; i++) {
        k = arr[i];
        for(int j=0; j<cases; j++) {
            if(arr[j] == k) 
                count++;
        }
        if(count == 1)
            break;
        count = 0;
    }
    cout << k;
    free(arr);
    return 0;
}