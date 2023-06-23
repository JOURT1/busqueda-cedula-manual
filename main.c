#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int opcion;
    int n[5];
    int c[5];
    int c2;
    char nom[5][10];

    while (1)
    {
        printf("Ingrese 1 para agregar contactos o 2 para bsucar un contacto por la cedula\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            for (int i = 0; i < 5; i++)
            {
                printf("Ingrese el %d nombre\n", i + 1);
                scanf("%s", &nom[i]);

                printf("Ingrese la %d cedula\n", i + 1);
                scanf("%d", &c[i]);

                printf("Ingrese el %d telefono\n", i + 1);
                scanf("%d", &n[i]);
                system("cls");
            }
            break;
        case 2:
            printf("Ingrese la cedula");
            scanf("%d", &c2);

            for (int i = 0; i < 5; i++)
            {
                if (c2 == c[i])
                {
                    printf("Nombre: %s\n", nom[i]);
                    printf("Cedula: %d\n", c[i]);
                    printf("Telefono: %d\n", n[i]);
                    break;
                }
            }
            return 0;
            break;
        default:
            break;
        }
    }
}