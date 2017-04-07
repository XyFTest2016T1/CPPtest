#include<iostream>
#include<fstream>

int main(int argc, char* argv[])
{
	int ret_code = 0;

	std::ifstream inFile((std::string(argv[1]) + std::string("/solution1.txt")).c_str(), std::ios::binary);
	std::ofstream outFile("solution1.txt", std::ios::binary);

	if(inFile && outFile)
		outFile << inFile.rdbuf();
	else
	{
		std::cerr << "Error reading/writing specified files" << std::endl;
		ret_code = 1;
	}

	outFile.close();
	inFile.close();

	return ret_code;

}
