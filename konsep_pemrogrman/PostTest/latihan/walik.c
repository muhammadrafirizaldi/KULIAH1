#include<stdio.h>
void walik();
int main(){
    char kal[100];
    printf("masukkan kalimat = ");
    walik();
    printf("\n");
}
void walik(){
    char x;

    scanf("%c", &x);
    if(x != '\n'){
        walik ();
    }
    if(x != '\n')
    printf("%c", x);  

}