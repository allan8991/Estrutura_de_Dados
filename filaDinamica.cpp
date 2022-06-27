#include <iostream>
#include <cstddef>

using namespace std;
class Node{
	private:
	public:
		int valor;
		Node* proximoNode;
	
};
class filaDinamica{
	private:
		Node* primeiro;
		Node* ultimo;
		int tam = 0;
	public:
		filaDinamica();
		~filaDinamica();
		void inserirFila(int valor);
		void removerElementoFila();
		bool filaVazia();
		bool filaCheia();
		void tamanhoFila();
		void imprimirFila();
		
};
int main(int argc, char** argv) {
	class filaDinamica fila1;
	int escolha,valor;
	do{
		cout<<"Escolha algum item:"<<endl;
		cout<<"Escolha 0(zero) sair do programa"<<endl;
		cout<<"Escolha 1(um) inserir um elemento na fila"<<endl;
		cout<<"Escolha 2(dois) remover um elemento na fila"<<endl;
		cout<<"Escolha 3(tres) apagar todos elementos na fila"<<endl;
		cout<<"Escolha 4(quatro) tamanho da fila"<<endl;
		cout<<"Escolha 5(cinco) imprimir fila"<<endl;
		cin>>escolha;
		if(escolha==1){
			cout<<"Escolha um valor para fila"<<endl;
			cin>>valor;
			fila1.inserirFila(valor);
			
		}
		else if(escolha==2){
			fila1.removerElementoFila();
		}
		else if(escolha==3){
			fila1.~filaDinamica();
			
		}
		else if(escolha==4){
			fila1.tamanhoFila();
			
		}
		else if(escolha == 5){
			fila1.imprimirFila();
		}
		else{
			cout<<"Nao existe esta opcao. Voce deve escolher de 0 ate 5"<<endl;
		}
			
	}while(escolha>0);

	
	return 0;
}
	    filaDinamica::filaDinamica(){
	    	primeiro = NULL;
	    	ultimo = NULL;
		}
		filaDinamica::~filaDinamica(){
			if(filaVazia()){
				cout<<"Nao tem com apagar nada, pois, fila esta vazia"<<endl;
			}else{
			   ultimo = NULL;
			   primeiro = NULL;
			   tam = 0;
			}
			
		}
		void filaDinamica::inserirFila(int valor){
			Node* novoNode = new Node;
			novoNode->valor = valor;
			novoNode->proximoNode = NULL;
			
			if(filaCheia()){
				cout<<"Sua memoria principal esta cheia nao tem como inserir mais nada fila"<<endl;
			}else{
				cout<<"entrou"<<endl;
				if(primeiro == NULL){
					primeiro = novoNode;
					tam++;
					
				}else{
					ultimo->proximoNode = novoNode;
					tam++;		
				}
				ultimo = novoNode;
			
			}
			
		}
		void filaDinamica::removerElementoFila(){
			if(filaVazia()){
				cout<<"A fila esta vazia nao tem como remover nada"<<endl;
			}else{
				cout<<primeiro->valor<<endl;
				if(primeiro->proximoNode==NULL){
					primeiro = NULL;
					ultimo = NULL;
				}else{
					primeiro = primeiro->proximoNode;	
				}
				tam--;
				
			}
		}
		bool filaDinamica::filaVazia(){
			return primeiro == NULL;
		}
		bool filaDinamica::filaCheia(){
			try{
				Node* novoNode = new Node;
				delete novoNode;
				return false;
				
			}catch(bad_alloc exception){
				return true;
			}
		}
		void filaDinamica::imprimirFila(){
			Node* aux = primeiro;
			cout<<"[ ";
			while(aux != NULL){
				cout<<aux->valor<<" ";
				 aux = aux->proximoNode;
			}
			cout<<" ]"<<endl;
			delete aux;
			
		}
		void filaDinamica::tamanhoFila(){
			cout<<"O tamanho da fila e: "<<tam<<endl;
		}
