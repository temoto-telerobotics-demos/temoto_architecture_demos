
#ifndef ta_navigation_goal_MACROS_H
#define ta_navigation_goal_MACROS_H

#define GET_PARAMETER(name, type) getUmrfPtr()->getInputParameters().getParameterData<type>(name)
#define SET_PARAMETER(name, type, value) getUmrfPtr()->getOutputParametersNc().setParameter(name, type, boost::any(value))

#endif
