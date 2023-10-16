#pragma once
#include "../inc/Bull.h"
#include "../inc/Human.h"


class Satyr: public Human, public Bull
{
private:
    float height;
    bool canPlayFlute;
public:
    Satyr(float height, bool canPlayFlute, int iq, float weight);
    ~Satyr();
    void PlayFlute();
    void Walk(float speed);
};