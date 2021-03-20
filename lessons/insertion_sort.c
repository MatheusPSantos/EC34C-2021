/**
 * 🇺🇸 Algorithm to make sort of an array by insertion method
 * 🇧🇷 Algoritmo de ordenação utilizando método de inserção
 **/

#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *Arr, int nElements)
{
  int i, key;

  for (int j = 1; j < nElements; j++)
  {
    key = Arr[j];
    i = j - 1;

    while (i >= 0 && Arr[i] >= key)
    {
      Arr[i + 1] = Arr[i];
      i = i - 1;
    }

    Arr[i + 1] = key;
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

  printf("BEFORE - ANTES >>>\n");
  printf("[");
  for (i = 0; i < 10; i++)
  {
    i < 9 ? printf("%d, ", Arr[i]) : printf("%d", Arr[i]);
  }
  printf("]\n");

  insertionSort(Arr, 10);

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