#include <stdio.h>
void main(){
int a=5;
int n=2, flag = 0; while(a%n!=0){
n++;
if (n==a) {flag = 1;printf("no"); break;}
}
}
//равны между собой 

#include <stdio.h>
void main(){
int a=10;
for ( int s=0,n=2; n<a; n++)
if (a%n==0) { s=1; printf("yes"); break; }
}
//алгоритм выводит без остатка при делении 
//3,5,7,13

#include <stdio.h>
void main(){
int s=7;
int i=5;
int n=4;
for (s=1, i=1; i<=n; i++) s = s * i ;
printf("s = %d\n", s);
}
//фоктариал
