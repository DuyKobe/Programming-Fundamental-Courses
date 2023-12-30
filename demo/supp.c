#include<stdio.h>
#include <string.h>
#include <stdbool.h>
/*
extern int sum(void){
    return 1+2;
}
*/

union Hoclaptrinh
{
   int i;
   char f;
   char  chuoi[50];
};

int main( )
{
   union Hoclaptrinh tenbien;        
   printf( "Kich co bo nho : %d\n", sizeof(tenbien));
   /*
//ep kieu tro void
    int x = 65, *p = &x;
   int c = 100;
    void *q= p;
    float *i = (float *) q;
   char *r=i; 
   printf("%c\n",*r);
   printf("%d\n", *(int*)q);
   printf("%d", sizeof(void));
   */

   char chr;
   chr = 128;
   
   unsigned short int a = 0  ;
   bool tf_a = a = 0;
   printf("%d\n", tf_a);
   printf("%x\n", &chr);
  
   return 0;
}
