#include<iostream>
using namespace std;
void MCD (int num, int den){
	int i;
	for(i=num; i>0; i--){
		if((num%i==0)&&(den%i==0)){
			num=num/i;
			den=den/i;
		}
	}
	cout<<"La frazione ridotta ai minimi termini e': "<<num<<"/"<<den<<endl;
}
void MCD1 (int num1, int den1){
	int i;
	for (i=num1; i>0; i--){
		if((num1%i==0)&&(den1%i==0)){
			num1=num1/i;
			den1=den1/i;
		}
	}
		cout<<"La frazione ridotta ai minimi termini e': "<<num1<<"/"<<den1<<endl;
}

void FrazioneMag(int num, int num1, int den, int den1){
	float fraz, fraz1;
	fraz=num/den;
	fraz1=num1/den1;
	if(fraz>fraz1){
		cout<<"la frazione maggiore e': "<<num<<"/"<<den<<endl;
	}
	else{
		cout<<"La frazione maggiore e': "<<num1<<"/"<<den1<<endl;
	}
}

void CalcoloMcm(int den, int den2){
	int mcm, i, den_p;
	if(den>den1){
		if(den%den1==0){
			mcm=den;
		}
		else{
			for(i=2;i<=den;i++){
				den_p=den*i;
				if(den_p%den1==0){
					mcm=den_p;
				}
			}
		}
	}
}

int main(){
	int num, den, num1, den1;
	cout<<"Inserire il numeratore della prima frazione: ";
	cin>>num;
	cout<<"Inserire il denominatore della prima frazione: ";
	cin>>den;
	cout<<"Inserire il numeratore della seconda frazione: ";
	cin>>num1;
	cout<<"Inserire il denominatore della seconda frazione: ";
	cin>>den1;
	MCD(num, den);
	MCD1(num1, den1);
	FrazioneMag(num, num1, den, den1);
	return 0;
}

