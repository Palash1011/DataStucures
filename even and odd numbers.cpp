#include<stdio.h>
int main()
{
   int n, a[20],i;
   printf("Enter the size of the array: ");
   scanf("%d", &n);
   printf("Enter elements: \n");
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   printf("Even numbers:\n");
   for(i=0;i<n;i++){
     if(a[i]%2==0)
     printf("%d ",a[i]);
   }
   printf("\nOdd numbers:\n");
    for(i=0;i<n;i++){
     if(a[i]%2!=0)
     printf("%d ",a[i]);
   }
   return 0;
}
