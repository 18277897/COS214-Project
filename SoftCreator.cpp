#include "SoftCreator.h"

SoftCreator::SoftCreator(){}
Tyre * SoftCreator::produceProduct() {
    Tyre* ty = new Soft();
    return ty;
}