#include <stdio.h>

int main()
{
  int array[20], n, i, j, swap;int count;

  printf("Enter number of elements\n");
  count++;
  scanf("%d", &n);
  count++;

  printf("Enter %d integers\n", n);
  count++;

  for (i = 0; i < n; i++,count++){
    scanf("%d", &array[i]);
    count++;
    }

  for (i = 0 ; i < n - 1; i++,count++)
  {
  count++;
    for (j = 0 ; j < n - i - 1;j++,count++)
    {
    count++;
      if (array[j] > array[j+1]) 
      {
        count++;
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
        count+3;
      }
      count++;
    }
  }

  printf("Sorted list in ascending order:\n");
  count++;

  for (i= 0; i < n; i++,count++){
     printf("%d\n", array[i]);
     count++;
     }
     printf("The time complexity is: %d",count);
printf("The space complexity is: 96");
  return 0;
}
