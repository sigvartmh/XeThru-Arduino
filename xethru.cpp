/*************************************************** 
  This is a library for the XeThru Inspiration module
  Designed specifically to work with the XeThru Inspiration kit

  ----> http://www.adafruit.com/products/391
  ----> http://www.adafruit.com/products/1603
  
  These sensores use USART to communicate, 2 pins are required to  
  interface 
  Novelda invests time and resources providing this open source code, 
  please support Novelda and open-source software by purchasing 
  products from Novelda!
  Written by Sigvart M. Hovland for Xethru by Novelda.  
  BSD license, all text above must be included in any redistribution
 ****************************************************/

 #include<xethru.h>

XTI::XTI(){}

uint8_t XTI::crc8(uint8_t crcstart, unsigned char const *data, unsigned int length)
{
  uint8_t crc = crcstart;
  unsigned char *p_data = data;
  while (length) //add check for escape bytes 0x7F
  {
    --length;
    crc ^= *p_data++;
  }
  return crc; 
}

bool XTI::sendCommand(char[] cmd, int len){

}

uint32_t XTI::getResponse(){

}