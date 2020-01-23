#include "Files.h"

Files::Files() {
	DWORD len = GetCurrentDirectoryA(0, NULL);
	directory.resize(len-1);
	GetCurrentDirectoryA(len, &directory[0]);
}
Files::~Files() {	
}
bool Files::isFileExist(std::string fName) {
	makeFilePath(fName);
	struct stat buffer;
	return (!stat(filePath.c_str(), &buffer));
}
void Files::makeFilePath(std::string fName) {
	fileName = fName;
	filePath = directory + '\\' + fileName;
}
bool Files::open(std::string fName) {
	makeFilePath(fName);
	file.open(filePath, std::ios::out | std::ios::app);
	return (file.is_open());
}
bool Files::write(std::string data) {
	file.write(data.c_str(), data.size());
	return (file.good());
}
bool Files::close() {
	if (file.is_open()) {
		file.close();
		return true;
	}
	return false;
}