//#include"utills.h"
//
//std::ofstream openFile(std::string fPath) {
//	bool res;
//	static std::ofstream file;
//	file.open(fPath, std::ios::out, std::ios::trunc);
//	if (file.is_open()) return file;
//}
//bool closeFile(std::ofstream file) {
//	if (file.is_open()) {
//		file.close();
//		return true;
//	}
//	return false;
//}
//bool writeData(std::ofstream file, std::string data) {
//	file.write(data.c_str(),data.size());
//	return true;
//}
//bool isFileExist(std::string fPath) {
//	struct stat buffer;
//	return (!stat(fPath.c_str(), &buffer));
//}