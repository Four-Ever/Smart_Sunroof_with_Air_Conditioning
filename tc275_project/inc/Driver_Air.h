#ifndef DRIVER_Air
#define DRIVER_Air

/***********************************************************************/
/*Include*/ 
/***********************************************************************/

#include "Ifx_Types.h"
#include "Driver_Adc.h"
#include <math.h>
/***********************************************************************/
/*Typedef*/ 
/***********************************************************************/
typedef struct {
    float CO;         // PPM 계산에 사용되는 상수 a
    float Alcohol;         // PPM 계산에 사용되는 상수 b
    float CO2;     // PPM 계산을 위한 보정값
    float NH4;       // 계산된 PPM 값
} Gas;

/***********************************************************************/
/*Define*/ 
/***********************************************************************/
#define Air_Pin 4
#define COa 605.18
#define COb -3.937
#define Alcohola 77.255
#define Alcoholb -3.18
#define CO2a 110.47
#define CO2b -2.862
#define NH4a 102.2
#define NH4b -2.473
#define R0 78.618
#define Rl 4.7

/***********************************************************************/
/*External Variable*/ 
/***********************************************************************/



/***********************************************************************/
/*Global Function Prototype*/ 
/***********************************************************************/
extern float calculatePPM(float a, float b, float ratio, float setup);
extern Gas Air(void);


#endif /* DRIVER_STM */
