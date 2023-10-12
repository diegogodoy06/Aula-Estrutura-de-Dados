union uvalor{
	float valor;
	char operador;
	char funcao[20];
};

struct listagen{
	char terminal;
	union uvalor val;
	struct listagem * cabeca, *cauda;
};
typedef struct listagen ListaGen;

struct caixa{
	char info[20];
	struct caixa *prox;
}
typedef struct caixa Caixa;

void separaStr(char str[], Caixa **lista);
ListagGen criaLG(char str[20]);

void construir (ListaGen **L, char str[]){
	Pilha *P
	Caixa *lista;
	ListaGen *atual;
	
	Init(&P);
	separaStr(str, &lista);
	while(lista!=NULL){
		
		if(*L == NULL){
			atual = *L = criaLG(lista->info);
		}
		else 
			if(strcmp(lista->info, "(") == 0){
				atual -> cauda = criaLG("0");
				atual = atual -> cauda;
				push(&P, atual);
				lista = lista -> prox;
				atual -> cabeca = criaLG("lista->info");
				atual = atual -> cabeca;
			}
			else
				if(strcmp(lista->info, ")") == 0){
					pop(&P, &atual)
				}
				else{	
					atual -> cauda = criaLG(lista->info);
					atual = atual -> cauda;
					
				}
			
		lista = lista -> prox;
	}	
}

float resolver(ListaGen **L){
	float result;
	
	ListaGen *aux;
	Pilha *P1, *P2;
	
	init(&P1);
	init(&P2);
	
	push(&P1,*L);
	push(&P2, *L);
	
	while(!isEmpyt(P1)){
		
		pop(&P1, &aux);
		while(aux != NULL){
			
			if(aux -> cabeca != NULLL){
				
				push(&P1, aux->cabeca);
				push(&P2, aux);
			}
			aux = aux -> cauda;
		}
	}
	
	while(!isEmpyt(P2)){,
	
		pop(&P2, &aux);
		
		if(*L == aux){
			result = calcula(aux);
		}	
		else{
			aux -> val.valor = calcula(aux -> cabeca);
		}
	}
	
	*L = NULL;
	
	return result;
}

int main(){
	
	float result;
	
	ListaGen *L = NULL;
	construir(L, "2+(3-5*(pow(2,3)-3)-8)");
	result = resolver(&L);
}