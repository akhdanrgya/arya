#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int longkap;
    char kalimat[100];
    char tampung[100];
    char keluaran[100];
    int count=0;
    char simpan[100];
    int hitung=0;
    char temp;

    scanf("%d", &longkap);
    scanf("%c", &temp);
    gets(kalimat);

    for(int i=0;i<strlen(kalimat);i++){
        if(!isspace(kalimat[i])){
            tampung[count] = kalimat[i];
            count++;
        }
    }

    tampung[count]='\0';

    count=0;

    printf("%s\n", tampung);
    printf("%d\n", strlen(tampung));

    for(int j=0;j<strlen(tampung);j+=longkap){
        if(j+longkap<=strlen(tampung)){
            if(j<=longkap){
                simpan[count] = tampung[j];
                count++;
            }
            tampung[j] = tampung[j+longkap];
        }
        else{
            tampung[j] = simpan[hitung];
        }

    }

    printf("%s", tampung);
}