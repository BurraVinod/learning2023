#include<Stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n],sum,avg;
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}

for(int i=0;i<n;i++){
sum=sum+a[i];
}
avg=sum/n;
printf("%d%d",sum,avg);
}
