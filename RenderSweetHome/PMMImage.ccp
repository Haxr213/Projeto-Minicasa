#include "PPMImage.h"
#include <fstream>
#include <string>
using namespace std;

std::istream& operator >>(std::ifstream& inputStream, PPMImage& img) {
    string fileName;
    char dump;

    inputStream >> img.magicNumber;

    string myString;
    inputStream >> myString;
    img.width = atoi(myString.c_str());

    inputStream >> myString;
    img.height = atoi(myString.c_str());

    inputStream >> myString;
    img.maxColorVal = atoi(myString.c_str());

    int memoryBlockSize = img.width * img.height * 3; 

    img.threeChan = new char[memoryBlockSize];

    inputStream.read(&dump, 1); 
    inputStream.read(img.threeChan, img.width * img.height * 3);
    return inputStream;
}

void PPMImage::aplicaTomCinza() {
    char* init, * reset;
    unsigned char oldRed, oldGreen, oldBlue, newRed, newGreen, newBlue;

    reset = threeChan; 

    for (int i = 0; i < width * height; i++) {
        init = threeChan;

        oldRed = *threeChan;
        threeChan++;
        oldGreen = *threeChan;
        threeChan++;
        oldBlue = *threeChan;

        newRed = (oldRed * 0.299) + (oldGreen * 0.587) + (oldBlue * 0.114);
        newGreen = (oldRed * 0.299) + (oldGreen * 0.587) + (oldBlue * 0.114);
        newBlue = (oldRed * 0.299) + (oldGreen * 0.587) + (oldBlue * 0.114);

        threeChan = init;
        *threeChan = newRed;
        threeChan++;
        *threeChan = newGreen;
        threeChan++;
        *threeChan = newBlue;
        threeChan++;
    }
    threeChan = reset;
}

void PPMImage::aplicaSepia() {
    char* init, * reset;
    unsigned char oldRed, oldGreen, oldBlue, newBlue;

    reset = threeChan;

    for (int i = 0; i < width * height; i++) {
        init = threeChan;

        oldRed = *threeChan;
        threeChan++;
        oldGreen = *threeChan;
        threeChan++;
        oldBlue = *threeChan;

        newBlue = 0.00;

        threeChan = init;
        *threeChan = oldRed;
        threeChan++;
        *threeChan = oldGreen;
        threeChan++;
        *threeChan = newBlue;
        threeChan++;
    }
    threeChan = reset; 
}

void PPMImage::aplicaTomRoxo() {
    char* init, * reset;
    unsigned char oldRed, oldGreen, oldBlue, newGreen;

    reset = threeChan; 

    for (int i = 0; i < width * height; i++) {
        init = threeChan;

        oldRed = *threeChan;
        threeChan++;
        oldGreen = *threeChan;
        threeChan++;
        oldBlue = *threeChan;

        newGreen = 0.00;

        threeChan = init;
        *threeChan = oldRed;
        threeChan++;
        *threeChan = newGreen;
        threeChan++;
        *threeChan = oldBlue;
        threeChan++;
    }
    threeChan = reset; 
}

std::ostream& operator <<(std::ofstream& outputStream, const PPMImage& img) {
    int memoryBlockSize = img.width * img.height * 3;
    outputStream << img.magicNumber << '\n' << img.width << ' ' << img.height << '\n' << img.maxColorVal << '\n';
    outputStream.write(img.threeChan, memoryBlockSize);
    return outputStream;
}

