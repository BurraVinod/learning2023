#include<stdio.h>
int main(){
int marks;
scanf("%d",&marks);
if(marks>= 0 && marks<50)
printf("GRADE F");
else if(marks>=50 && marks<60)
printf("GRADE D");
else if(marks>= 60 && marks<75)
printf("GRADE C");
else if(marks>= 75 && marks<90)
printf("GRADE B");
else
printf("GRADE A");
}
