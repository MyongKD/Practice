#include <iostream>
#include"Files.h"
#include"random.h"
int main()
{
    Files Log;
    Files ErrorLog;
    Files netLog;

    Log.open("test.txt");
    ErrorLog.open("error_Log.txt");
    netLog.open("send_Log.txt");

    Log.close();
    ErrorLog.close();
    netLog.close();

    int64_t seed = makeTimeSeed();
    for(int i =0;i<10;i++)printf("%lld \n", makeRandom_64bit(seed));
    std::cout << "The End" << std::endl;
}
