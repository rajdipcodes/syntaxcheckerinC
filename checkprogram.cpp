#include<stdio.h>
int main(){
	int m1,m2,m3,m4,m5,agg,perc;
	printf("enter marks in 5 diff subjects out of 100:");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	agg=m1+m2+m3+m4+m5;
	perc=(agg/500)*100;
	printf("aggregate marks is %d and percentage is %d",agg,perc);
	return 0;
}
