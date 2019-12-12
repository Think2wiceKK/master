#ifndef LOGMANAGER_H
#define LOGMANAGER_H
#include <iostream>

class logmanager
{

private: static logmanager *singLogmanagerObj;

private: logmanager(){}

public:
    static logmanager *GetInstance();

    void WriteLog(const std::string functionName , std::string value);
};



#endif // LOGMANAGER_H
