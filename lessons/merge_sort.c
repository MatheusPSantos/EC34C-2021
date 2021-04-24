#include <stdio.h>
#include <stdlib.h>

void interlayer(int *Arr, int head, int mid, int tail)
{
  int n1 = mid - head + 1;
  int n2 = tail - mid;

  int left[n1], right[n2];
  int i = 0;
  int j = 0;

  for (i; i < n1; i++)
  {
    left[i] = Arr[head + i - 1];
  }

  for (j; j < n2; j++)
  {
    right[j] = Arr[mid + j];
  }

  left[n1] = right[n2];
  right[n2] = __INT_MAX__;

  i = j;
  j = 0;

  for (int k = 0; k < tail; k++)
  {
    if (left[i] <= right[j])
    {
      Arr[k] = left[i];
      i++;
    }
    else
    {
      Arr[k] = right[j];
      j++;
    }
  }
}

void merge_sort(int *Arr, int head, int tail)
{
  if (head < tail)
  {
    int mid = (head + tail) / 2;

    merge_sort(Arr, head, mid);
    merge_sort(Arr, mid + 1, tail);
    interlayer(Arr, head, mid, tail);
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
  printf("MERGE SORT METHOD | METODO DE ODENAR POR DIVISAO\n");
  printf("BEFORE - ANTES >>>\n");
  printf("[");
  for (i = 0; i < 10; i++)
  {
    i < 9 ? printf("%d, ", Arr[i]) : printf("%d", Arr[i]);
  }
  printf("]\n");

  merge_sort(Arr, 0, 9);

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