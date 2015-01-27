#ifndef EMERGENCY_VEHICLE_H
#define EMERGENCY_VEHICLE_H

#include "EmergencyEquipment.h"
#include "LoadVehicle.h"
#include "PassengerVehicle.h"

class EmergencyVehicle : public LoadVehicle, public PassengerVehicle, public EmergencyEquipment{
private:
    int numWorkers;  //为每辆车分配的工作人员
    char *driver;	//驾驶员
    char *station;	//车辆停靠的车站
protected:
    void E_printSpecifications();
public:
    //构造函数
    EmergencyVehicle(char *vl = "ottawa01", char *vt = "van", char *vm = "GM", double vg = 100, double vf = 11, int lnw = 6, double llc = 500, double ltc = 5000, double pnp = 5, int es = 500, int en = 2, int evnw = 4, char *evdr = "Tom", char *evsn = "Hospital");
    
    //析构函数
    ~EmergencyVehicle();
    //显示信息
    void printSpecifications();
    //计算行驶距离
    double computeTravelDistance();
};


#endif