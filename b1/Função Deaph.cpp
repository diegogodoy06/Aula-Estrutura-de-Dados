void caldeph(ListaGen *l, int n, int *maior){
	if(!Nula(L)){
		if(!Atomo(L)){
			if(n>*maior)
				*maior = n;
			caldeph(Head(L), n+1, &*maior);
			caldeph(Tail(L), n, &*maior);
		}
	}
}

int deaph(ListaGen *L){
	int result = 0;
	caldep(L, 1, &result);
	return result;
}