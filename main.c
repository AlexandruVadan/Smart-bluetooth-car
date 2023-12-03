#include <SoftwareSerial.h>


//L293D shield
#define MOTOR_TRACTION_PIN_1  4
#define MOTOR_TRACTION_PIN_2  5

/* Leds */
#define LED_DAY_LIGHTS A1
#define LED_BRAKE_LIGHTS A2
#define LED_DIRECTION_INDICATOR_LEFT_LIGHTS A3
#define LED_DIRECTION_INDICATOR_RIGHT_LIGHTS A4

/* Buzzer */
#define BUZZER_PIN A0

// BT pins 0, 1
#define BLUETOOTH_PIN_0 0
#define BLUETOOTH_PIN_1 1


/* Defines of BT recieved messages */
#define BLUETOOTH_VALUE_FORWARD (char)("")
#define BLUETOOTH_VALUE_BACKWARD (char)("")

#define BLUETOOTH_DAYLIGHTS_ON (char)("")

#define BLUETOOTH_BRAKELIGHTS_ON (char)("")

#define BLUETOOTH_SIGNALLIGHTS_LEFT_ON (char)("")

#define BLUETOOTH_SIGNALLIGHTS_RIGHT_ON (char)("")

#define BLUETOOTH_WARNINGLIGHTS_ON (char)("")

#define BLUETOOTH_BUZZER_ON (char)("")

#define BLUETOOTH_TURN_LEFT (char)("")
#define BLUETOOTH_TURN_RIGHT (char)("")




/////////////////////////////////////////////////////////////////////////////
/* Define of the variables */
int BT_readValue = 0;

/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/*	BEGIN LIGHTS control functions */
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

void Led_DayLights_ON()
{
	digitalWrite(LED_DAY_LIGHTS,HIGH) ;
}

void Led_DayLights_OFF()
{
	digitalWrite(LED_DAY_LIGHTS,LOW) ;
}

/////////////////////////////////////////////////////////////////////////////

void Led_BrakeLights_ON()
{
	digitalWrite(LED_BRAKE_LIGHTS,HIGH) ;
}

void Led_BrakeLights_OFF()
{
	digitalWrite(LED_BRAKE_LIGHTS,LOW) ;
}

/////////////////////////////////////////////////////////////////////////////

void Led_SignalLightsLeft_ON()
{
	digitalWrite(LED_DIRECTION_INDICATOR_LEFT_LIGHTS,HIGH) ;
}

void Led_SignalLightsLeft_OFF()
{
	digitalWrite(LED_DIRECTION_INDICATOR_LEFT_LIGHTS,LOW) ;
}

void Led_SignalLightsRight_ON()
{
	digitalWrite(LED_DIRECTION_INDICATOR_RIGHT_LIGHTS,HIGH) ;
}

void Led_SignalLightsRight_OFF()
{
	digitalWrite(LED_DIRECTION_INDICATOR_Right_LIGHTS,LOW) ;
}

/////////////////////////////////////////////////////////////////////////////

void Led_WarningLights_ON()
{
	Led_SignalLightsRight_ON();
	Led_SignalLightsLeft_ON();
}

void Led_WarningLights_OFF()
{
	Led_SignalLightsRight_OFF();
	Led_SignalLightsLeft_OFF();
}
	
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/*	END LIGHTS control functions */
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

void Buzzer_ON()
{
	digitalWrite(BUZZER_PIN,HIGH) ;
}

void Buzzer_OFF()
{
	digitalWrite(BUZZER_PIN,LOW) ;
}

/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/*	BEGIN Traction control functions */
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
void Motor_Traction_Brake()
{
	digitalWrite(MOTOR_TRACTION_PIN_1,HIGH) ;
	digitalWrite(MOTOR_TRACTION_PIN_2,HIGH) ;
}

void Motor_Traction_Forward()
{
	digitalWrite(MOTOR_TRACTION_PIN_1,HIGH) ;
	digitalWrite(MOTOR_TRACTION_PIN_2,LOW) ;
}

void Motor_Traction_Backword()
{
	digitalWrite(MOTOR_TRACTION_PIN_1,LOW) ;
	digitalWrite(MOTOR_TRACTION_PIN_2,HIGH) ;
}
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/*	END Traction control functions */
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

//This will run only one time.
void setup()
{
  Serial.begin(38400); // Default communication rate of the Bluetooth module
  pinMode(MOTOR_TRACTION_PIN_1, OUTPUT);
  pinMode(MOTOR_TRACTION_PIN_2, OUTPUT);
  pinMode(LED_DAY_LIGHTS, OUTPUT);
  pinMode(LED_BRAKE_LIGHTS, OUTPUT);
  pinMode(LED_DIRECTION_INDICATOR_LEFT_LIGHTS, OUTPUT);
  pinMode(LED_DIRECTION_INDICATOR_RIGHT_LIGHTS, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);


}
 
 void BT_Read()
 {
	if(Serial.available() > 0)
	{ 
		// Checks whether data is comming from the serial port
		BT_readValue = Serial.read(); // Reads the data from the serial port
	}
 
 
	switch ( BT_readValue ) 
	{
		case (BLUETOOTH_VALUE_FORWARD):
		{
			/* Sw behaviour in this case */
			
		}break;
		
		case (BLUETOOTH_VALUE_FORWARD):
		{
			/* Sw behaviour in this case */
			
		}break;
		
		case (BLUETOOTH_VALUE_BACKWARD):
		{
			/* Sw behaviour in this case */
			
		}break;
		
		case (BLUETOOTH_DAYLIGHTS_ON):
		{
			/* Sw behaviour in this case */
			
		}break;
		
		case (BLUETOOTH_BRAKELIGHTS_ON):
		{
			/* Sw behaviour in this case */
			
		}break;
		
		case (BLUETOOTH_SIGNALLIGHTS_LEFT_ON):
		{
			/* Sw behaviour in this case */
			
		}break;
		
		case (BLUETOOTH_SIGNALLIGHTS_RIGHT_ON):
		{
			/* Sw behaviour in this case */
			
		}break;
		
		case (BLUETOOTH_WARNINGLIGHTS_ON):
		{
			/* Sw behaviour in this case */
			
		}break;
		
		case (BLUETOOTH_BUZZER_ON):
		{
			/* Sw behaviour in this case */
			
		}break;
		
		case (BLUETOOTH_TURN_LEFT):
		{
			/* Sw behaviour in this case */
			
		}break;
		
		case (BLUETOOTH_TURN_RIGHT):
		{
			/* Sw behaviour in this case */
			
		}break;
	}

 }


void loop() {
 
 BT_Read();
 
}










CODUL TESTAT FW and BW:
CODUL TESTAT FW and BW:
CODUL TESTAT FW and BW:
CODUL TESTAT FW and BW:
CODUL TESTAT FW and BW:
CODUL TESTAT FW and BW:
CODUL TESTAT FW and BW:
CODUL TESTAT FW and BW:
CODUL TESTAT FW and BW:				NOTE: BT_Pins to be moved to PIN 0 and 1; Now, Pin 0 and 1 are used for USB comunication.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <SoftwareSerial.h>

// BT pins 0, 1
//#define BLUETOOTH_PIN_0 0
//#define BLUETOOTH_PIN_1 1


/* Defines of BT recieved messages */
#define BLUETOOTH_VALUE_FORWARD (char)('F')
#define BLUETOOTH_VALUE_BACKWARD (char)('B')

#define BLUETOOTH_TURN_LEFT (char)('L')
#define BLUETOOTH_TURN_RIGHT (char)('R')

#define BLUETOOTH_VALUE_BACKWARD_LEFT (char)('H')
#define BLUETOOTH_VALUE_BACKWARD_RIGHT (char)('J')
#define BLUETOOTH_VALUE_FORWARD_LEFT (char)('G')
#define BLUETOOTH_VALUE_FORWARD_RIGHT (char)('I')

#define BLUETOOTH_VALUE_STOP (char)('S')


#define BLUETOOTH_DAYLIGHTS_ON (char)('5')

#define BLUETOOTH_BRAKELIGHTS_ON (char)('4')

#define BLUETOOTH_SIGNALLIGHTS_LEFT_ON (char)('3')

#define BLUETOOTH_SIGNALLIGHTS_RIGHT_ON (char)('2')

#define BLUETOOTH_WARNINGLIGHTS_ON (char)('0')

#define BLUETOOTH_BUZZER_ON (char)('1')

// BT pins 0, 1
#define BLUETOOTH_PIN_0 12
#define BLUETOOTH_PIN_1 13
// BT pins 4, 2
SoftwareSerial mySerial(BLUETOOTH_PIN_0, BLUETOOTH_PIN_1); // RX, TX

//L293D shield
#define MOTOR_TRACTION_PIN_1  4
#define MOTOR_TRACTION_PIN_2  5

/////////////////////////////////////////////////////////////////////////////
/* Define of the variables */
char BT_readValue = 0;

/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/*  BEGIN Traction control functions */
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
void Motor_Traction_Brake()
{
  digitalWrite(MOTOR_TRACTION_PIN_1,HIGH) ;
  digitalWrite(MOTOR_TRACTION_PIN_2,HIGH) ;
}

void Motor_Traction_Forward()
{
  digitalWrite(MOTOR_TRACTION_PIN_1,HIGH) ;
  digitalWrite(MOTOR_TRACTION_PIN_2,LOW) ;
}

void Motor_Traction_Backword()
{
  digitalWrite(MOTOR_TRACTION_PIN_1,LOW) ;
  digitalWrite(MOTOR_TRACTION_PIN_2,HIGH) ;
}
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/*  END Traction control functions */
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////


//This will run only one time.
void setup()
{
  Serial.begin(57600); // Default communication rate of the Bluetooth module
  mySerial.begin(9600);
  pinMode(MOTOR_TRACTION_PIN_1, OUTPUT);
  pinMode(MOTOR_TRACTION_PIN_2, OUTPUT);
}

 void BT_Read()
 {
    Serial.write("   ");
  if(mySerial.available() > 0)
  { 
    BT_readValue = 'N';

    // Checks whether data is comming from the serial port
    BT_readValue = (char)mySerial.read(); // Reads the data from the serial port
  }
 else
 {
  BT_readValue = 'Y';

 }
     Serial.println(BT_readValue);
  switch ( BT_readValue ) 
  {
    case (BLUETOOTH_VALUE_FORWARD):
    {
      /* Sw behaviour in this case */
      Motor_Traction_Forward();
      
    }break;
    
//    case (BLUETOOTH_VALUE_FORWARD):
//    {
//      /* Sw behaviour in this case */
//      
//    }break;
    
    case (BLUETOOTH_VALUE_BACKWARD):
    {
      /* Sw behaviour in this case */
      Motor_Traction_Backword();
      
    }break;
    
    case (BLUETOOTH_DAYLIGHTS_ON):
    {
      /* Sw behaviour in this case */
      
    }break;
    
    case (BLUETOOTH_BRAKELIGHTS_ON):
    {
      /* Sw behaviour in this case */
      
    }break;
    
    case (BLUETOOTH_SIGNALLIGHTS_LEFT_ON):
    {
      /* Sw behaviour in this case */
      
    }break;
    
    case (BLUETOOTH_SIGNALLIGHTS_RIGHT_ON):
    {
      /* Sw behaviour in this case */
      
    }break;
    
    case (BLUETOOTH_WARNINGLIGHTS_ON):
    {
      /* Sw behaviour in this case */
      
    }break;
    
    case (BLUETOOTH_BUZZER_ON):
    {
      /* Sw behaviour in this case */
      
    }break;
    
    case (BLUETOOTH_TURN_LEFT):
    {
      /* Sw behaviour in this case */
      
    }break;
    
    case (BLUETOOTH_TURN_RIGHT):
    {
      /* Sw behaviour in this case */
      
    }break;

    case BLUETOOTH_VALUE_STOP:
    {
      Motor_Traction_Brake();
    }    break;

    default:
    {}
    break;
  }

 }


void loop() {
 
 BT_Read();
 
}
