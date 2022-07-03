//Estrada Crespo Karla Julieta
/*Menu:
    1. Triangulo
    2. Cuadrado
    3. Linea
    4. Salir
*/

#include<stdio.h>

int main()
{
    int opcion;

    
    do
    {
        printf("Menu: \n");
        printf("1. Triangulo\n");
        printf("2. Cuadrado\n");
        printf("3. Linea\n");
        printf("4. Salir\n");
        printf("Escoge una opcion: \n");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("  *  \n");
                printf(" *** \n");
                printf("*****\n");
            break;

            case 2:
                printf("********\n");
                printf("*      *\n");
                printf("*      *\n");
                printf("********\n");

            break;

            case 3:
                printf("********\n");
            break;

            default:
                return 0;
            break;

        }
    }while(opcion !=4);

    return 0;
}