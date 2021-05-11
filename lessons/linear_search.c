#include <stdio.h>
#include <stdlib.h>

int linear_search(int *arr, int n, int key)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      return i;
    }
  }

  return -1;
}

int main()
{
  int n = 10;
  int *Arr = malloc(sizeof(int) * n);
  int i = 0;
  for (i = 0; i < 10; i++)
  {
    Arr[i] = 10 - i;
  }
  printf("The array: ");
  printf(" [");
  for (i = 0; i < 10; i++)
  {
    i < 9 ? printf("%d, ", Arr[i]) : printf("%d", Arr[i]);
  }
  printf("]\n");

  printf("Set the value to search position in array >>> ");
  int key;
  scanf("%d", &key);

  int position = linear_search(Arr, n, key);
  printf("\nthe key is %d\n", key);
  if (position < 0)
  {
    printf("\nThe element not exists in array.\n");
    return 0;
  }

  printf("\nThe key position is %d in the array.\n", position);
  return 0;
}