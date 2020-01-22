#include <iostream>
#include"Files.h"

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
}
