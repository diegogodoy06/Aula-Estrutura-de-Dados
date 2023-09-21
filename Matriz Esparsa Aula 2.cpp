void verificaOcupado(MatEsp * vetLin[], int Lin, int Col, MatEsp ** ret){
	
	MatEsp * aux = vetLin[Lin];
	while(aux != NULL && Col > aux -> col){
		aux = aux -> pl;
	}
	if(aux != NULL && Col == aux-> col)
		*ret = aux;
	else	
		*ret = NULL;
}

void soma(MatEsp *vetLinA[], MatEsp vetLinB[], MatEsp *vetLinC[], MatEsp * vetColC[]){
	MatEsp * aux;
	int i,j,soma;
	
	for(i=0; i<nl; i++)
		for(j=0; j<nc; j++){
			soma = 0;
			verificaOcupado(vetLinA, i j, &aux);
			if(aux != NULL)
				soma = aux -> valor;
			verificaOcupado(vetLinB, i,j,&aux);
			if(aux != NULL)
				soma = soma +aux -> valor;
			if(soma != 0)
				insere(vetLinC, vetor i,j,soma);
		}
}

void multiplicaEsparsa(MatEsp *vetLinA[], MatEsp vetLinB[], MatEsp *vetLinC[], MatEsp * vetColC[]){
	MatEsp * aux;
	
	
	
	
}