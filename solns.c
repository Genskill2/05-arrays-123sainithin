/* Enter your solutions in this file */
#include <stdio.h>
/*max function*/
int max(int a[], int n){
int m=0 ;
 for ( int i = 0; i < n ; i++){
    if (a[i] > m){
         m = a[i];
        }
      }
  return m;
}

/*min function*/
int min(int a[], int n){
int min = a[0] ;
     for(int i=1 ; i<n ; i++){
       if(a[i]<min)
       min = a[i];
  }
 return min;
}
/*average function*/
float average(int a[], int n){
 float sum = 0 ;
     for(int i=0; i<n ; i++){
       sum = sum + a[i];

    }
    return sum/n;
}
/*mode function*/
int mode(int a[], int length
