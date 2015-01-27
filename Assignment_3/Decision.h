#ifndef DECISION_H
#define DECISION_H
#include <list>
#include "Vehicle.h"
using namespace std;

class Decision{
private:
    list <Vehicle*>& vehicleList;
public:
    //构造函数，接收存储各类车辆信息的容器
    Decision(list<Vehicle*>& d);
    //输出所有车辆的具体信息
    void printVehiclesSpecifications();
    //单独打印紧急车辆的信息
    void printEmergencyVehicles();
    //不用中途加油能够行使800km以上的紧急车辆的数量
    int numberLongDistanceEmergencyVehicles();
    //紧急事件能调遣的床位数量
    int numberBeds();
    //紧急事件可转移的乘客数
    int numPassengers();
    //紧急事件下该城市可调动物资重量
    double numCapacity();
    
};


#endif