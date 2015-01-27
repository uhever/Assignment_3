#ifndef EMERGENCY_EQUIPMENT_H
#define EMERGENCY_EQUIPMENT_H

class EmergencyEquipment{
private:
    int sirenNoiseDistance;   //可以听到警笛的距离
    int numBeds;		//病床数量
public:
    //构造函数
    EmergencyEquipment(int es = 500, int en = 2);
    //获取床位数量
    int getBedsNum();
    //显示信息
    void printSpecifications();
    
    
};

#endif