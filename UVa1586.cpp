#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;


int main()
{

    const float Cmm = 12.01;
    const float Hmm = 1.008;
    const float Omm = 16.00;
    const float Nmm = 14.01;

    int T;
    cin >> T;
    while(T--)
    {
        string sin;
        cin >> sin;
        float res = 0;
        float pre = 0;
        for(size_t i = 0; i < sin.length(); i++)
        {
            if(isalpha(sin[i]))
            {
                switch(sin[i])
                {
                case 'C' :
                    pre = Cmm;
                    break;
                case 'H' :
                    pre = Hmm;
                    break;
                case 'O' :
                    pre = Omm;
                    break;
                case 'N' :
                    pre = Nmm;
                    break;
                }
                res += pre;
            }
            else
            {
                int num = 0;
                while(i < sin.length() && isdigit(sin[i]))
                {
                    num *= 10;
                    num += sin[i] - '0';
                    i++;
                }
                res += pre * (num - 1);
                i --;
            }
        }
        printf("%.3f\n", res);
    }
    return 0;

}
