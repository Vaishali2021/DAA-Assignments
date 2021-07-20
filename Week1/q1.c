#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
   { 
   int i,n,x;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   scanf("%d",&x);
   for(i=0;i<n;++i)
        if(arr[i]==x)
            break;
     
    if(i<n)
        printf("Present %d\n",i+1);
    else
        printf("Not Present %d\n",i);
   }    
    return 0;
}

