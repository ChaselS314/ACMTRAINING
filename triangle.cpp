#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int n;

    cin >> n;
    if(n < 0 || n > 20){
        cout << "number must be between 1 to 20." << endl;
        return 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++) cout << ' ';
        for(int j = 0; j < 2*(n-i)-1; j++) cout << '#';
        for(int j = 0; j < i; j++) cout << ' ';
        cout << endl;
    }

    return 0;
}
