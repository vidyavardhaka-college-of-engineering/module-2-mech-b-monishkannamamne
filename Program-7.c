//INPUT - 3 1 2 3
//OUTPUT- 3 2 1

//INSERT THE MISSING CODE 
#include<stdio.h>
	int main()
	{
	  int a[10],i,n;
	  printf("Enter size of the array and the array elements");
	  scanf("%d",&n);
	  printf("enter the array elements");
	  for(i=0;i<n;i++)
	  scanf("%d",&a[i]);//missing code
	  printf("Array elements in reverse order : ");
	  for(i=n-1;i>=0;--i)//missing code
    {
	  printf("%d ",a[i]);
    }
	  return(0);
	}

