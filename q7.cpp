#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a<b &a<c){
		printf("%d is smallest among all",a);
	}
	else if(b<a&b<c){
		printf("%d is smallest among all",b);
	}
	else {
		printf("%d is smallest among all",c);
	}
	
}
