#include "Inimigo.h"
#include "Chefao.h"
#include "FormasGeometricas.h"
#include "Triangulo.h"
#include "Retangulo.h"
#include <vector>

std::vector<int> listaInteiros;
std::vector<FormaGeometrica*> lista;

//FormaGeometrica* formas[2];

void DesenharTudo()
{
	/*for(int i = 0; i < 2; i++)
	{
		formas[i]->Desenhar();
	}*/
}

int main()
{
	/*Inimigo i1;
	i1.Atacar();	
	Chefao c1;
	c1.Atacar();*/

	listaInteiros.push_back(1);
	listaInteiros.push_back(2);
	lista.push_back(new Triangulo()); //colocando novo triangulo dentro da lista
	lista.push_back(new Retangulo(10, 20));

	for(int i = 0; i < lista.size(); i++)
	{
		lista[i]->Desenhar();
	}

	//lista.clear(); //nao faça isso, vai limpar lista e perder todos os ponteiros
	std::cout << lista.size() << std::endl;

	//formas[0] = new Triangulo();
	//formas[1] = new Retangulo(10, 20);
	//DesenharTudo();

	system("pause");
	return 0;
}