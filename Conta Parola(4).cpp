#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(){
    string parola, s; //s=variabile temporanea                            
    char Frase[100]; 
	int conta=0, i=0; //inizializza conta e i=0                                                       
	cout<<"Inserire la frase: ";
    gets(Frase);  //permette di inserire la stringa con gli spazi
	cout<<"Inserire la parola che si sta cercando: ";                              
    cin>>parola;                                
    do{
        if(isalpha(Frase[i])){ //controlla se é un carattere alfanumerico
            s=s+Frase[i]; // mette la frase nella variabile temporanea s
        }
        else{
            if(s==parola){ //confronta la variabile temporanea e la parola
                conta++; //incrementa il conta
            }
            if(isspace(Frase[i])){ //comtrolla se ci sono spazi
                s=""; //inizializza la stringa come vuota
            }
        }
        i++;
    }
    while(Frase[i]!='\0'); 
    cout<<"La parola ("<<parola<<") e' contenuta nella frase "<<conta<<" volte. "<<endl;
    return 0;
}
