#include<iostream>

using namespace std;

struct {

int data;
char ch;
}x;
int main() {
	cout<<"Enter data and character into structure object x\n";
	cin>>x.data>>x.ch;
	cout<<x.data<<"\t"<<x.ch;
}
