#include<iostream>
#include<fstream>

int main()
{
	std::ofstream outFile;
	outFile.open("solution1.txt");
	outFile <<  "sample solution1\n";
	outFile.close();
	return 0;
}
