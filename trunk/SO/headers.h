/* 
 * File:   headers.h
 * Author: afv
 *
 * Created on 12 de Maio de 2011, 18:08
 */

#ifndef _HEADERS
#define	_HEADERS

typedef struct musica{
	char * nome;
        char * genero;
	struct musica * next;
}*Musica, MusicaNode;

typedef struct leitor{
    Musica m;
}*Leitor, LeitorNode;

int pesquisa(Leitor l, char * nome);
int adiciona(Leitor l, Musica m);
int remove(Leitor l, Musica m);

#endif
