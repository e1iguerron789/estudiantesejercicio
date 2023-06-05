#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int filas=23;
    int columnas=3;
    srand(time(NULL))
  int matriz[filas][columnas];

   for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
             matriz[i][j]= rand()%11;
        }
    }
 
return 0;
}