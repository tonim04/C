//Scrivere un programma che, dopo aver caricato un vettore di 8 elementi
//Stampi a video il valore massimo in esso contenuto
//Stampi a video il valore minimo in esso contenuto
#include<iostream>
using namespace std;

void Max(int Vett[]){
	int max, i;
	max=Vett[0]; //assegno alla variabile max il primo elemento del vettore
	for(i=0; i<8; i++){
		if(Vett[i]>max){ //controlla se ogni elemento del vettore e' maggiore del precedente 
		max=Vett[i];
	}
	}
	cout<<"Il numero maggiore contenuto nel vettore e': "<<max<<endl;
}

void Min(int Vett[]){
	int min, i;
	min=Vett[0]; // assegno alla variabile min il primo elemento del vettore
	for(i=0; i<8; i++){
		if(Vett[i]<min){ //controlla se ogni elemento del vettore e' minore del precedente
			min=Vett[i];
		}
	}
	cout<<"Il numero minore contenuto nel vettore e': "<<min<<endl;
}

int main(){
	int n, i;
	int Vett[8]; //dichiarazione del vettore con 8 elementi
	for(i=0; i<8; i++){
		cout<<"Inserire il "<<i+1<<" numero: ";
		cin>>Vett[i]; //caricamento del vettore
	}
	Max(Vett);
	Min(Vett);
	return 0;
}
