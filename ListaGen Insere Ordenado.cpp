void percorre(ListaGen *L, char info[], int nivel){
	
	FilaP *F1 * F2;
	FilaI *Fn1 *Fn2;
	
	if(nivel>1){
		
		InitP(&F1);
		InitP(&F2);
		InitI(&Fn1);
		InitI(&Fn2);
		
		enqueueP(&F1, L);
		enqueueI(&Fn1, 1);
		
		while(!isEmpyt(F1)){
			
			dequeueP(&F1, &L);
			dequeueI(&Fn1, &n);
			
			while(!Nula(L)){
				
				if(!Nula(Head(L) && !Atomo(Head(L)))
				{
					enqueueP(&F1, Head(L));
					enqueueP(F2, L);
					enqueueI(&Fn1, n+1);
					enqueueI(&Fn2, n+1);
				}	
				
				L = Tail(L);
			}
		}
		while(!isEmpyt(F2)){
			
			dequeueP(&F2, &L);
			dequeueI(Fn2f, &n);
			
			if(n==nivel)
				insere(&L -> no.lista.cabeca, info);
		}
		
	}
	else
		insere(&L, info);

}

