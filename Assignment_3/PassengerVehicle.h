#ifndef PassengerVehicle_H
#define PassengerVehicle_H

#include "Vehicle.h"

class PassengerVehicle : virtual public Vehicle{
private:
    int numberOfPassengers;  //可搭乘乘客的数量
    
protected:
    void P_printSpecifications();
public:
    //构造函数
    PassengerVehicle(char *vl = "ottawa01", char *vt = "van", char *vm = "GM", double vg = 200, double vf = 6, int pnp = 5);
    //设置可搭乘的乘客人数
    void setNumPassengers(int numPassengers);
    //获取可搭乘的乘客人数
    int get_numberOfPassengers();
    //显示信息
    void printSpecifications();
    //计算可行驶路程
    double computeTravelDistance();
    
    
};

#endif