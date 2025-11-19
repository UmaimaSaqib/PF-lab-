#include<iostream>
using namespace std;
int main(){
	char character[8];
	for(int i=0;i<8;i++)
	{
	cout<<"Enter any character"<<endl;
	cin>>character[i];
	
	}
	cout<<"You entered character"<<endl;
	for(int i=0;i<8;i++)
	{
	cout<<character[i]<<endl;
	}
	return 0;
}