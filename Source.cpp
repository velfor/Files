//Файлы бывают текстовые и двоичные/бинарные.
//my_file.txt
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main() {
	ofstream outFile;
	outFile.open("my_file.txt");
	string str;
	getline(cin, str);
	outFile << str;
	outFile.close();
	return 0;
}