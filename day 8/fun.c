#include <stdio.h>
#include <math.h>
   int arth(){
       int x,y;
       scanf("%d %d",&x,&y);
       int add=x+y;
       int sub=x-y;
       int div=x/y;
       int multi=x*y;
       int mod=x%y;
       return x+y,x-y,x/y,x*y,x%y;
   }
   int main()
   {
       int x,y=arth();
       printf("%d",x+y);
       printf("%d",x*y);
        printf("%d",x-y);
         printf("%d",x%y);
          printf("%d",x/y);
      
   }
   