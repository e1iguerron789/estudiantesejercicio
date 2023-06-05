#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void mostrar(int matriz[23][3]) {
    printf("Estudiantes:\n");
    for (int i = 0; i < 23;i++){
        printf("%d  ",i);
        for (int j = 0; j < 3;j++){
           
            printf("%d    ",matriz[i][j]);
        }
        
         printf("\n");
    }
}

int main() {
    
    

    srand(time(NULL)); 

    int matriz[23][3];

    for (int i = 0; i < 23; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand()%11;
        }
    }
   
    mostrar(matriz);

    return 0;
}