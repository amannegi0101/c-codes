#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j,rows;
	cout<<"enter the rows" <<endl;
	cin>>rows;
	for(i=1; i<=rows; ++i)
	{
		for(j=1;j<=i;++j){
		
		cout<< " * ";
	}
		cout<<"\n";
	}
		return 0;
}
