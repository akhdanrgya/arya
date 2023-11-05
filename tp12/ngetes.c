#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct enkripsi{
        int longkap;
        char kalimat[100];
    };


int main(){
    int count=0;
    char tampung[100];
    struct enkripsi e1;
    int banyak;
    scanf("%d", &banyak);
    for(int i=0;i<banyak;i++){
        scanf("%d", &e1.longkap);
        scanf("%s", &e1.kalimat);

        for(int j=0;j<strlen(e1.kalimat);i++){
            if(!isspace(e1.kalimat[j])){
                tampung[count] = e1.kalimat[j];
                count++;
            }
        }
    }

    printf("%s", tampung);

    return 0;
}

