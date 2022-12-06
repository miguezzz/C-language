#include <stdio.h>

void ordena(int n, Contato** v);
int compara(Contato* con_1, Contato* con_2);

struct contato {
char nome[81];
char telefone[21];
int dia;
int mes;
int ano;
};

typedef struct contato Contato;

int main(void) {



	Contato lista[5] = {
	{"Eduardo", "21971547678", 15, 7, 2003},
	{"Victor", "21991986732", 12, 5, 2004},
	{"Paulo", "21988845610", 27, 8, 2003},
	{"Pedro", "21993921750", 19, 9, 2002},
	{"Augusto","21971547446", 26, 10, 2003}
}; 

	ordena(5, lista);

	return 0;
}


Contato ordena (int tam, Contato** v)
{
	int k, j, aux, i;

	for (i = 1; i < tam; i++)
	{
		j = i;

		while (j > 0 && v[j - 1] > v[j])
		{
			aux = v[j];
			v[j] = v[j - 1];
			v[j - 1] = aux;
			j--;
		}
	}
}

int compara(Contato* con_1, Contato* con_2)
{
	
}
