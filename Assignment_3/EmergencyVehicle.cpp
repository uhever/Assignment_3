#include "EmergencyVehicle.h"

//构造函数
EmergencyVehicle::EmergencyVehicle(char *vl, char *vt, char *vm, double vg, double vf, int lnw, double llc, double ltc, double pnp, int es, int en, int evnw, char *evdr, char *evsn):Vehicle(vl,vt,vm,vg,vf),LoadVehicle(vl,vt,vm,vg,vf,lnw,llc,ltc),PassengerVehicle(vl,vt,vm,vg,vf,pnp),EmergencyEquipment(es,en),numWorkers(evnw),driver(new char[strlen(evdr) + 1]),station(new char[strlen(evsn) + 1]) {
    strcpy(driver,evdr);
    strcpy(station,evsn);
}

void EmergencyVehicle::E_printSpecifications()
{
    cout << "车内工作人员个数: "<< numWorkers << endl;
    cout << "驾驶者名字: " << driver << endl;
    cout << "停靠车站: " << station << endl;
}

//析构函数
EmergencyVehicle::~EmergencyVehicle(){
    if (driver!=NULL)
        delete [] driver;
    if (station!=NULL)
        delete [] station;
}

//显示信息
void EmergencyVehicle::printSpecifications(){
    Vehicle::printSpecifications();
    LoadVehicle::L_printSpecifications();
    PassengerVehicle::P_printSpecifications();
    E_printSpecifications();
    EmergencyEquipment::printSpecifications();
    
}
//计算行驶距离
double EmergencyVehicle::computeTravelDistance(){
    double a=getGasTankSize()*getFuelConsumption()*(getGasTankSize()-(get_numberOfWheels()/2)*5)/100;
    double b=getGasTankSize()*getFuelConsumption()*(100-get_numberOfPassengers()*2.5)/100;
    if(a>b)
				{
                    return b;
                }
    else
				{
                    return a;
                }	
}