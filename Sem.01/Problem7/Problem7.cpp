

#include <iostream>

int main()
{
    int money;
    std::cin >> money;
     
    int lv100 = money / 100;
    money -= lv100 * 100;
    int lv50 = money / 50;
    money -= lv50 * 50;
    int lv20 = money / 20;
    money -= lv20 * 20;
    int lv10 = money / 10;
    money -= lv10 * 10;
    int lv5 = money / 5;
    money -= lv5 * 5;
    int lv2 = money / 2;
    money -= lv2 * 2;
    int lv1 = money / 1;
    money -= lv1*1;


    std::cout << lv100 << "x100lv " << lv50 << "x50lv " << lv20 << "x20lv " << lv10 << "x10lv " << lv5 << "x5lv " << lv2 << "x2lv " << lv1 << "x1lv ";
}

