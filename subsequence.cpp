#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    double n, m;

    for(int cnt = 0; ; cnt++){
        cin >> n >> m;
        if(n == m && n == 0) break;
        double sum = 0;

        for(; n <= m; n++){
            sum += 1/(n*n);
        }
        cout << "Case " << cnt+1 << ": ";
        printf("%.5f\n", sum);
    }

    return 0;
}
