#include <stdio.h>           
   int main()
   {
     int t;
    scanf("%d",&t);
    while(t>0)
     {
      int i, j, n, temp,comp=0,shift=0;
      scanf("%d",&n);
      int array[n];
      for (i = 0; i < n; i++)
      {
          scanf("%d",&array[i]);
      }
      for (i = 1; i < n; i++) {
      j = i;
      shift++;
      while ((j > 0) && (array[j - 1] > array[j])) {
            if(array[j-1]>array[j]){
            comp++;
            shift++;
        }
        temp = array[j - 1];
        array[j - 1] = array[j];
        array[j] = temp;
        j--;
        
    }
}
for (i = 0; i < n; i++)
    printf("%d ", array[i]);
    printf(" \ncomparisons  = %d",comp);
    printf(" \nshifts  = %d",shift);
     
      t--;
}
      return 0;
 } 
