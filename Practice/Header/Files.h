#pragma once
#include<Windows.h>
#include<fstream>

class Files
{
private:
	std::string directory;
	std::string fileName;
	std::string filePath;
	std::ofstream file;
	void makeFilePath(std::string fName);

public:
	Files();
	~Files();

	bool isFileExist(std::string fName);
	bool open(std::string fPath);
	bool write(std::string data);
	bool close();
};