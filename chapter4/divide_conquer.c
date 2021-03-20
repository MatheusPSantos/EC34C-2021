// this is the implementation of the first algorithm to resolve the maximum sum segment problem
// este é a implementação do primeiro algoritmo para estudo do problema do segmento de soma máxim

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int height(int Arr[], int half, int size)
{
  if (half == size)
  {
    return Arr[half];
  }
  else
  {
    int q = floor((half + size) / 2);
    int x1 = height(Arr, half, q);
    int x2 = height(Arr, half + 1, size);
    int sum = Arr[q];
    int y1 = sum;

    for (int i = (q - 1); i > half; i++)
    {
      sum = Arr[i] + sum;
      if (sum > y1)
        y1 = sum;
    }

    sum = Arr[q + 1];
    int y2 = sum;

    for (int j = q + 2; j < size; j++)
    {
      sum = sum + Arr[j];
      if (sum > y2)
        y2 = sum;
    }

    //x = max(x1, y1 + y2, x2)

    // return x;
  }
}

int main(int argc, char *argv[])
{
  printf("\n--------------------------------\n");
  printf("Maximum sum segment problem...\n");
  printf("Problema do segmento de soma máximo...");

  int arrayByArgs[argc - 1];

  for (int i = 0; i < argc - 1; i++)
  {
    arrayByArgs[i] = atoi(argv[i + 1]);
  }

  printf("\n\tArray pushed is >> A = [");
  for (int i = 0; i < argc - 1; i++)
  {
    i < argc - 2 ? printf("%d, ", arrayByArgs[i]) : printf("%d", arrayByArgs[i]);
  }
  printf("]\n");

  printf("\tThe maximum sum segment (sum) is >> %d\n", height(arrayByArgs, floor(argc / 2), (argc - 1)));

  return 0;
}