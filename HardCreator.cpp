#include "HardCreator.h"

HardCreator::HardCreator() {}
Tyre * HardCreator::produceProduct() {
    Tyre* ty = new Hard();
    return ty;
}