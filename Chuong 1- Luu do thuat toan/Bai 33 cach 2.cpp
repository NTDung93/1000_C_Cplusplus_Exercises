/*
	Exercise 33 second way:
	Caculate this: can(2+can(2+can(.....+can(2).
*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
float ketqua(int n){
	quaylai: cout<<"Nhap n>=1: ";
	cin>>n;
	if(n<1) goto quaylai;
	float sum=0;
	for(int i=1; i<=n; i++){
		sum = sqrt(2+sum);
	}
	return sum;	
}
int main(){
	int n;
	comeback:cout<<"Ket qua la: "<< ketqua(n);
	cout<<"\nPress 'Y' to continue, any letter to stop.\n";
	char conti;
	conti=getch();
	if(conti=='y'||conti=='Y'){
		goto comeback;
	}
	return 0;
}
