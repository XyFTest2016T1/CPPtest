#include<iostream>
#include<fstream>

int main()
{
	std::ofstream outFile;
	outFile.open("solution2.txt");
	outFile <<  "sample solution2\n";
	outFile.close();
	return 0;
}
