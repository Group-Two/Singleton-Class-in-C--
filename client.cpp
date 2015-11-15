/*
 * client.cpp
 *
 *  Created on: 2015Äê11ÔÂ15ÈÕ
 *      Author: Ricardo.J
 */
#include "Singleton.h"

int main()
{
    Singleton *test1,*test2;
    test1 = Singleton::getInstance();
    test2 = Singleton::getInstance();
    if(test1 == test2) {
    	cout<<"test1 = test2, there is an only one Singleton instance."<<endl;
    }
    return 0;
}

