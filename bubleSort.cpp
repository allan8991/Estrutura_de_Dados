#include <iostream>

using namespace std;


 void bubleSortCrescente(int vet[],int tam){
 	int fim = tam-1;
 	int aux;
 	while(fim>0){
 		for(int i=0;i<fim;i++){
 			if(vet[i]>vet[i+1]){
 				aux = vet[i];
 				vet[i] = vet[i+1];
 				vet[i+1] = aux;
 				
			 }
		 }
		 fim--;
	 }
	 cout<<"[ ";
	 for(int j = 0; j<tam;j++){
	 	cout<<vet[j]<<" ";
	 }
	 cout<<" ]"<<endl;
 	
}
int bubleSortDecrescente(int vet[],int tam){
	int fim = tam-1;
	int aux;
	while(fim>0){
		for(int i=0;i<fim;i++){
			if(vet[i]<vet[i+1]){
				aux = vet[i+1];
				vet[i+1] = vet[i];
				vet[i] = aux;
			}
			
		}
		fim--;
	}
	 cout<<"[ ";
	 for(int j = 0; j<tam;j++){
	 	cout<<vet[j]<<" ";
	 }
	 cout<<" ]"<<endl;
	
	
}
int main(int argc, char** argv) {
	int vet[]= {95,8,9,2,99,3,1};
	bubleSortCrescente(vet,sizeof(vet)/sizeof(int));
	bubleSortDecrescente(vet,sizeof(vet)/sizeof(int));
	return 0;
}
