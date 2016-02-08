#include "stdafx.h"
#include "MathVector.h"


MathVector::MathVector()
{
}

MathVector::MathVector(float x, float y)
{
    this->x = x;
    this->y = y;
}


MathVector::~MathVector()
{
}

void MathVector::operator+(MathVector second)
{
    x += second.x;
    y += second.y;
}

void MathVector::operator-(MathVector second)
{
    x -= second.x;
    y -= second.y;
}

bool MathVector::operator==(MathVector second)
{
    return x == second.x && y == second.y;
}

