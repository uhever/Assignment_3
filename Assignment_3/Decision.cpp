#include "Decision.h"
#include "EmergencyVehicle.h"
#include <iostream>
#include <list>
using namespace std;

//构造函数，接收存储各类车辆信息的容器
Decision::Decision(list<Vehicle*>& d) : vehicleList(d) {}

//输出所有车辆的具体信息
void Decision::printVehiclesSpecifications(){
    list<Vehicle*>::iterator itor = vehicleList.begin();
    while (itor != vehicleList.end()){
        (*(*itor++)).printSpecifications();
        cout << endl;
    }
}

//单独打印紧急车辆的信息
void Decision::printEmergencyVehicles(){
    list<Vehicle*>::iterator itor = vehicleList.begin();
    //EmergencyVehicle *e = dynamic_cast<EmergencyVehicle*>(*itor);
    //e->printSpecifications();
    
    
    while (itor != vehicleList.end()){
        
        EmergencyVehicle *e;
        if (e = dynamic_cast<EmergencyVehicle*>(*itor++)){
            e->printSpecifications();
            cout << endl;
        }
    }
    
}


//不用中途加油能够行使800km以上的紧急车辆的数量
int Decision::numberLongDistanceEmergencyVehicles(){
    list<Vehicle *>::iterator itor = vehicleList.begin();
    int count = 0;
    while (itor != vehicleList.end()){
        EmergencyVehicle *e;
        if (e = dynamic_cast<EmergencyVehicle*>(*(itor++))){
            if (e->computeTravelDistance() > 800){
                count ++;
            }
        }
    }
    cout << "能行驶800km以上的紧急车辆： " ;
    return count;
}

//紧急事件能调遣的床位数量
int Decision::numberBeds(){
    int count = 0;
    EmergencyEquipment *e;
    list<Vehicle *>::iterator itor = vehicleList.begin();
    while (itor != vehicleList.end()){
        
        if (e = dynamic_cast<EmergencyEquipment*>(*(itor++))){
            count += e->getBedsNum();
        }
    }
    cout << "可调遣的床位数量是：" ;
    return count;
}

//紧急事件可转移的乘客数
int Decision::numPassengers(){
    int count = 0;
    list<Vehicle*>::iterator itor = vehicleList.begin();
    while (itor != vehicleList.end()){
        PassengerVehicle *p;
        if (p = dynamic_cast<PassengerVehicle*>(*(itor++))){
            count += p->get_numberOfPassengers();
        }
    }
    cout << "可转移的乘客数：" ;
    return count;
}

//紧急事件下该城市可调动物资重量
double Decision::numCapacity(){
    double count_l = 0;
    double count_t = 0;
    list<Vehicle*>::iterator itor = vehicleList.begin();
    while (itor != vehicleList.end()){
        LoadVehicle *l;
        if (l = dynamic_cast<LoadVehicle*>(*(itor++))){
            count_l += l->get_loadCapacity();
            count_t += l->get_towingCapacity();
        }
    }
    cout << "可载重是：" << count_l << endl;
    cout << "总重量是：" << count_t << endl;
    return 0;
}