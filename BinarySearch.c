#include <stdio.h>

int main()
{
  int c, first, last, middle, n, search, array[20]; int count;

  printf("Enter number of elements\n");
  count++;
  scanf("%d", &n);
  count++;

  printf("Enter %d integers\n", n);
  count++;

  for (c = 0; c < n; c++,count++){
    scanf("%d", &array[c]);
    count++;
    }

  printf("Enter value to find\n");
  count++;
  scanf("%d", &search);
  count++;

  first = 0;
  last = n - 1;
  middle = (first+last)/2;
  count+3;

  while (first <= last) {
    if (array[middle] < search){
      count++;
      first = middle + 1;
      count++;
      }
      
      
    else if (array[middle] == search) {
    count++;
      printf("%d found at location %d.\n", search, middle+1);
      count++;
      break;
    }
    
    else 
      {
      count++;
      last = middle - 1;
      count++;
      }
      count++; 
    middle = (first + last)/2;
    count++;
  }
  count++;
  if (first > last){
  count++;
    printf("Not found! %d isn't present in the list.\n", search);
    count++;
    }
    count++;
printf("Time complexity is: %d",count);
printf("Space Complexity: 104");

  return 0;
}
