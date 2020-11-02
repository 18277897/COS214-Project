//
// Created by 27728 on 2020/11/02.
//

#ifndef UNTITLED13_TYRE_H
#define UNTITLED13_TYRE_H


class Tyre {
private:

public:
    Tyre();
    virtual void print()=0;
};

class Soft: public Tyre {
private:

public:
    Soft();
    void print();
};
class Medium: public Tyre {
private:

public:
    Medium();
    void print();
};
class Hard: public Tyre {
private:

public:
    Hard();
    void print();
};

#endif //UNTITLED13_TYRE_H
