# VOICE-BASED-HOME-AUTOMATION-SYSTEM VOICE BASED
#include<softwareserial.h> 
String value; int TXD=11; 
int RXD=10;  
int 
servopsition; 
Bluetooth(TxD,RxD);  
Void setup() {  
PinMode(2,output);  
Pin (mode3,output);  
Serial.Begin(9600);  
}  
Void loop () {  
Serial.peintln(value);  
Softwareserial 
If (Bluetooth. Available ())  
{  
Value=Bluetooth.readstring();  
If (value==”all LED turn on”)  
{  
Digital wrire(2,HIGH);  
Digitalwrite (3, HIGH);  
}  
If (value==”all LED turn off”)  
{  
Digitalwrite (2, LOW);  
Digitalwrite (2, LOW);  
}  
If (value==”turn on Red LED”)  
{  
Digitalwrite (2, HIGH);  
}  
If (value==”turn on green LED);  
{  
Digital write (3, HIGH);  
}  
If (VALUE==”turn on red LED)  
{  
Digital write (2,LOW);  
}  
If (value==”tune on green LED”);  
Digitalwrite (3, LOW);  
}  
}  
} 
