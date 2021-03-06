// ===========================================================================
//                                   Libraries
// ===========================================================================
#include <stdio.h>
#include <stdlib.h>

// ===========================================================================
//                                 Project Files
// ===========================================================================
#include "agent.h"


//############################################################################
//                                                                           #
//                           Class Template_class                            #
//                                                                           #
//############################################################################

// ===========================================================================
//                         Definition of static attributes
// ===========================================================================
int agent::radius = 30;
// ===========================================================================
//                                  Constructors
// ===========================================================================
agent::agent(void)
{
	pos = new int[2];
	pos[0] = 0;
	pos[1] = 0;

	speed = new double[2];
	speed[0] = 0;
	speed[1] = 0;
}

agent::agent(int* p, double* s)
{
	pos = new int[2];
	pos[0] = p[0];
	pos[1] = p[1];

	speed = new double[2];
	speed[0] = s[0];
	speed[1] = s[1];
}
// ===========================================================================
//                                  Destructor
// ===========================================================================
agent::~agent(void)
{
	delete pos;
	delete speed;
}

// ===========================================================================
//                                 Public Methods
// ===========================================================================
int* agent::GetPos(void)
{
    return pos;
}

double* agent::GetSpeed(void)
{
	return speed;
}

/*int agent::nbAgent(agent a)
{
	int K = 0;

}

double* agent::alignment(agent a, int K)
{
	speed[0] = 1/K
}*/
// ===========================================================================
//                                Protected Methods
// ===========================================================================

// ===========================================================================
//                               Non inline accessors
// ===========================================================================
