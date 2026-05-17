// Bubble sort code 
 
#include <stdio.h>
 
int main()
{
  int array[100], swap;
  int n = 0;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (int c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  for (int c = 0 ; c < n - 1; c++)
  {
    for (int d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (int c = 0; c < n; c++)
     printf("%d\n", array[c]);
 
  return 0;
}
