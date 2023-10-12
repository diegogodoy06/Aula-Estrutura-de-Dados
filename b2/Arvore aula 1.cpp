Struct tree{
	int info;
	struct tree *osq, *dir;
};
typedef struct tree Tree;


Tree criaNo(int info){
	Tree *no;
	no = (Tree) * malloc(sizeof(Tree));
	no->info = info;
	no->esq = no->dir = NULL;
	return no;
}

void localizaNo(Tree *raiz, int info, Tree **no){
	if(raiz != NULL){
		if(raiz -> info == info)
			*no = raiz;
		else{
			localizaNo(raiz->esq, info, &*no);
			if(*no == NULL)
				localizaNo(raiz->dir, info, &*no);
		}
	}
}


void insereTree(Tree **raiz, int info, int infopai, char lado){
	Tree *pai = NULL;
	
	if(*raiz == NULL){
		*raiz = criaNo(info);
	}
	else{
		localizaNo(*raiz, infopai, &pai);
		if(pai != NULL){
			if(lado == 'e' && pai->esq == NULL)
				pai->esq = criaNo(info);
			else
				if(lado == 'd' && pai->dir = NULL)
					pai->dir = criaNo(info);
				else
					printf("Nao foi possivel inserir");
		}
	}
}


int main()[

	Tree *raiz = NULL;
	
	insere(&raiz, 10, 0, ' ');
	

]