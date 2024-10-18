#include <stdio.h>
#include <string.h>

int dia_a_value(char *mes) {
    if (strcmp(mes, "enero") == 0) {
        return 13;
    } else if( strcmp(mes, "febrero") == 0) {
        return 14;
    } else if(strcmp(mes, "marzo") == 0) {
        return 3;
    } else if(strcmp(mes, "abril") == 0) {
        return 4;
    } else if(strcmp(mes, "mayo") == 0) {
        return 5;
    } else if(strcmp(mes, "junio") == 0) {
        return 6;
    } else if(strcmp(mes, "julio") == 0) {
        return 7;
    } else if(strcmp(mes, "agosto") == 0) {
        return 8;
    } else if(strcmp(mes, "septiembre") == 0) {
        return 9;
    } else if(strcmp(mes, "octubre") == 0) {
        return 10;
    } else if(strcmp(mes, "noviembre") == 0) {
        return 11;
    } else if(strcmp(mes, "diciembre") == 0) {
        return 12;
    }
}


int dia_nacimiento(int dia, char *mes, int año) {

    int intMes = dia_a_value(mes);

    int parte_a = dia + ((13 * (intMes + 1))/5);
    int parte_b = (año + (año/4) + (año/400));
    int parte_c = ((parte_a + parte_b) - año/100) % 7;

    if (intMes == 13 || intMes == 14) {
        parte_c -= 1;
    }

    return parte_c;
}

char* interpretar(int numero) {
    if(numero == 0) {
        return "sabado";
    } else if (numero == 1){
        return "domingo";
    } else if (numero == 2){
        return "lunes";
    } else if (numero == 3){
        return "martes";
    } else if (numero == 4){
        return "miercoles";
    } else if (numero == 5){
        return "jueves";
    } else if (numero == 6){
        return "viernes";
    }

}

int main() {

    printf("Ingrese una fecha valida: \n");
    printf("Tenga en cuenta el siguiente formato: \ndia-mes-a%co\n", 164);

    int dia;
    printf("Ingresa el dia: \n");
    scanf("%d", &dia);

    char mes[10];
    printf("Ingresa el mes: \nejemplo: enero, febrero, ...\n");
    scanf("%s", mes);

    int año;
    printf("Ingresa el a%co: \n", 164);
    scanf("%d", &año);

    int resultado = dia_nacimiento(dia, mes, año);

    char *fech = interpretar(resultado);

    printf("------------Resultado-------------\n");

    printf("%s\n", fech);
    return 0;



}


