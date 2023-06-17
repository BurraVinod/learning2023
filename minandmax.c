#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n],min,max;
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
  min=a[0];
for(int i=1;i<n;i++){
  
if(a[i]<min)
min=a[i];
}
printf("%d\n",min);
max=a[0];
for(int i=1;i<n;i++){
if(a[i]>max)
max=a[i];
}
printf("%d\n",max);
}

