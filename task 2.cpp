#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int random = rand() % 100 + 1;
	int n,i=0;
	do{
	cout<<"enter number you guessed: "<<endl;
	cin>>n;
	i++;
	if(n<random)
	{
		cout<<"\ntoo low...";
	}
	else if(n>random)
	{
		cout<<"\ntoo high...";
	}
	else{
		cout<<"\nyou guessed right";
	}
}
while(n!=random);
}
