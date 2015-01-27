#include "PassengerVehicle.h"
#include <iostream>
using namespace std;

//构造函数
PassengerVehicle::PassengerVehicle(char *vl, char *vt, char *vm, double vg, double vf, int pnp) : Vehicle(vl, vt, vm, vg, vf), numberOfPassengers(pnp) {}

void PassengerVehicle::P_printSpecifications()
{
    cout<<"乘客数目: "<<numberOfPassengers<<endl;
}

//设置可搭乘的乘客人数
void PassengerVehicle::setNumPassengers(int numPassengers){
    this->numberOfPassengers = numPassengers;
}

//获取可搭乘的乘客人数
int PassengerVehicle::get_numberOfPassengers(){
    return numberOfPassengers;
}

//显示信息
void PassengerVehicle::printSpecifications(){
    Vehicle::printSpecifications();
    P_printSpecifications();
}

//计算可行驶路程 :  超过5个人每多搭乘1个人行程将以2.5%减少
double PassengerVehicle::computeTravelDistance(){
    return (Vehicle::getGasTankSize() * Vehicle::getFuelConsumption() * (100 - (numberOfPassengers - 5) * 2.5) / 100);
}
