#include<iostream>
using namespace std;

//in questa funzione viene caricato in input il vettore
void CaricaVett(int V[], int n){
	int i;
	for(i=0; i<n; i++){  //carica il vettore in input
		cout<<"Inserire il "<<i+1<<" numero: ";
		cin>>V[i];
	}  
}

void Cerca(int V[], int n){
	int i=0;
		do{
		cout<<"Inserire la posizione: "<<endl; //inserisce la i in input per scegliere la posizione del numero desiderato
		cin>>i;	
		} while(i>n); // ripete il ciclo finquando la i è maggiore di n 
		cout<<"Il numero nella posizione "<<i<<" e' "<<V[i]<<endl;
}

int main(){
	int n;
	cout<<"Inserire la dimensione dell'array: ";
	cin>>n;
	int V[n]; //dichiarazione dell'array che ha come dimensione n
	CaricaVett(V, n); //richiamo le funzioni
	Cerca(V, n);
	return 0;
}
