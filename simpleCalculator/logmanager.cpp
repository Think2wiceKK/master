#include "logmanager.h"
#include <iostream>
#include <stddef.h>
#include <fstream>
#include <ios>
#include "Utilities.h"
using namespace std;

logmanager* logmanager::singLogmanagerObj = NULL;


logmanager* logmanager::GetInstance()
{
    if(!singLogmanagerObj)
    {
        singLogmanagerObj = new logmanager;
    }
    return singLogmanagerObj;
}

void logmanager::WriteLog(const string functionName , string value)
{

    //const char *path = "%programdata%\\logs.txt";
    const char *path = "G:\\qtProjects\\logs.txt";
    ofstream out;
    out.open(path , ios::out | ios::app);

    if(!out)
    {
        cout<<"File creation failed";
    }
    else
    {
        out << GetCurrentTime() <<" : "<<"Function: "<<functionName<<" "<<"Writing logs "<<value<<endl;
    }
}

