#include <iostream>
using namespace std;
void buscaBinaria(int vet[],int tam, int procurar){
	int inicio = 0;
	bool acheiProcurar = false;
	int meio;
	int fim = tam-1;
	while(inicio<=fim){
		meio = (inicio+fim)/2;
		if(vet[meio]==procurar){
			cout<<"Achei o numero "<<procurar<<" na lista"<<endl;
			acheiProcurar = true;
			break;
		}else{
			if(vet[meio]>procurar){
				fim = meio-1;
			}else{
				inicio = meio+1;
			}
		}
	  	
	}
	if(!acheiProcurar){
		cout<<"Nao achei o numero "<<procurar<<" na lista"<<endl;
	}
}

int main(int argc, char** argv) {
	int vet[]={2,5,8,99,101};
	int procurar = 101;
	buscaBinaria(vet,sizeof(vet)/sizeof(int), procurar);
	
	return 0;
}
