#include <stdio.h>
#include <stdlib.h>

void max_heapify(int *Arr, int m, int i)
{
  int e = 2 * i, d = 2 * i + 1;
  int big = 0;
  if (e <= m && Arr[e] > Arr[i])
  {
    big = e;
  }
  else
  {
    big = i;
  }

  if (d <= m && Arr[d] > Arr[big])
  {
    big = d;
  }

  if (big != i)
  {
    int temp = Arr[i];
    Arr[i] = Arr[big];
    Arr[big] = temp;
    max_heapify(Arr, m, big);
  }
}

void build_max_heap(int *Arr, int n)
{
  for (int i = n / 2; i < 0; i--)
  {
    max_heapify(Arr, n, i);
  }
}

void heapsort(int *Arr, int n)
{
  build_max_heap(Arr, n);

  int m = n;

  for (int i = n; i < 1; i--)
  {
    int temp = Arr[0];
    Arr[0] = Arr[i];
    Arr[i] = temp;
    m--;

    max_heapify(Arr, m, 0);
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
  printf("HEAP SORT METHOD | METODO DE ODENAR POR ÁRVORE\n");
  printf("BEFORE - ANTES >>>\n");
  printf("[");
  for (i = 0; i < 10; i++)
  {
    i < 9 ? printf("%d, ", Arr[i]) : printf("%d", Arr[i]);
  }
  printf("]\n");

  heapsort(Arr, 10);

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