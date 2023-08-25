#include <Stdio.h>
#include <stdbool.h>
#include <stdlib.h>
/*
En C el tipo de datos bool no es un tipo integrado
 es una macro definida en el archivo de encabezadp stdbool.h
*/
int main() {
/*
bool x = true;
bool y = false;
system("cls");
printf("%d \n", x);
printf("%d \n", y);
*/
int i = 11;
int j = 12;
char c = 'A';
float n = 40.791512;
system("cls");
printf("%x %3d %c %.3f",i,j,c,n); 
    return 0;
}
