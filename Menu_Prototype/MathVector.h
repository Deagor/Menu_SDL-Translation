#pragma once
class MathVector
{
public:
    float x, y;
    
    MathVector();
    MathVector(float x, float y);

    ~MathVector();

    void operator+(MathVector second);

    void operator-(MathVector second);

    bool operator==(MathVector second);

private:
    
};

