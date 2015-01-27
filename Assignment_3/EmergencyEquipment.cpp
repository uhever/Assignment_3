#include "EmergencyEquipment.h"
#include <iostream>
using namespace std;
//构造函数
EmergencyEquipment::EmergencyEquipment(int es, int en) : sirenNoiseDistance(es), numBeds(en) {}

//获取床位数量
int EmergencyEquipment::getBedsNum(){
    return numBeds;
}

//显示信息
void EmergencyEquipment::printSpecifications(){
    cout <<  "可以听到警笛的距离是：" << sirenNoiseDistance << endl;
    cout << "病床数量是：" << numBeds << endl;
}