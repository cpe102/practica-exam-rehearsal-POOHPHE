#include<bits/stdc++.h>
using namespace std;
int main(){
	double sum=0,x;
	cout<<"Enter x: ";
	while(cin>>x){
		if(x==0){
			break;
		}
		if(x>0){
			sum+=x;
		}
		
		cout<<"Enter x: ";
	}
	cout<<"sum = "<<sum;
	
	
}
