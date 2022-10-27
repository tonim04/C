#include <iostream>
using namespace std;
int main(){
	int i,n1,n2=1;
		for(i=1;i<=10;i++){
			for(n2=1;n2<=10;n2++){
				n1=i*n2;
				cout<<n1<<"-";
			}
			cout<<endl;				
		}
	return 0;
}
