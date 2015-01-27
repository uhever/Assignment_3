//
//  LoadVehicle.cpp
//  Assignment_3
//
//  Created by UHEVER on 14/10/20.
//  Copyright (c) 2014年 UHEVER. All rights reserved.
//

#include "LoadVehicle.h"

LoadVehicle:: LoadVehicle(char *vl, char *vt, char *vm, double vg, double vf, int lnw, double llc, double ltc) : Vehicle(vl, vt, vm, vg, vf), numberOfWheels(lnw), loadCapacity(llc), towingCapacity(ltc) { }

void LoadVehicle::L_printSpecifications()
{
    cout<<"车轮个数: "<<numberOfWheels<<endl;
    cout<<"车辆负载重量: "<<loadCapacity<<endl;
    cout<<"车辆牵引力: "<<towingCapacity<<endl;
}

//设置负荷，牵引力
void LoadVehicle::setLoadData(double l, double t){
    loadCapacity = l;
    towingCapacity = t;
}

//显示信息
void LoadVehicle::printSpecifications(){
    Vehicle::printSpecifications();
    L_printSpecifications();
}

//计算行驶距离 ： 超过4个车轮，每增加两个车轮，车辆可行使的车程以5%减少.
double LoadVehicle::computeTravelDistance(){
    return (getGasTankSize() * getFuelConsumption() * (100 - (numberOfWheels - 4) / 2 * 5) / 100);
}

//获取轮子个数
int LoadVehicle::get_numberOfWheels(){
    return numberOfWheels;
}

//获取车辆负荷
double LoadVehicle::get_loadCapacity(){
    return loadCapacity;
}

//获取车辆牵引力
double LoadVehicle::get_towingCapacity(){
    return towingCapacity;
}

