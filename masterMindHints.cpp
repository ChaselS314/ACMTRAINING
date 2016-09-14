#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;


int main(){

    int n;
    int a[1000], b[1000];
    int alist[10], blist[10];
    for(int cnt = 0; ; cnt++){
        cin >> n;
        if(0 == n) break;
        cout << "Game " << cnt << ":" << endl;
        for(int i = 0; i < 10; i++) alist[i] = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            alist[a[i]]++;
        }
        for(;;){
            bool endflag = true;
            for(int i = 0; i < 10; i++) blist[i] = 0;
            for(int i = 0; i < n; i++){
                cin >> b[i];
                blist[b[i]] ++;
                if(b[i] != 0) endflag = false;
            }
            if(endflag) break;
            int resa = 0, resb = 0;
            for(int i = 0; i < n; i++){
                if(a[i] == b[i]) resa++;
            }
            for(int i = 0; i < 10; i++){
                resb += (alist[i] < blist[i] ? alist[i] : blist[i]);
            }
            cout << "\t(" << resa << "," << resb-resa << ")" << endl;
        }

    }

    return 0;

}
