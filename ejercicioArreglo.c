// Estrada Crespo Karla Julieta
// Almacenar 1 nombre en un array, ingresar las letras del nombre por teclado (consola)
// mensaje: Nombre: nombreIngresado
#include <stdio.h>

int main()
{
    
    int n;
    printf("Ingresa el tamaño de tu arreglo de acuerdo a el numero de letras en tu nombre: ");
    scanf("%d", &n);
    char arreglo[n];
    printf("Ingresa tu nombre:");


    for(int i = 0; i <= n; i++){
        scanf("%c",&arreglo[i]);
        printf("%c", arreglo[i]);
      
    }

    return 0;


}
