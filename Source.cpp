//Файлы бывают текстовые и двоичные/бинарные.
//my_file.txt
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main() {
	////запись в файл
	//ofstream outFile;
	//outFile.open("my_file.txt");
	//string str;
	//getline(cin, str);
	//outFile << str;
	//outFile.close();

	//чтение из файла
	ifstream inFile;
	inFile.open("my_file.txt");
	string str1;
	getline(inFile,str1);
	cout << str1;
	inFile.close();
	return 0;
}