#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);

    int a, b, c;
    int cnt = 0;
    while(3 == scanf("%d%d%d", &a, &b, &c)){
        cnt++;
        for(int i = 1; ; i++){
            if(3*i+a < 10) continue;
            if(3*i+a > 100){
                cout << "Case " << cnt << ": " << "No answer" << endl;
                break;
            }
            int tmp = 3*i+a;
            if(tmp%5 == b && tmp%7 == c){
                cout << "Case " << cnt << ": " << tmp << endl;
                break;
            }
        }
    }

    return 0;
}
