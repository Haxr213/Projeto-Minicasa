#include "ImagemHelper.h"
#include <iostream>
#include <fstream>
#include <string>
#include <omp.h>

using std::string;

using namespace std;

void ImagemHelper::aplicaEfeitos(string nomeArquivo, string diretorio, int criterio) {
	char inputImage[50];

	ifstream file;

	bool flag = false;

	do {
		cin >> inputImage;								// take input from user

		file.open(nomeArquivo);							//attempt to open image specified by user

		if (file.is_open())								//if file is open notify the user that file has been opened successfully
		{
			cout << "File successfully opened" << endl;
			flag = true;
		}
		else
		{
			cout << "Unable to open file" << endl;			//if unable to open file, notify the user
			flag = false;
		}
	} while (!flag);					//loop continues as long as file isn't successfully opened


	// variables to store width, height and maxColor of PPM image
	int width;
	int height;
	int maxColor;

	string line;
	getline(file, line);


	//Code to obtain width of the image
	char ch;
	do
	{
		ch = file.get(); //7 igrone all spaces and enters with in the ppm image file :::::
	} while (ch <= 32);									//loop continutes to skip unnecessary characters spaces,enters etc

	line.clear();
	while (ch > 32)						//loop ends when ch has an unnecssary character
	{
		line = line + ch;
		ch = file.get();        //720   //loop with continued till a space encountered
	}
	width = stoi(line);						//convert width from string to integer and then assign it to "width"


	//code to obtain height of the image      (same mechanism as width)
	do
	{
		ch = file.get();
	} while (ch <= 32);								//loop continues to skip unnecessary charachters

	line.clear();
	while (ch > 32)								//loop ends whan ch has an unnucessary charachter
	{
		line = line + ch;//540
		ch = file.get();
	}
	height = stoi(line);			//convert height from string to integer and then assign it to "height"


	//code to obtain maxColor of image
	do
	{
		ch = file.get();
	} while (ch <= 32);								//loop to skip over unncessary charachters

	line.clear();
	while (ch > 32)					//loop ends when ch contains an unnecessary charachter
	{
		line = line + ch;
		ch = file.get();   //255
	}
	maxColor = stoi(line);					//convert maxColor from string to integer and assign to "maxColor"

	cout << "Width = " << width << endl;
	cout << "Height = " << height << endl;
	cout << "Max Color = " << maxColor << endl;

	int arraySize;
	arraySize = height * width * 3;

	int* buffer = new int[arraySize];

	#pragma omp parallel for
	for (int i = 0; i < arraySize; i++)     //copying into another file
	{
		do
		{
			ch = file.get();
		} while (ch <= 32);

		line.clear();
		char a = 0;
		while (ch > 32)
		{
			a = ch;

			line = line + a;
			ch = file.get();
		}

		buffer[i] = stoi(line);   //store whole bunch of pixels in it 
	}

	if (criterio == 1) {
		escalaCinza(diretorio, buffer, width, height);

		fstream outputfile(diretorio + "\\" + nomeArquivo.substr(0, 4) + "_escala_cinza.ppm", ios::out);

		outputfile << "P3" << endl;
		outputfile << width << " " << height << endl;
		outputfile << maxColor << endl;

		#pragma omp parallel for
		for (int i = 0; i < arraySize; i++){
			outputfile << buffer[i] << " ";    //pixels be like 234 123 231 231 123 " "  //spaces with with notepad to see this thing
			if (i % width == 0)    //when my width of line one is done! then go to next line
				outputfile << endl;
		}
	}

	if (criterio == 2){
		aumentaContraste(diretorio, buffer, width, height, maxColor);

		fstream outputfile(diretorio + "\\" + nomeArquivo.substr(0, 4) + "_contraste.ppm", ios::out);

		outputfile << "P3" << endl;
		outputfile << width << " " << height << endl;
		outputfile << maxColor << endl;

		#pragma omp parallel for
		for (int i = 0; i < arraySize; i++) {
			outputfile << buffer[i] << " ";    //pixels be like 234 123 231 231 123 " "  //spaces with with notepad to see this thing
			if (i % width == 0)    //when my width of line one is done! then go to next line
				outputfile << endl;
		}

	}

	if (criterio == 3) {
		giroHorizontal(diretorio, buffer, width, height);
		
		fstream outputfile(diretorio + "\\" + nomeArquivo.substr(0, 4) + "_gira_horizontal.ppm", ios::out);

		outputfile << "P3" << endl;
		outputfile << width << " " << height << endl;
		outputfile << maxColor << endl;

		#pragma omp parallel for
		for (int i = 0; i < arraySize; i++) {
			outputfile << buffer[i] << " ";    //pixels be like 234 123 231 231 123 " "  //spaces with with notepad to see this thing
			if (i % width == 0)    //when my width of line one is done! then go to next line
				outputfile << endl;
		}
	}
}

void ImagemHelper::escalaCinza(string diretorio, int* buffer, int width, int height)
{
	int average;
	for (int i = 0; i < (height * width * 3); i = i + 3)
	{
		average = (buffer[i] + buffer[i + 1] + buffer[i + 2]) / 3;

		buffer[i] = average;
		buffer[i + 1] = average;
		buffer[i + 2] = average;

	}
}

void ImagemHelper::aumentaContraste(string diretorio, int* buffer, int width, int height, int maxColor){
	for (int i = 0; i < (width * height * 3); i++)
	{
		if (buffer[i] >= maxColor / 2)
			buffer[i] = maxColor;
		else
			buffer[i] = 0;
	}
}


void ImagemHelper::giroHorizontal(string diretorio, int* buffer, int width, int height)
{
	int x = 0;
	int y = width * 3;
	int index = y;

	while (x < (height * width * 3))
	{
		while (x < y)
		{
			swap(buffer[x], buffer[y - 3]);
			swap(buffer[x + 1], buffer[y - 2]);
			swap(buffer[x + 2], buffer[y - 1]);

			x = x + 3;
			y = y - 3;
		}
		x = index;
		y = (width * 3) + x;
		index = y;
	}
}

void swap(int& a, int& b) //function to swap two variables
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
