#include "ImagemHelper.h"
#include "PPMImage.h"
#include <fstream>
#include <iostream>

void ImagemHelper::aplicaEfeitos(string nomeArquivo, string diretorio, int criterio) {
    PPMImage p;
    ifstream inStream;
    ofstream outStream;
    string arquivoSaida;

    cout << "Please specify the source PPM filename: ";
    cin >> nomeArquivo;
    inStream.open(nomeArquivo, std::ifstream::binary);
    inStream >> p;
    inStream.close();
    cout << "Please specify the output PPM filename: ";
    cin >> arquivoSaida;
    
    if (criterio == 1) {
        arquivoSaida = diretorio + "\\" + nomeArquivo.substr(10, 5) + "_cinza.ppm";
        p.aplicaTomCinza();
        outStream.open(arquivoSaida, std::ifstream::binary);
        outStream << p;
        outStream.close();
        cout << "The " << nomeArquivo << " has been converted to grayscale and saved as " << arquivoSaida << endl;
    }

    if (criterio == 2) {
        arquivoSaida = diretorio + "\\" + nomeArquivo.substr(10, 5) + "_sepia.ppm";
        p.aplicaSepia();
        outStream.open(arquivoSaida, std::ifstream::binary);
        outStream << p;
        outStream.close();
        cout << "The " << nomeArquivo << " has been converted to grayscale and saved as " << arquivoSaida << endl;
    }

    if (criterio == 3) {
        arquivoSaida = diretorio + "\\" + nomeArquivo.substr(10, 5) + "_roxo.ppm";
        p.aplicaTomRoxo();
        outStream.open(arquivoSaida, std::ifstream::binary);
        outStream << p;
        outStream.close();
        cout << "The " << nomeArquivo << " has been converted to grayscale and saved as " << arquivoSaida << endl;
    }
}
