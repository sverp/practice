#include <iostream>

using namespace std;

int main(){
    int a[4],n=4;

    for(int i=0; i<n;i++){
        cin >> a[i];
    }

    int s = 0;
    int e = n - 1;
    int temp;
    while(s < e){
        temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
    }

    for(int i=0;i < n;i++){
        cout << a[i] << " ";
    }
}
