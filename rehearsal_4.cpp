#include<bits/stdc++.h>
using namespace std;

//Write compress() here.
string compress(string a){
	string b="";
	for(int i=0;i<a.size();i+=3){
		b= b+a[i];
	}
	return b;
}
int main()
{
    string a = compress("ABCDEFGHIJKLMN");
    string b = compress("123456");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string i = compress("ABCD");
    string t = compress("X");
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n"<<t;

}
