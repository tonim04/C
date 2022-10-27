//Dato un array di  10 caratteri  , stampare l'array in ordine alfabetico
#include<iostream>
#include<string>
using namespace std;

void CaricaVett(char Vett[]){
	int i; 
	for(i=0; i<10; i++){
		cout<<"Inserire la "<<i+1<<" lettera: ";
		cin>>Vett[i];
	}
}

void Ordina(char Vett[]){
	int temp; //variabile contenitore 
	int i, j;
	for(i=0; i<10; i++){
		for(j=i+1; j<10; j++){ // parte dalla lettera sucessiva a quella che stiamo controllando perchè le lettere precedenti sono gia state controllate e di conseguenza ordinate
			if(Vett[i]>Vett[j]){ 
				temp=Vett[i]; //mette la lettera nella variabile temporanea (temp)
				Vett[i]=Vett[j];
				Vett[j]=temp; //con queste istruzioni i numeri vengono ordinati
			}
		}
	}
}

int main(){
	char Vett[10];
	int i;
	CaricaVett(Vett);
	Ordina(Vett);
	cout<<"Vettore ordinato in ordine alfabetico: "<<endl;
	for(i=0; i<10; i++){
		cout<<Vett[i]<<endl; //output in ordine calfabetico
	}
	return 0;
}
