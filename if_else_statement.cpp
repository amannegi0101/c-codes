#include<bits/stdc++.h>
using namespace std;
int main(){
	int savings;
	cout<<"enter the savings amount"<< endl;
	cin>>savings;
	if(savings>500){
		cout<<"pizza"<<endl;
	}else if(savings>100)
	{
		cout<<"burger";
	}else{
		cout<<"parle_g"<<endl;
	}
	
	return 0;
}
