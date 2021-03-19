// this is the implementation of the first algorithm to resolve the maximum sum segment problem
// este é a implementação do primeiro algoritmo para estudo do problema do segmento de soma máxim

#include <stdio.h>
#include <stdlib.h>

int height(int Arr[], int sizeArr)
{
  int x = Arr[0];
  for (int i = 0; i < sizeArr; i++)
  {
    for (int k = 0; k < sizeArr; k++)
    {
      int sum = 0;
      for (int j = 0; j < k; j++)
      {
        sum = sum + Arr[j];
      }

      if (sum > x)
      {
        x = sum;
      }
    }
  }

  return x;
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

  printf("\tThe maximum sum segment (sum) is >> %d\n", height(arrayByArgs, (argc - 1)));

  return 0;
}