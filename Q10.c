#include <stdio.h>

int fun_ocor(int k, char* str, int i){

    if(str[i] == '\0') return 0;

    int cont_atual = (str[i] == k) ? 1 : 0;

    return cont_atual + fun_ocor(k, str, i + 1);   
}

int main(){

    int k = '1';
    char *str = "121212";
    int i = 0;

    int ocorr = fun_ocor(k, str, i);

    printf("O número %d tem a ocorrencia de %d vezes.\n", k, ocorr);

    return 0;
}