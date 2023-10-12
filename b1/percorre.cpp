void percorre(ListaGen *L){
	
	Fila *F;
	Init(&F);
	
	enqueue(&F,L);
	while(!isEmpyt(F)){
		dequeue(&F, &L);
		ordena(L);
		while(!Nula(L)){
			
			if(!Nula(Head(L) && !Atomo(Head(L))){
				dequeue(&F, Head(L));
			}	
			
			L = Tail(L);
		}
	}
}

/* Fazer ordena com seleção direta */
