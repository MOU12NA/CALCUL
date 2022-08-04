#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operation;
    float n1,n2,res;
    printf("enter un operateur: \n ");
    scanf(" %c", &operation);
    printf("enter premier nombre : \n");
    scanf(" %f",&n1);
    printf("enter dexieme nombre: \n ");
    scanf(" %f",&n2);
    switch (operation){
    case '+' : res = n1+n2;
    break;
    case '-': res = n1-n2;
    break;
    case '/': if (n2!=0) {
        res = n1/n2; }
        else {
            printf("le division est imposible");}
    break;
    case '*': res = n1*n2;
    break;
    case 'q':
        printf("le programme est quiter");
        break;
    default: printf("cette operation n'exist pas ");
    break;

            }
            printf("resultat= %f",res);
        return 0;

}

