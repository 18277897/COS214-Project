#include "MediumCreator.h"

MediumCreator::MediumCreator() {}
Tyre * MediumCreator::produceProduct() {
    Tyre* ty = new Medium();
    return ty;
}