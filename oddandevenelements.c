#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n],sum=0,su=0;
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
if(a[i]%2==0){
sum=sum+a[i];


}
else
{
su=su+a[i];

}
}
printf("even %d\n",sum);
printf("odd %d\n",su);


}