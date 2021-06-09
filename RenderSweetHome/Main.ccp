#include "ImagemHelper.h"
#include <iostream>
using namespace std;

int main() {
	ImagemHelper imagemHelper;
	int vista;
	int efeito;
	string nomeArquivo, diretorio;

	cout << "Escolha a vista para salvar (1-6), 7 para todas as vistas e todos os efeitos";
	cin >> vista;

	if (vista != 7) {
		cout << "Escolha o efeito: 1 para Escala de Cinza, 2 para Sépia e 3 para Escala de Roxo";
		cin >> efeito;
	}else {
		string nomeArquivoa1 = "resources\\view0_gray.ppm";
		string nomeArquivoa2 = "resources\\view0_sepia.ppm";
		string nomeArquivoa3 = "resources\\view0_roxo.ppm";
		string nomeArquivob1 = "resources\\view1_gray.ppm";
		string nomeArquivob2 = "resources\\view1_sepia.ppm";
		string nomeArquivob3 = "resources\\view1_roxo.ppm";
		string nomeArquivoc1 = "resources\\view2_gray.ppm";
		string nomeArquivoc2 = "resources\\view2_sepia.ppm";
		string nomeArquivoc3 = "resources\\view2_roxo.ppm";
		string nomeArquivod1 = "resources\\view3_gray.ppm";
		string nomeArquivod2 = "resources\\view3_sepia.ppm";
		string nomeArquivod3 = "resources\\view3_roxo.ppm";
		string nomeArquivoe1 = "resources\\view4_gray.ppm";
		string nomeArquivoe2 = "resources\\view4_sepia.ppm";
		string nomeArquivoe3 = "resources\\view4_roxo.ppm";
		string nomeArquivof1 = "resources\\view5_gray.ppm";
		string nomeArquivof2 = "resources\\view5_sepia.ppm";
		string nomeArquivof3 = "resources\\view5_roxo.ppm";

		#pragma omp parallel 
		{
			#pragma omp sections 
			{
				#pragma omp section
					imagemHelper.aplicaEfeitos(nomeArquivoa1, "view0_saida_gray.ppm", 1);

				#pragma omp section
					imagemHelper.aplicaEfeitos(nomeArquivoa2, "view0_saida_sepia.ppm", 2);

				#pragma omp section
					imagemHelper.aplicaEfeitos(nomeArquivoa3, "view0_saida_roxo.ppm", 3);

				#pragma omp section
					imagemHelper.aplicaEfeitos(nomeArquivob1, "view2_saida_gray.ppm", 1);

				#pragma omp section
					imagemHelper.aplicaEfeitos(nomeArquivob2, "view2_saida_sepia.ppm", 2);

				#pragma omp section	
					imagemHelper.aplicaEfeitos(nomeArquivob3, "view2_saida_roxo.ppm", 3);

				#pragma omp section
					imagemHelper.aplicaEfeitos(nomeArquivoc1, "view3_saida_gray.ppm", 1);

				#pragma omp section
					imagemHelper.aplicaEfeitos(nomeArquivoc2, "view3_saida_sepia.ppm", 2);

				#pragma omp section
					imagemHelper.aplicaEfeitos(nomeArquivoc3, "view3_saida_roxo.ppm", 3);

				#pragma omp section
					imagemHelper.aplicaEfeitos(nomeArquivod1, "view4_saida_gray.ppm", 1);

				#pragma omp section
					imagemHelper.aplicaEfeitos(nomeArquivod2, "view4_saida_sepia.ppm", 2);

				#pragma omp section				
					imagemHelper.aplicaEfeitos(nomeArquivod3, "view4_saida_roxo.ppm", 3);

				#pragma omp section
					imagemHelper.aplicaEfeitos(nomeArquivoe1, "view5_saida_gray.ppm", 1);

				#pragma omp section
					imagemHelper.aplicaEfeitos(nomeArquivoe2, "view5_saida_sepia.ppm", 2);

				#pragma omp section				
					imagemHelper.aplicaEfeitos(nomeArquivoe3, "view5_saida_roxo.ppm", 3);

				#pragma omp section
					imagemHelper.aplicaEfeitos(nomeArquivof1, "view6_saida_gray.ppm", 1);

				#pragma omp section
					imagemHelper.aplicaEfeitos(nomeArquivof2, "view6_saida_sepia.ppm", 2);

				#pragma omp section
					imagemHelper.aplicaEfeitos(nomeArquivof3, "view6_saida_roxo.ppm", 3);
			}
		}
		return 0;
	}


	switch (vista){
	case 1:
		if (efeito == 1) {
			nomeArquivo = "resources\\view0_gray.ppm";
			diretorio = "view0_saida_gray.ppm";
			imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
		}

		if (efeito == 2) {
			nomeArquivo = "resources\\view0_sepia.ppm";
			diretorio = "view0_saida_sepia.ppm";
			imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
		}

		if (efeito == 3) {
			nomeArquivo = "resources\\view0_roxo.ppm";
			diretorio = "view0_saida_roxo.ppm";
			imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
		}
		break;	
	case 2:
		if (efeito == 1) {
			nomeArquivo = "resources\\view2_gray.ppm";
			diretorio = "view2_saida_gray.ppm";
			imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
		}

		if (efeito == 2) {
			nomeArquivo = "resources\\view2_sepia.ppm";
			diretorio = "view2_saida_sepia.ppm";
			imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
		}

		if (efeito == 3) {
			nomeArquivo = "resources\\view2_roxo.ppm";
			diretorio = "view2_saida_roxo.ppm";
			imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
		}
		break;
	case 3:
		if (efeito == 1) {
			nomeArquivo = "resources\\view3_gray.ppm";
			diretorio = "view3_saida_gray.ppm";
			imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
		}

		if (efeito == 2) {
			nomeArquivo = "resources\\view3_sepia.ppm";
			diretorio = "view3_saida_sepia.ppm";
			imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
		}

		if (efeito == 3) {
			nomeArquivo = "resources\\view3_roxo.ppm";
			diretorio = "view3_saida_roxo.ppm";
			imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
		}
		break;
	case 4:
		if (efeito == 1) {
			nomeArquivo = "resources\\view4_gray.ppm";
			diretorio = "view4_saida_gray.ppm";
			imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
		}

		if (efeito == 2) {
			nomeArquivo = "resources\\view4_sepia.ppm";
			diretorio = "view4_saida_sepia.ppm";
			imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
		}

		if (efeito == 3) {
			nomeArquivo = "resources\\view4_roxo.ppm";
			diretorio = "view4_saida_roxo.ppm";
			imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
		}
		break;
	case 5:
		if (efeito == 1) {
			nomeArquivo = "resources\\view5_gray.ppm";
			diretorio = "view5_saida_gray.ppm";
			imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
		}

		if (efeito == 2) {
			nomeArquivo = "resources\\view5_sepia.ppm";
			diretorio = "view5_saida_sepia.ppm";
			imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
		}

		if (efeito == 3) {
			nomeArquivo = "resources\\view5_roxo.ppm";
			diretorio = "view5_saida_roxo.ppm";
			imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
		}
		break;
	case 6:
		if (efeito == 1) {
			nomeArquivo = "resources\\view6_gray.ppm";
			diretorio = "view6_saida_gray.ppm";
			imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
		}

		if (efeito == 2) {
			nomeArquivo = "resources\\view6_sepia.ppm";
			diretorio = "view4_saida_sepia.ppm";
			imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
		}

		if (efeito == 3) {
			nomeArquivo = "resources\\view6_roxo.ppm";
			diretorio = "view6_saida_roxo.ppm";
			imagemHelper.aplicaEfeitos(nomeArquivo, diretorio, 1);
		}
		break;
	}

	return 0;
}
