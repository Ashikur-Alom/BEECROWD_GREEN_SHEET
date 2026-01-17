#include <stdio.h>
#include <string.h>

int main() {
char ch1[100],ch2[100], ch3[100];
scanf("%s %s %s", &ch1, &ch2, &ch3);

if(strcmp(ch1, "vertebrado")==0) {
    if(strcmp(ch2, "ave")==0) {
        if(strcmp(ch3, "carnivoro")==0) printf("aguia\n");
        else if(strcmp(ch3, "onivoro")==0) printf("pomba\n");
        else return 1;
    }else if(strcmp(ch2, "mamifero")==0) {
        if(strcmp(ch3, "onivoro")==0) printf("homem\n");
        else if(strcmp(ch3, "herbivoro")==0) printf("vaca\n");
        else return 1;
    }else {
        return 1;
    }
}else if(strcmp(ch1, "invertebrado")==0) {
    if(strcmp(ch2, "inseto")==0) {
        if(strcmp(ch3, "hematofago")==0) printf("pulga\n");
        else if(strcmp(ch3, "herbivoro")==0) printf("lagarta\n");
        else return 1;
    }else if(strcmp(ch2, "anelideo")==0) {
        if(strcmp(ch3, "hematofago")==0) printf("sanguessuga\n");
        else if(strcmp(ch3, "onivoro")==0) printf("minhoca\n");
        else return 1;
    }else {
        return 1;
    }
}else {
    return 1;
}


    return 0;
}
