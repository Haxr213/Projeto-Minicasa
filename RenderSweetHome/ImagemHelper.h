#pragma once
#include <string>
using std::string;

ref class ImagemHelper{

public:
	void aplicaEfeitos(string nomeArquivo, string diretorio, int criterio);
	void escalaCinza(string diretorio, int* buffer, int width, int height);
	void aumentaContraste(string diretorio, int* buffer, int width, int heigh, int maxColor);
	void giroHorizontal(string diretorio, int* buffer, int width, int height);
};

