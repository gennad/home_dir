#ifndef ACCUMULATOR_H
#define ACCUMULATOR_H
class Accumulator
{
    double _sum;

  public:
    Accumulator()
      : _sum(0)
    { }

    void add(double value);
    double sum() const;
    void reset();
};
#endif
