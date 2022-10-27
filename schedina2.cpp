#include<iostream>
using namespace std;
void Carica(int v[]){ //funzione per caricare il vettore
	int i;
	for(i=0;i<10;i++){
		cout<<"Quanti goal ha fatto la squadra "<<i+1<<"?";
		cin>>v[i];
	}
}
void Schedina(int vcasa[],int vtrasferta[],char s[]){ //funzione calcolo schedina
	int j;
	for(j=0;j<10;j++){
		if(vcasa[j]==vtrasferta[j]){
			s[j]='x'; //se i gol in casa e quelli in trasferta sono uguali da in output la x
		}else if(vcasa[j]>vtrasferta[j]){
			s[j]='1';	//se i gol in casa e quelli in trasferta sono uguali da in output 1
		}else{
			s[j]='2'; //se i gol in casa e quelli in trasferta sono uguali da in output 2
		}
	}	
}
void StampaSchedina(int vcasa[],int vtrasferta[],char s[]){ //funzione stampa schedina
	int y;
	Schedina(vcasa,vtrasferta,s); //richiama la funzione per il calcolo della schedina
	for(y=0;y<10;y++){
		cout<<vcasa[y]<<" "<<"|"<<vtrasferta[y]<<" "<<"|"<<s[y]<<endl; //output schedina
	}
}
void SommagoalContaWin(int vc[],int vt[],int& sommacasa,int& sommat,int& contacasa,int& contat,int& sommapar){ //funzione che calcola la somma dei gol e le vittorie
	int h;
	for(h=0;h<10;h++){
		sommacasa=sommacasa+vc[h]; //calcola la somma dei gol in casa
		sommat=sommat+vt[h]; //calcola la somma dei gol in trasferta
		if(vc[h]>vt[h]){ 
			contacasa=contacasa+1; //vittorie in casa 
		}else if(vc[h]<vt[h]){
			contat=contat+1; //vittorie in trasferta
		}else{
			sommapar=sommapar+vc[h]+vt[h]; //somma dei gol delle partite in parita
		}
	}	
}
void Numerimax(int v[],int& M){ //funzione che calcola il numero massimo di gol
	int k;
	for(k=0;k<10;k++){
		if(v[k]>M){ //se k é maggiore di M (max) 
			M=v[k]; //assegna alla variabile M il valore maggiore
		}
	}
}
int main(){
	int Vettincasa[10],Vettfuoricasa[10],max=-1; 
	char risultati[10]; //vettore che verra dato in output
	cout<<"I goal in casa sono: "<<endl;
	Carica(Vettincasa); //richiama funzione per stampare il primo vettore
	cout<<"I goal in trasferta sono: "<<endl;
	Carica(Vettfuoricasa);//richiama funzione per stampare il secondo vettore
	StampaSchedina(Vettincasa,Vettfuoricasa,risultati); //richiamo funzione per stampare la schedina
	int s_casa=0,s_trasferta=0,c_casa=0,c_trasferta=0,s_pareggio=0; 
	SommagoalContaWin(Vettincasa,Vettfuoricasa,s_casa,s_trasferta,c_casa,c_trasferta,s_pareggio); //richiama funzione per la somma gol e le vittorie in casa e trasferta
	cout<<"Il totale dei gol delle squadre di casa: "<<s_casa<<endl;
	cout<<"Il totale dei gol delle squadre in traferta: "<<s_trasferta<<endl;
	cout<<"Le squadre di casa che hanno vinto sono: "<<c_casa<<endl;
	cout<<"Le squadre fuori casa che hanno vinto sono: "<<c_trasferta<<endl;
	cout<<"I goal delle squadre che hanno pareggiato sono: "<<s_pareggio<<endl;
	Numerimax(Vettincasa,max); //richiama funzione per stampare il numero massimo di gol delle squadre in casa
	cout<<"Il massimo numero di goal per le squadre in casa: "<<max<<endl;
	max=-1;
	Numerimax(Vettfuoricasa,max); //richiama la funzione per stampare il numeo massimo di gol delle squadre in trasferta
	cout<<"Il massimo numero di goal per le squadre fuori casa: "<<max<<endl;
	return 0;
}

