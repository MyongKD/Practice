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

	bool open(std::string fPath);
	bool close();
	bool write(std::string data);
	bool isFileExist(std::string fPath);
};