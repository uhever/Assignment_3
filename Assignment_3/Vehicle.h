//
//  Vehicle.h
//  Assignment_3
//
//  Created by UHEVER on 14/10/20.
//  Copyright (c) 2014年 UHEVER. All rights reserved.
//

#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle{
private:
    char *licensePlate; //车的车牌(执照)作为它的 id,一个车牌最多可由8个字符组成。
    char *type;  //车辆类型(例如：汽车，卡车，消防车)
    char *make;  //车辆的制造商
    double gasTankSize;  //总油量
    double fuelConsumption;  //单位耗油量所跑的路程
public:
    //Vehicle();
    Vehicle(char *vl = "ottawa01", char *vt = "car", char *vm = "GM", double vg = 100, double vf = 10);
    //析构函数
    ~Vehicle();
    //设置制造商
    void setMake(char *m);
    //设置油量信息
    void setFuelData(double gasTankSize, double fuelConsumption);
    //设置车辆类型
    void setType(char *type);
    //设置车牌
    void setLicensePlate(char *license);
    
    //获得总油量
    double getGasTankSize();
    //获得单位油量所跑路程
    double getFuelConsumption();
    
    virtual void printSpecifications();  //打印车辆的具体信息
    virtual double computeTravelDistance();  //计算车辆可能行驶的距离
    
    
};

#endif