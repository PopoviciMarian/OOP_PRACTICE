#include <iostream>
#include "NumberList.h"

int main(){
    NumberList numberList;
    numberList.Init();
    numberList.Add(4);
    numberList.Add(3);
    numberList.Add(1);
    numberList.Add(8);
    numberList.Add(6);
    numberList.Add(9);
    numberList.Add(1);
    numberList.Add(7);
    numberList.Print();
    numberList.Sort();
    numberList.Print();
}
