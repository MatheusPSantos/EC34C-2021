/**
 * 🇺🇸 Algorithm to make sort of an array by selection method
 * 🇧🇷 Algoritmo de ordenação utilizando método de seleção
 **/
#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *Arr, int nElements)
{

  for (int j = 0; j < nElements - 1; j++)
  {
    int m = j;
    for (int i = j + 1; i < nElements; i++)
    {
      if (Arr[i] < Arr[m])
        m = i;
    }
    int temp = Arr[j];
    Arr[j] = Arr[m];
    Arr[m] = temp;
  }
}

int main(int argc, char *argv[])
{
  int *Arr = malloc(sizeof(int) * 10);
  int i = 0;
  for (i = 0; i < 10; i++)
  {
    Arr[i] = 10 - i;
  }
  printf("SELECTIO SORT METHOD | METODO DE ORDENAR POR SELECAO\n");
  printf("BEFORE - ANTES >>>\n");
  printf("[");
  for (i = 0; i < 10; i++)
  {
    i < 9 ? printf("%d, ", Arr[i]) : printf("%d", Arr[i]);
  }
  printf("]\n");

  selectionSort(Arr, 10);

  printf("\nAFTER - DEPOIS >>>\n");
  printf("[");
  for (i = 0; i < 10; i++)
  {
    i < 9 ? printf("%d, ", Arr[i]) : printf("%d", Arr[i]);
  }
  printf("]\n");
  free(Arr);
  return 0;
}