#include "accumulator.h"
#include <sstream>

void Accumulator::add(double value)
{
  _sum += value;
}

double Accumulator::sum() const
{
  return _sum;
}

void Accumulator::reset()
{
  _sum = 0;
}
