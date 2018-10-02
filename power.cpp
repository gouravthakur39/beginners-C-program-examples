#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int exp,num,res;
	cout<<"Enter the number and its power to be raised to\n";
	cin>>num>>exp;
	res=pow(num,exp);
	cout<<"Result is :"<<res;	
}
