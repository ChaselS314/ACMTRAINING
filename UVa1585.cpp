#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;


int main(){

    int T;
    cin >> T;
    while(T--){
        string sin;
        cin >> sin;

        int res = 0, cur = 0;
        for(auto i : sin){
            if(i == 'O'){
                cur++;
                res += cur;
            }
            else
                cur = 0;
        }
        cout << res << endl;
    }

    return 0;

}
