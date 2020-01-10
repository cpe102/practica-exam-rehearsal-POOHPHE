#include<bits/stdc++.h>
using namespace std;

//Write sumSqrt() here.
double sumSqrt(int n){
	double k=0;
	if(n<=0){
		return 0;
	}else{
		for(int i=1;i<=n;i++){
			k+=1.0/sqrt(i);
		}
	}
	return k*1.0;
}

int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    double m = sumSqrt(3);
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n"<<m;

}
