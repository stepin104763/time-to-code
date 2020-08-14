#include <stdio.h>
#include <stdlib.h>
void swap(int *n1, int *n2);
void sort(int *array);
int main()
{
  int l= 0;
  printf("Enter number of elements: ");
  scanf("%d", &l);
  int *array = malloc(sizeof(int) * (l+ 1));
  array[0] = l;

  printf("Enter %d integers:\n", l);
  for(int i = 1; i <= l; i++)
  {
    scanf("%d", (array + i));
  }

  printf("Original array[l= %d]: ", *array);
  for(int i = 1; i <= l; i++)
  {
    printf("%d ", *(array + i));
  }
  sort(array);
  printf("\nSorted array: ");
  for(int i = 1; i <= l; i++)
  {
    printf("%d ", *(array + i));
  }
  printf("\n");
  return 0;
}
void swap(int *n1, int *n2)
{
  int temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}


void sort(int *array)
{
  int length = *(array + 0);
  for(int i = 1; i <= length; i++)
  {
    for(int j = 1; j <= (length - i); j++)
    {
      if(*(array + j) > *(array + j + 1))
      {
        swap((array + j), (array + j + 1));
      }
    }
  }
}
