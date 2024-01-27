#include<stdio.h>
int main (){
  int n;
  printf("Enter the Number");
  scanf("%d",&n);
  int i=2;
  while (i<n)
  {
    if (n% i==0){
      i++; }
      printf("Not a prime Number ",n);
      return 0;
      }

    
    printf("Prime Number ",n);
  
  
  return 0;
}