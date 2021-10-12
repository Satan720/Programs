#include <stdio.h>
#include <stdlib.h>
void linearSearch(int arr[],int x);

int main()
{
  int arr[100],n,x,i;
  int flag = 1;
  printf("No. of elements in list[must be less than 100]");
  scanf("%d",&n);
  printf("Now enter %d element one by one\n:",n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);

  }
  printf("\nElements in the list are \n");
  for(i=0;i<n;i++)
  {
      printf("%d  ",arr[i]);

  }
  printf("\nElement to be searched:\n");
  scanf("%d",&x);  
  for (i=0; i<n; i++)
  {
  
  	if (x==arr[i])
  	{
  		printf("%d is present at position %d",x,i+1);
  		flag = 0;
  	}
  }
  if (flag==1)
  {
  
  	printf("No match Found");
  }
  
  return 0;
}
