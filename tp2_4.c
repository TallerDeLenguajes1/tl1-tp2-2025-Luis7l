#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define cant_pc 5
typedef struct
{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_CPU;
} Compu;

void listarPc(Compu pcs[], int cantidad);
void mejorVelocidad(Compu pcs[], int cantidad);
void masVieja(Compu pcs[], int cantidad);

int main()
{

    Compu pcs[cant_pc];
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    for (int i = 0; i < cant_pc; i++)
    {
        pcs[i].velocidad = rand() % 3 + 1;
        pcs[i].anio = rand() % 10 + 2015;
        int indice = rand() % 6;
        pcs[i].tipo_CPU = tipos[indice];
        pcs[i].cantidad_nucleos = rand() % 8 + 1;
    }

    listarPc(pcs, cant_pc);
    mejorVelocidad(pcs, cant_pc);
    masVieja(pcs, cant_pc);

    return 0;
}
void listarPc(Compu pcs[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        printf("La pc numero %d cuenta con \n:", i + 1);
        printf("Velocidad:%d\n", pcs[i].velocidad);
        printf("Año:%d\n", pcs[i].anio);
        printf("Tipo de CPU:%d\n", pcs[i].tipo_CPU);
        printf("La cantidad de nucles de la pc es:%d\n", pcs[i].cantidad_nucleos);
    }
}
void mejorVelocidad(Compu pcs[], int cantidad)
{
    int compuMasRapida = 0;
    int mayorVelocidad = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if (pcs[i].velocidad > mayorVelocidad)
        {
            compuMasRapida = i;
        }
    }
    printf("La compu mas rapida es la numero %d", compuMasRapida);
}
void masVieja(Compu pcs[], int cantidad)
{
}
