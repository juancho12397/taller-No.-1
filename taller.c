#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void menu();
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
void ejercicio8();
void ejercicio9();
void ejercicio10();
void ejercicio11();

char palabra[15];
char palabra2[15];

int main()
{
    system("color 17");
    menu();

    return 0;
}

void menu(){
    int opcion;
    do{
        system("cls");
        printf("Ejercicio 1\n");
        printf("Ejercicio 2\n");
        printf("Ejercicio 3\n");
        printf("Ejercicio 4\n");
        printf("Ejercicio 5\n");
        printf("Ejercicio 6\n");
        printf("Ejercicio 7\n");
        printf("Ejercicio 8\n");
        printf("Ejercicio 9\n");
        printf("Ejercicio 10\n");
        printf("Ejercicio 11\n");
        printf("Ingrese opcion: ");
        scanf("%d",&opcion);
        switch(opcion){
                case 1:
                system("cls");
                ejercicio1();
                system("pause");
                break;
                case 2:
                system("cls");
                ejercicio2();
                system("pause");
                break;
                case 3:
                system("cls");
                ejercicio3();
                system("pause");
                break;
                case 4:
                system("cls");
                ejercicio4();
                system("pause");
                break;
                case 5:
                system("cls");
                ejercicio5();
                system("pause");
                break;
                case 6:
                system("cls");
                ejercicio6();
                system("pause");
                break;
                case 7:
                system("cls");
                ejercicio7();
                system("pause");
                break;
                case 8:
                system("cls");
                ejercicio8();
                system("pause");
                break;
                case 9:
                system("cls");
                ejercicio9();
                system("pause");
                break;
                case 10:
                system("cls");
                ejercicio10();
                system("pause");
                break;
                case 11:
                system("cls");
                ejercicio11();
                system("pause");
                break;
                case 0: exit(0);
            default: printf("Invalido\n");
        }
    }while(opcion!=0);
}

void ejercicio1(){
}

void ejercicio2(){
    int longitud;
    printf("Digite una cadena: ");
    fflush(stdin);
    fgets(palabra, 15, stdin);

    longitud = strlen(palabra);

    longitud = longitud -1;

       for (int i=longitud; i>=0; i--){
        palabra2[longitud-i] = palabra[i];
    }
        printf("%s\n", palabra2);
}

void ejercicio3(){
    int numero=1, suma=0;
    while(numero<=100){
        suma += numero;
        numero++;
    }
    printf("%d \n", suma);
}

void ejercicio4(){
    int suma = 0;
    for (int i=0; i<=50; i++){
    if(i % 2 == 0){
        suma += i;
      }
    }
    printf("%d\n", suma);
}

void ejercicio5(){
    int suma = 0;
    for(int i=0; i<=50; i++){
        if(i%2==1){
            suma+=i;
        }
    }
    printf("%d\n", suma);
}

void ejercicio6(){
    int resultado, numero;
    printf("Ingrese un numero: ");
    scanf("%d",&numero);
    for(int i=1; i<=12; i++){
        resultado = numero * i;
        printf("%d * %d = %d\n", numero, i, resultado);
    }
}

void ejercicio7(){
    int numero, resultado=1;
    printf("Ingrese un numero: ");
    scanf("%d",&numero);
    for(int i=numero; i>=1; i--){
        resultado = resultado * i;
    }
    printf("%d\n", resultado);
}

void ejercicio8(){
    int w,t,z,valor;
    printf("Ingrese un numero: ");
    scanf("%d",&valor);
    w=0;
    t=1;
    for(int i=1; i<=valor; i++){
        z=w+t;
        printf("%d ", z);
        w=t;
        t=z;
    }
}

void ejercicio9(){
    time_t ahora;
    time(&ahora);

    struct tm *mesActual = localtime(&ahora);

    switch(mesActual->tm_mon+1){
        case 1: printf("Enero\n"); break;
        case 2: printf("Febrero\n"); break;
        case 3: printf("Marzo\n"); break;
        case 4: printf("Abril\n"); break;
        case 5: printf("Mayo\n"); break;
        case 6: printf("Junio\n"); break;
        case 7: printf("Julio\n"); break;
        case 8: printf("Agosto\n"); break;
        case 9: printf("Septiembre\n"); break;
        case 10: printf("Octubre\n"); break;
        case 11: printf("Noviembre\n"); break;
        case 12: printf("Diciembre\n"); break;
    }
}

void ejercicio10(){
    char letra;
    printf("Ingrese una letra: ");
    fflush(stdin);
    scanf("%c",&letra);
    switch(letra){
        case 'a': printf("%d\n", letra); break;
        case 'b': printf("%d\n", letra); break;
        case 'c': printf("%d\n", letra); break;
        case 'd': printf("%d\n", letra); break;
        case 'e': printf("%d\n", letra); break;
        case 'f': printf("%d\n", letra); break;
        case 'g': printf("%d\n", letra); break;
        case 'h': printf("%d\n", letra); break;
        case 'i': printf("%d\n", letra); break;
        case 'j': printf("%d\n", letra); break;
        case 'k': printf("%d\n", letra); break;
        case 'l': printf("%d\n", letra); break;
        case 'm': printf("%d\n", letra); break;
        case 'n': printf("%d\n", letra); break;
        case 'o': printf("%d\n", letra); break;
        case 'p': printf("%d\n", letra); break;
        case 'q': printf("%d\n", letra); break;
        case 'r': printf("%d\n", letra); break;
        case 's': printf("%d\n", letra); break;
        case 't': printf("%d\n", letra); break;
        case 'u': printf("%d\n", letra); break;
        case 'v': printf("%d\n", letra); break;
        case 'w': printf("%d\n", letra); break;
        case 'x': printf("%d\n", letra); break;
        case 'y': printf("%d\n", letra); break;
        case 'z': printf("%d\n", letra); break;
        case 'A': printf("%d\n", letra); break;
        case 'B': printf("%d\n", letra); break;
        case 'C': printf("%d\n", letra); break;
        case 'D': printf("%d\n", letra); break;
        case 'E': printf("%d\n", letra); break;
        case 'F': printf("%d\n", letra); break;
        case 'G': printf("%d\n", letra); break;
        case 'H': printf("%d\n", letra); break;
        case 'I': printf("%d\n", letra); break;
        case 'J': printf("%d\n", letra); break;
        case 'K': printf("%d\n", letra); break;
        case 'L': printf("%d\n", letra); break;
        case 'M': printf("%d\n", letra); break;
        case 'N': printf("%d\n", letra); break;
        case 'O': printf("%d\n", letra); break;
        case 'P': printf("%d\n", letra); break;
        case 'Q': printf("%d\n", letra); break;
        case 'R': printf("%d\n", letra); break;
        case 'S': printf("%d\n", letra); break;
        case 'T': printf("%d\n", letra); break;
        case 'U': printf("%d\n", letra); break;
        case 'V': printf("%d\n", letra); break;
        case 'W': printf("%d\n", letra); break;
        case 'X': printf("%d\n", letra); break;
        case 'Y': printf("%d\n", letra); break;
        case 'Z': printf("%d\n", letra); break;
        default: printf("No valido\n");
    }
}

void ejercicio11(){
    int numero;
    printf("Ingrese un numero para su ascii: ");
    scanf("%d",&numero);
    switch(numero){
        case 0: printf("%d\n", numero+48); break;
        case 1: printf("%d\n", numero+48); break;
        case 2: printf("%d\n", numero+48); break;
        case 3: printf("%d\n", numero+48); break;
        case 4: printf("%d\n", numero+48); break;
        case 5: printf("%d\n", numero+48); break;
        case 6: printf("%d\n", numero+48); break;
        case 7: printf("%d\n", numero+48); break;
        case 8: printf("%d\n", numero+48); break;
        case 9: printf("%d\n", numero+48); break;
    }
}
