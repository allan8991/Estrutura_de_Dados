#include<iostream>
using namespace std;

void insertionSortCrescente(int vet[],int tam){
	int copia,indice;
    for(int i =1;i<tam;i++){
    	copia = vet[i];
    	indice = i;
    	while(indice>0 && vet[indice-1]>copia){
    		vet[indice] = vet[indice-1];
    		indice-=1;	
		}
		vet[indice] = copia;
		
	}
	 cout<<"[ ";
	 for(int j = 0; j<tam;j++){
	 	cout<<vet[j]<<" ";
	 }
	 cout<<"]"<<endl;
 	
}
int insertionSortDecrescente(int vet[],int tam){
	int copia,indice;
    for(int i =1;i<tam;i++){
    	copia = vet[i];
    	indice = i;
    	while(indice>0 && vet[indice-1]<copia){
    		vet[indice] = vet[indice-1];
    		indice-=1;	
		}
		vet[indice] = copia;
		
	}
     cout<<"[ ";
	 for(int j = 0; j<tam;j++){
	 	cout<<vet[j]<<" ";
	 }
	 cout<<"]"<<endl;
	
	
}
int main(int argc, char** argv) {
	int vet[]= {95,8,9,2,99,3,1};
	insertionSortCrescente(vet,sizeof(vet)/sizeof(int));
	insertionSortDecrescente(vet,sizeof(vet)/sizeof(int));
	return 0;
}
