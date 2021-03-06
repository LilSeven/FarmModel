//
// Created by Ǳˮ�� on 2018/10/29.
//

#ifndef FARMMODEL_PLANTSFIELD_H
#define FARMMODEL_PLANTSFIELD_H

#include <vector>
#include "AbstractPlant.h"
#include "Wheat.h"

using namespace std;

/**
 * A field to store all plants instance
 */
class PlantsField {
private:
    vector<AbstractPlant*> farmField;
public:
    PlantsField(void){}
    void add(){
        farmField.push_back(new Wheat(5));
    }
};


#endif //FARMMODEL_PLANTSFIELD_H
