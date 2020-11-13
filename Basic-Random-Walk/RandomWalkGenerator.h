#ifndef __RandomWalkGenerator__
#define __RandomWalkGenerator__

#include <vector>

//
// Random walk class for price simulation.
//
class RandomWalkGenerator
{
public:
	// Constructors.
	RandomWalkGenerator(int size, double start, double step);
	RandomWalkGenerator(const RandomWalkGenerator& p);

	// Destructor.
	~RandomWalkGenerator();

	// Assignment.
	RandomWalkGenerator& operator=(const RandomWalkGenerator& p);

	// Return vector with the values of the walk.
	std::vector<double> generateWalk();

	// Get single step.
	double computeRandomStep(double currentPrice);

private:
	// number of steps, size of each step (%), starting priace.
	int m_numSteps;
	double m_stepSize;
	double m_initialPrice;
};


#endif