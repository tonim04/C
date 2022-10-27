#include<iostream>
#include<string>
#include<cctype>
using namespace std;

void Speculare(string parola){
	char lettera;
	int i;
	for(i=parola.length(); i>=0; i--){
		lettera=parola[i];
		cout<<lettera;
	}
}

int main(){
	string parola;
	cout<<"Inserire la parola: ";
	getline(cin, parola);
	cout<<"Parola speculare: ";
	Speculare(parola);
	return 0;
}
