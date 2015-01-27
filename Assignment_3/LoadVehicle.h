//
//  LoadVehicle.h
//  Assignment_3
//
//  Created by UHEVER on 14/10/20.
//  Copyright (c) 2014年 UHEVER. All rights reserved.
//

#ifndef LOADVEHICLE_H
#define LOADVEHICLE_H
#include "Vehicle.h"
#include <iostream>
using namespace std;
class LoadVehicle : virtual public Vehicle{
private:
    int numberOfWheels;  //轮子个数
    double loadCapacity;   //车辆负荷
    double towingCapacity;   // 车辆牵引力
protected:
    void L_printSpecifications();
    
public:
    //构造函数
    LoadVehicle(char *vl = "ottawa01", char *vt = "car", char *vm = "GM", double vg = 200, double vf = 6, int lnw = 6, double llc = 500, double ltc = 5000);
    
    //设置负荷，牵引力
    void setLoadData(double l, double t);
    //显示信息
    void printSpecifications();
    //计算行驶距离 ： 超过4个车轮，每增加两个车轮，车辆可行使的车程以5%减少.
    double computeTravelDistance();
    //获取轮子个数
    int get_numberOfWheels();
    //获取负重量
    double get_loadCapacity();
    //获取牵引力
    double get_towingCapacity();
};

#endif