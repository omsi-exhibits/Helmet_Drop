// IR - D8
// Reed - D4
// Limit Switch - D0
// Motor Dir - D10
// Motor Step - D9
// Motor Dir(-) - D5 OR GND
// Motor Step(-) - D7 OR GND
// Motor En - D1
// Locked Light - D12
// Unlocked Light - D11
// Mag Lock - D6


#define irIN 8
#define limitSwitch 0
#define reedIn 4
#define doorLatchpin 6
#define lockedLight 12
#define unlockedLight 11

#define motorStepPos 9
#define motorStepNeg 5
#define motorDirPos 10
#define motorDirNeg 7
#define motorEnb 1
#define motorSpeed 35

//#define debug
//#define debugverbose