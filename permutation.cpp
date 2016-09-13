#include <iostream>
#include <cstdio>

using namespace std;

void oper_add(int num, int &sum){
    while(num){
        sum += (num % 10);
        num = num / 10;
    }
}

void oper_mlp(int num, int &product){
    while(num){
        product *= (num % 10);
        num = num/10;
    }
}

int main(){

    for(int i = 123; i <= 987/3; i++){

        int sum = 0;
        int product = 1;
        oper_add(i, sum);
        oper_mlp(i, product);
        oper_add(2*i, sum);
        oper_mlp(2*i, product);
        oper_add(3*i, sum);
        oper_mlp(3*i, product);

        if(sum == 45 && product == 2*3*4*5*6*7*8*9)
            cout << i << ' ' << 2*i << ' ' << 3*i << endl;
    }

    return 0;

}
