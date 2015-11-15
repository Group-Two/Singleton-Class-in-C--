#include <iostream>

using namespace std;

class Singleton
{
public:
    static Singleton* getInstance();
    ~Singleton()
    {
        instanceFlag = false;
    }
private:
    static bool instanceFlag;
    static Singleton *instance;
    Singleton();

};

bool Singleton::instanceFlag = false;
Singleton* Singleton::instance = NULL;

Singleton::Singleton(){}

Singleton* Singleton::getInstance()
{
    if(! instanceFlag)
    {
        instance = new Singleton();
        instanceFlag = true;
        return instance;
    }
    else
    {
        return instance;
    }
}


