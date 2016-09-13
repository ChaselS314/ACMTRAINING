#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int mirror(int ch){
    char samestr[] = "AHIMOTUVWXY18";
    char diffstr[] = "EJLSZ235";
    char diffstr_mirr[] = "3LJ25SEZ";

    for(int i = 0; samestr[i]; i++){
        if(samestr[i] == ch) return ch;
    }
    for(int i = 0; diffstr[i]; i++){
        if(diffstr[i] == ch) return diffstr_mirr[i];
    }
    return -1;
}

int main(){

    char res[][50] = {
        " -- is not a palindrome.",
        " -- is a regular palindrome.",
        " -- is a mirrored string.",
        " -- is a mirrored palindrome."
    };

    char str[21];
    bool first = true;

    while(scanf("%s", str) == 1){
        int i = 0, j = strlen(str)-1;
        bool ispa = true, ismi = true;
        for(; str[i]; i++, j--){
            if(str[i] != str[j]) ispa = false;
            if(mirror(str[i]) == -1 || mirror(str[i]) != str[j]) ismi = false;
        }
//        if(first) printf("\n");
//        else first = !first;
        printf("%s", str);
        if(!ispa && !ismi) printf("%s", res[0]);
        if(ispa && !ismi) printf("%s", res[1]);
        if(!ispa && ismi) printf("%s", res[2]);
        if(ispa && ismi) printf("%s", res[3]);
        printf("\n\n");     // 为什么要输出两个换行符
    }

    return 0;

}
