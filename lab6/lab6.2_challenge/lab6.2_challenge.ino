#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
String inputSerial;
uint8_t duck[8] = { 0x00, 0x0c, 0x1d, 0x0f, 0x0f, 0x06, 0x00, 0x00 };
uint8_t heart[8] = { 0x00, 0x0a, 0x1f, 0x1f, 0x0e, 0x04, 0x00, 0x00 };
uint8_t name0[8] = {  0x1F,
  0x11,
  0x01,
  0x19,
  0x19,
  0x11,
  0x11,
  0x1F };
uint8_t name1[8]  = {0x1F,
  0x11,
  0x1D,
  0x15,
  0x19,
  0x11,
  0x00,
  0x00
  };
uint8_t name2[8]={
  0x00,
  0x1B,
  0x1B,
  0x0D,
  0x09,
  0x00,
  0x00,
  0x00
  };
 uint8_t name3[8]={ 
  0x08,
  0x0F,
  0x00,
  0x1E,
  0x12,
  0x02,
  0x0E,
  0x12
  };
 uint8_t name4[8]={0x00,
  0x00,
  0x19,
  0x19,
  0x09,
  0x09,
  0x09,
  0x0F
  };
uint8_t name5[8]={ 0x11,
  0x01,
  0x19,
  0x19,
  0x11,
  0x11,
  0x1F
  };
uint8_t name6[8]  = {0x1F,
  0x11,
  0x1D,
  0x15,
  0x19,
  0x11,
  0x00,
  0x00
  };
uint8_t name7[8]={0x00,
  0x00,
  0x1A,
  0x1A,
  0x0A,
  0x0B,
  0x0F,
  0x0B
  };
uint8_t name8[8]={0x11,
  0x01,
  0x19,
  0x19,
  0x11,
  0x11,
  0x1F };
uint8_t name9[8]={0x00,
  0x00,
  0x1A,
  0x1A,
  0x0A,
  0x0B,
  0x0F,
  0x0B
  };
uint8_t name10[8]={
  0x00,
  0x00,
  0x12,
  0x12,
  0x12,
  0x12,
  0x1B,
  0x1B
  };
uint8_t name11[8]={
  0x00,
  0x1B,
  0x15,
  0x11,
  0x15,
  0x19,
  0x11,
  0x00
};
uint8_t name12[8]={0x12,
  0x1D,
  0x01,
  0x1F,
  0x01,
  0x0F,
  0x11,
  0x11
  };
uint8_t name13[8]={0x00,
  0x1B,
  0x1B,
  0x0D,
  0x09,
  0x00,
  0x00,
  0x00};
uint8_t name14[8]={0x00,
  0x1F,
  0x10,
  0x1E,
  0x02,
  0x02,
  0x06,
  0x06};
uint8_t name15[8]={0x01,
  0x02,
  0x04,
  0x1D,
  0x15,
  0x15,
  0x16,
  0x16};
uint8_t name16[8]={0x04,
  0x04,
  0x00,
  0x0F,
  0x11,
  0x01,
  0x03,
  0x03};
uint8_t name17[8]={0x00,
  0x00,
  0x1F,
  0x11,
  0x01,
  0x01,
  0x01,
  0x01};
uint8_t name18[8]={0x00,
  0x00,
  0x1C,
  0x04,
  0x07,
  0x14,
  0x0F,
  0x04};
uint8_t name19[8]={ 0x04,
  0x0C,
  0x14,
  0x04,
  0x04,
  0x04,
  0x06,
  0x06};
uint8_t name20[8]={0x04,
  0x08,
  0x00,
  0x1F,
  0x11,
  0x15,
  0x1D,
  0x11};
 uint8_t name21[8]={0x02,
  0x0E,
  0x00,
  0x1F,
  0x11,
  0x15,
  0x1D,
  0x11};
 
int state  = 0;
int beforState  = 0;
void setup()
{
  lcd.begin(16,2);
  for(int i=0,i<=21;i++){
    lcd.createChar(i,name"i");
  }
}

void loop()
{
   
}
