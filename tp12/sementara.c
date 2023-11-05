#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int longkap;
    char tampung[100];
    char keluaran[100];
    int count=0;
    char simpan[100];
    char temp;

    scanf("%d", &longkap);
    scanf("%c", &temp);

    char kalimat[longkap][100];
    for(int x=0;x<longkap;x++){
        gets(kalimat[x]);
        
        for(int i=0;i<strlen(kalimat);i++){
            if(!isspace(kalimat[x][i])){
                tampung[count] = kalimat[i];
                count++;
            }
        }
    }


    tampung[count]='\0';

    count=0;

    printf("%s\n", tampung);
    printf("%d\n", strlen(tampung));

    int sekip=0;
    int hitung=0;
    for(int j=0;j<strlen(tampung);j++){

        if(sekip>strlen(tampung)){
            sekip=sekip-strlen(tampung);
        }

        keluaran[j] = tampung[sekip];
        sekip+=longkap;

    }

    printf("%s", keluaran);
}