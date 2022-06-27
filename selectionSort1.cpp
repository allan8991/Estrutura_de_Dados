#include <iostream>

using namespace std;


 void selectionSortCrescente(int vet[],int tam){
 	int indiceMenor,aux;
 	for(int i=0;i<tam-1;i++){
 		indiceMenor = i;
 		for(int j=i+1;j<tam;j++){
 			if(vet[j]<vet[indiceMenor]){
 				indiceMenor = j;
 				
			 }
			 aux = vet[i];
			 vet[i] = vet[indiceMenor];
			 vet[indiceMenor] = aux;
 			
		 }
	 }
	 cout<<"[ ";
	 for(int j = 0; j<tam;j++){
	 	cout<<vet[j]<<" ";
	 }
	 cout<<"]"<<endl;
 	
}
int selectionSortDecrescente(int vet[],int tam){
	int indiceMenor,aux;
 	for(int i=0;i<tam-1;i++){
 		indiceMenor = i;
 		for(int j=i+1;j<tam;j++){
 			if(vet[j]>vet[indiceMenor]){
 				indiceMenor = j;
 				
			 }
			 aux = vet[i];
			 vet[i] = vet[indiceMenor];
			 vet[indiceMenor] = aux;
 			
		 }
	 }
     cout<<"[ ";
	 for(int j = 0; j<tam;j++){
	 	cout<<vet[j]<<" ";
	 }
	 cout<<"]"<<endl;
	
	
}
int main(int argc, char** argv) {
	int vet[]= {95,8,9,2,99,3,1};
	selectionSortCrescente(vet,sizeof(vet)/sizeof(int));
	selectionSortDecrescente(vet,sizeof(vet)/sizeof(int));
	return 0;
}
