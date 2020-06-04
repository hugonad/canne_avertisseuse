
#define GPSSerial Serial1

#define alerte_INIT 0 //initialisation send 
#define alerte_VIE  1
#define alerte_EAU  2 //??
#define alerte_MOV  3
#define alerte_BAT  4

#define tempstimeout 1000 //120000

//---------------------variables---------------------
//ISRs
volatile bool alarmOccurredEAU = false;
volatile bool alarmOccurredMOV = false;
volatile bool alarmOccurredCLK = false;

uint32_t timer = 0;         // setup + loop
//uint32_t temps = 0;       //que dans le loop
uint32_t GPStimeout = 0 ; //que dans le setup
//uint32_t FIXLED = 0;      //que dans le setup


uint8_t alerte=alerte_INIT;
uint8_t tour = 0;
uint8_t nombre = 0 ;

bool SEND_ALL = 0;
bool alarmOccurredEAUP = true;
bool alarmOccurredMOVP = true;
bool etatledGPS = false;
//bool TRAMEGPS = false;
bool GPS_ENABLE = false;

//IN
const uint8_t PinEAU = 4;
const uint8_t PinMOV = 5;
const uint8_t PinCLK = 7;

//OUT
//const uint8_t PinLEDGPS = 2;
const uint8_t GPS_EN = 3;
const uint8_t PinLEDEAU = 9;
const uint8_t PinLEDMOV = 8;
const uint8_t PinLEDSENDMSG = 10;