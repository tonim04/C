//Scrivere una funzione che realizza un semplice algoritmo crittografico. La funzione riceve 
//come parametri una stringa s1 e un intero n e modifica s1 sostituendola con la sua versione criptata
//utilizzando il seguente semplice algoritmo di cifratura. Ogni carattere da 'a' a 'z' viene rimpiazzato
//dal carattere che si trova n posizioni più avanti nell'alfabeto. L'alfabeto va gestito circolarmente,
//cioè il carattere 'a' è successivo al carattere 'z'. Tutti i caratteri che non rientrano nell' intervallo vngono lasciati inalterati
// ESEMPIO: N=3, 
#include<iostream>
using namespace std;
void Crittografia(char s1[], int n){
	int i;
	for(i=0;s1[i]!='\0';i++){
		if(s1[i]>='a' && s1[i]<='z'){
		char c=s1[i]; // carattere i-esimo
		c=c-'a'; // posizione rispetto alla 'a'
		c=c+n; // posizione traslata indietro di n
		c=c%26; // gestione circolare dell'alfabeto
		s1[i]='a'+c; // carattere codificato
	}
	}
}

int main(){
	char s1[50], s2[50];
	int n;
	cout<<"Inserire la stringa: ";
	cin>>s1;
	cout<<"Inserire il numero: ";
	cin>>n;
	Crittografia(s1, n);
	cout<<"La parola crittografata e': "<<s1<<endl;
	return 0;
}


