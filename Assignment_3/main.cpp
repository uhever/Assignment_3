//
//  main.cpp
//  Assignment_3
//
//  Created by UHEVER on 14/10/20.
//  Copyright (c) 2014年 UHEVER. All rights reserved.
//

#include <iostream>
#include "LoadVehicle.h"
#include "PassengerVehicle.h"
#include "EmergencyVehicle.h"
#include "Decision.h"

int main(int argc, const char * argv[]) {
    
    list<Vehicle*> vehicleList;
    Decision Decision(vehicleList);
    
    LoadVehicle *lv1 = new LoadVehicle("ottawa11","car","FORD",100,10,6,500,5000);
    LoadVehicle *lv2 = new LoadVehicle("ottawa12","car","GM",200,13,8,800,8000);
    LoadVehicle *lv3 = new LoadVehicle("ottawa13","car","Honda",130,11,6,600,6000);
    vehicleList.push_back(lv1);
    vehicleList.push_back(lv2);
    vehicleList.push_back(lv3);
    
    PassengerVehicle *pv1 = new PassengerVehicle("ottawa21","car","Chrysler",90,10,6);
    PassengerVehicle *pv2 = new PassengerVehicle("ottawa22","truck","FORD",200,12,32);
    PassengerVehicle *pv3 = new PassengerVehicle("ottawa23","van","Toyota",110,9,15);
    PassengerVehicle *pv4 = new PassengerVehicle("ottawa24","van","Honda",120,10,24);
    vehicleList.push_back(pv1);
    vehicleList.push_back(pv2);
    vehicleList.push_back(pv3);
    vehicleList.push_back(pv4);
    
    EmergencyVehicle *ev1 = new EmergencyVehicle("ottawa31","van","FORD",90,11,6,5,450,3);
    EmergencyVehicle *ev2 = new EmergencyVehicle("ottawa32","truck","FORD",200,14,8,480,5200,5,600,16,6,"Jim","Park");
    EmergencyVehicle *ev3 = new EmergencyVehicle("ottawa33","van","FORD",150,16,6,550,5400,5,400,8,4,"Jack","Hotel");
    vehicleList.push_back(ev1);
    vehicleList.push_back(ev2);
    vehicleList.push_back(ev3);
    
    
    
    int x;
    cout<<"<<欢迎来到渥太华车辆管理系统！>>"<<endl;
    cout<<"1.输出所有的车辆的具体信息"<<endl;
    cout<<"2.仅输出紧急车辆的具体信息"<<endl;
    cout<<"3.输出不用中途加油能够行使800km以上的紧急车辆的数量"<<endl;
    cout<<"4.输出紧急情况下该城市能够调用的移动床位的数量"<<endl;
    cout<<"5.输出紧急事件下该城市可调动的乘客人数"<<endl;
    cout<<"6.输出紧急事件下该城市可调动物资情况"<<endl;
    cout<<endl<<"=>请输入序号选择：" << endl;
    
    
    cin>>x;
    
    while (x > 0 && x < 7){
        switch(x){
            case 1:
                cout<<"---------------所有的车辆的具体信息----------------"<<endl;
                Decision.printVehiclesSpecifications();
                cout<<"--------------------------------------------------"<<endl;
                break;
            case 2:
                cout<<"---------------紧急车辆的具体信息----------------"<<endl;
                Decision.printEmergencyVehicles();
                cout<<"--------------------------------------------------"<<endl;
                break;
            case 3:
                cout<<"------不用中途加油能够行使800km以上的紧急车辆的数量------"<<endl;
                cout << Decision.numberLongDistanceEmergencyVehicles() << endl;;
                cout<<"--------------------------------------------------"<<endl;
                break;
            case 4:
                cout<<"--------紧急情况下该城市能够调用的移动床位的数量--------"<<endl;
                cout << Decision.numberBeds() << endl;;
                cout<<"--------------------------------------------------"<<endl;
                break;
            case 5:
                cout<<"--------紧急事件下该城市可调动的乘客人数--------"<<endl;
                cout << Decision.numPassengers() << endl;;
                cout<<"--------------------------------------------------"<<endl;
                break;
            case 6: 
                cout<<"--------紧急事件下该城市可调动的物资重量--------"<<endl;
                cout << Decision.numCapacity() << endl;;
                cout<<"--------------------------------------------------"<<endl;
                break;
            default:
                cout << "Error !" << endl;
        }
        cin>>x;
    }
    
    
    
    delete lv1;
    delete lv2;
    delete lv3;
    delete pv1;
    delete pv2;
    delete pv3;
    delete pv4;
    delete ev1;
    delete ev2;
    delete ev3;
    
    
    return 0;
}
