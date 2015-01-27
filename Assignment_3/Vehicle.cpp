//
//  Vehicle.cpp
//  Assignment_3
//
//  Created by UHEVER on 14/10/20.
//  Copyright (c) 2014年 UHEVER. All rights reserved.
//

#include <iostream>
#include "Vehicle.h"

using namespace std;

//Vehicle::Vehicle(){}


//带参数的构造函数
Vehicle::Vehicle(char *vl, char *vt, char *vm, double vg, double vf) : gasTankSize(vg), fuelConsumption(vf)
{
    if(!vl){
        licensePlate = NULL;
    }else{
        licensePlate = new char[strlen(vl) + 1];
        strcpy(licensePlate, vl);
    }
    if(!vt){
        type = NULL;
    }else{
        type = new char[strlen(vt) + 1];
        strcpy(type, vt);
    }
    if(!vm){
        make = NULL;
    }else{
        make = new char[strlen(vm) + 1];
        strcpy(make, vm);
    }
    //cout << "Vehicle构造函数初始化成功！" << endl;
}

//析构函数
Vehicle::~Vehicle(){
    delete [] licensePlate;
    delete [] type;
    delete [] make;
    cout << "调用Vehicle类析构函数！" << endl;
}

//设置车的制造商
void Vehicle::setMake(char *m){
    delete make;
    make  = new char[strlen(m) + 1];
    strcpy(make,m);
    cout << "设置制造商成功!" << endl;
}

//设置油量
void Vehicle::setFuelData(double g, double f){
    gasTankSize = g;
    fuelConsumption = f;
    cout << "设置油量成功！" << endl;
}

//设置车的类型
void Vehicle::setType(char *t){
    delete type;
    type = new char[strlen(t) + 1];
    strcpy(type,t);
    cout << "设置类型成功！" << endl;
    
}

//设置牌照
void Vehicle::setLicensePlate(char *l){
    delete [] licensePlate;
    licensePlate = new char[strlen(l) + 1];
    strcpy(licensePlate,l);
    cout << "牌照设置成功！" << endl;
}

//打印车辆的具体信息
void Vehicle::printSpecifications(){
    cout << "汽车牌照是:" << licensePlate << endl;
    cout << "汽车类型是:" << type << endl;
    cout << "汽车制造商是:" << make << endl;
    cout << "总油量:" << gasTankSize << endl;
    cout << "单位耗油:" << fuelConsumption << endl;
}

//计算车辆可能行驶的距离
double Vehicle::computeTravelDistance(){
    return gasTankSize * fuelConsumption;
}

//获得总油量
double Vehicle::getGasTankSize(){
    return gasTankSize;
}
//获得单位油量所跑路程
double Vehicle::getFuelConsumption(){
    return fuelConsumption;
}