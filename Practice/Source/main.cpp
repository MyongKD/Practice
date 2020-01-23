#include <iostream>
#include"Files.h"
#include"random.h"
#include<string>
int main()
{
    Files Log;
    Files ErrorLog;
    Files netLog;

    if(Log.isFileExist("test.txt")) 
        Log.open("test.txt");
    if(Log.isFileExist("error_Log.txt")) 
        ErrorLog.open("error_Log.txt");
    if(Log.isFileExist("send_Log.txt")) 
        netLog.open("send_Log.txt");

    int64_t seed = makeTimeSeed();
    for (int i = 0; i < 100; i++) {
        Log.write(std::to_string(makeRandom_8bit(seed))+" ");
        ErrorLog.write(std::to_string(makeRandom_16bit(seed)) + " ");
        netLog.write(std::to_string(makeRandom_32bit(seed)) + " ");
    }

    Log.close();
    ErrorLog.close();
    netLog.close();

    std::cout << "The End" << std::endl;
}
