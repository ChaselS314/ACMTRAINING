#include <iostream>
#include <cstdio>

using namespace std;


void fuc(int a,int b,int c)
{
    for (int i = 1; i<=c+1; i++)
    {
        if (i == 1)
        {
            cout << a/b;
            if (a>=b)
            {
//                a = a-a/b*b;
                a = a % b;
            }
        }
        else
        {
            cout << a*10/b;
//            a = a*10-a*10/b*b;
            a = a*10 % b;
        }
    }
}

int main()
{
    int a,b,c;

    for(int cnt = 0; ; cnt++){
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0)
            return 0;
        cout << "Case " << cnt+1 << ": ";
        fuc(a, b, c);
        cout << endl;
    }

    return 0;
}
