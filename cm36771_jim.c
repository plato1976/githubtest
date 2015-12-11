#include <wiringPi.h>
#include <wiringPiI2C.h>
#include <stdio.h>

#define CM36771_SLAVE_ADD 0xC0
int main(void)

{
    delay (20) ;
    //wiringPiSetup () ;
    //pinMode (0, INPUT) ;
    //digitalWrite (0,HIGH) ;

    int CMI2CADR;
    
    CMI2CADR = wiringPiI2CSetup (0x60);
    wiringPiI2CWriteReg16(CMI2CADR,0x00,0x4500);
    //delay (20) ;
    wiringPiI2CWriteReg16 (CMI2CADR,0x03,0x75E0);
    //delay (20) ;
    wiringPiI2CWriteReg16 (CMI2CADR,0x00,0x4400);
	//delay (20) ;
    //wiringPiI2CWriteReg16 (CMI2CADR,0x03,0x74E0);
	//delay (20) ;
//WORD read_als_data(void)
//{
//BYTE buff[2];
//BYTE lsb,msb;
//WORD als_value;


int als_value = wiringPiI2CReadReg16 (CMI2CADR,0x09);	
printf ("%x\n",als_value);	
	
//}








	
//**************************************************************************************
	
	
   	//int i;

	//while(1)
    	//{
	//delay(10);
	//int als_value = wiringPiI2CReadReg16 (CMI2CADR,0xC109);
   
	// delay (500) ;
	// printf ("%x\n",als_value);
	// printf("%d\n",CMI2CADR);
    // printf("setup i2c sucessful\n");
    	//}
    return 0;
  
}








