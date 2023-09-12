/* 
-> Algoritimo p/ destruir uma lista generalizada
três casos p/ considerar
-> ter um valor nulo
-> apontar um modo terminal
-> apontar um nulo não terminal
*/

#include <stdio.h>
#include <string.h>

void excluirRecur(listaGen **l){
	if(!Nula(*l)){
		if(Atomo(*l)){
			free(*l);
		}
		else{
			excluirRecur(&(*l) -> no.lista.cabeca);
			excluirRecur(&(*l) -> no.lista.cauda);
			free(*l);
			*l = NULL;
		}
	}
}



void ExibeInter(ListGen *l){
	Pilha *p;
	init(&p);
	push(&p,l);
	
	while(!IsEmpty(p)){
		if(!Nula(l)){
			pop(&p, l));
			while(!Nula(l) && !Atomo(l)){
				push(&p, l);
				l = Head(l);
			}
			if(Atomo(l)){
				printf("%s", l->no.info);
			}
			pop(&p,&l);
			l = Tail(l);
			if(!Nula(l)){
				push(&p,l);
			}
		}
	}
}


ListaGen *duplica(ListaGen *1){
	if(Nula(l))
		return NULL;
	if(Atomo(l))
		return criaT(l -> no.info);
	return Cons(duplica(Head(l)), duplica(Tail(l)))
	}
}

char compara(ListaGen *l1, ListaGen *l2){
	if(Nula(l1) && Nula(l2))
		return 1;
	if(Nula(l1) || Nula(l2))
		return 0;
	if(Atomo(l1) && Atomo(l2)
		if(strcmp(l1 -> no.info, l2 -> no.info) == 0)
			return 1;
	//	return strcmp(l1 -> no.info, 2 -> no.info) ==0);
	//	return !strcmp(l1 -> no.info, 2 -> no.info); 
	if(Atomo(l1) || Atomo(l2)))
		return 0;
	return Iguais(Head(l1), Head(l2)) && Iguais(Tail(l1), Tail(l2));
		
}


