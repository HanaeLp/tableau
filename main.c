#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

int main()
{  int F[4]= {175, 156, 165, 173},i,j,tmp,A;

   for(i=0; i<SIZE; ++i){
    printf("%d\t", F[i]);
   }

   for(i=0; i<(SIZE-1); i++){
    A = i;
     for(j=i+1; j<SIZE; j++){
            if(F[A]> F[j]){
                 A = j;
            }
            if(A!= i){
                tmp = F[i];
                F[i]=F[A];
                F[A] = tmp;
            }
     }
   }
   printf("\n");

   for(i=0; i<SIZE; i++){
    printf("%d\t", F[i]);
   }

}
