#pragma once

class Human
{
private:
    int iq;
public:
    Human(int iq);
    ~Human();
    void Think();
    void Walk(float speed);
};