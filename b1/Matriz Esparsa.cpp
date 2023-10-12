#define nl 5
#define nc 6

//Para vetores na coluna e linha

struct matrizEsp{
	int lin, col, valor;
	struct matrizEsp *pc, *pl;
};
typedef struct matrizEsp MatEsp;

void insere(MatEsp * veetLin[], MatEsp* vvetCol[], int Lin, int Col, int valor){
	MatEsp *ant, *aux, *nova;
	
	if(lin >=0 && lin<nl && col>= 0 && col<nc){
		verificaOcupado(vetLin, lin, col, &aux);
		if(aux!=NULL)
			aux->valor = valor;
		}
		else{
			nova = (MatEsp*)malloc(sizeof(MatEsp));
			nova -> lin = lin;
			nova -> col = col;
			nova -> valor = valor;
			
			//ligação horizontal
			if(vetLin[lin] == NULL){
				vetLin[lin] = nova;
				nova -> pl = NULL;
			}
			
			else{
				if(col < vetLin[lin] -> col){
					nova -> pl = vetLin[lin];
					vetLin[lin] =  nova;
				}
				else{
					ant =  vetLi[lin];
					aux = ant -> pl;
					
					while(aux !=  NULL && col > aux -> col){
						ant = aux;
						aux = aux -> pl;
					}
					
					ant->pl = nova;
					nova -> pl = aux;
				}
			}
		}	
	}
	else
		printf("Coord fora da matriz! \n");
}


void exibe(MatEspp * vetlIn){
	int i,j;
	MatEsp *aux;
	
	for(i=0; i<nl; i++){
		for(j=0; j<nc; j++)[
			verificaOcupado(vetLin,i,j,&aux);
			if(aux != NULL){
				printf("%d \t", aux->valor);
			}
			else
				printf("0\t");
		]
		printf("\n");
	}
}
