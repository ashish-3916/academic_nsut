/*
 * Carbon Dioxide Parts Per Million Meter
 * CO2PPM
 * 
 * learnelectronics
 * 26 MAR 2017
 * 
 * www.youtube.com/c/learnelectronics
 * arduino0169@gmail.com
 */

/*
 * Atmospheric CO2 Level..............400ppm
 * Average indoor co2.............350-450ppm
 * Maxiumum acceptable co2...........1000ppm
 * Dangerous co2 levels.............>2000ppm
 */






//---------------------------------------------------------------------------------------------------------------
//                                                  LIBRARIES
//---------------------------------------------------------------------------------------------------------------
#include <Wire.h>                             //I2C for OLED
#include <Adafruit_GFX.h>                     //grafix library for OLED
#include <Adafruit_SSD1306.h>                 //OLED Driver

//---------------------------------------------------------------------------------------------------------------
//                                                   DEFINES
//---------------------------------------------------------------------------------------------------------------
#define anInput     A0                        //analog feed from MQ135
#define digTrigger   2                        //digital feed from MQ135
#define co2Zero     55                        //calibrated CO2 0 level
#define led          9                        //led on pin 9
#define OLED_RESET   4                        //OLED reset on lin 4


//---------------------------------------------------------------------------------------------------------------
//                                                LIBRARY CALL
//---------------------------------------------------------------------------------------------------------------
Adafruit_SSD1306 display(OLED_RESET);         //create instance of OLED called display


//---------------------------------------------------------------------------------------------------------------
//                                                  SETUP
//---------------------------------------------------------------------------------------------------------------
void setup() {
  
  pinMode(anInput,INPUT);                     //MQ135 analog feed set for input
  pinMode(digTrigger,INPUT);                  //MQ135 digital feed set for input
  pinMode(led,OUTPUT);                        //led set for output
  Serial.begin(9600);                         //serial comms for debuging
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  //begin display @ hex addy 0x3C
  display.display();                          //show buffer
  display.clearDisplay();                     //clear buffer
  
}
//---------------------------------------------------------------------------------------------------------------
//                                               MAIN LOOP
//---------------------------------------------------------------------------------------------------------------
void loop() {
  
int co2now[10];                               //int array for co2 readings
int co2raw = 0;                               //int for raw value of co2
int co2comp = 0;                              //int for compensated co2 
int co2ppm = 0;                               //int for calculated ppm
int zzz = 0;                                  //int for averaging
int grafX = 0;                                //int for x value of graph


  display.clearDisplay();                     //clear display @ beginning of each loop

  for (int x = 0;x<10;x++){                   //samplpe co2 10x over 2 seconds
    co2now[x]=analogRead(A0);
    delay(200);
  }

for (int x = 0;x<10;x++){                     //add samples together
    zzz=zzz + co2now[x];
    
  }
  co2raw = zzz/10;                            //divide samples by 10
  co2comp = co2raw - co2Zero;                 //get compensated value
  co2ppm = map(co2comp,0,1023,400,5000);      //map value for atmospheric levels

  display.setTextSize(2);                     //set text size
  display.setTextColor(WHITE);                //set text color
  display.setCursor(0,0);                     //set cursor
  display.println("CO2 Level");               //print title
  display.println(" ");                       //skip a line
  display.print(co2ppm);                      //print co2 ppm
  display.print(" PPM");                      //print units
  grafX = map(co2ppm,0,1000,0,127);           //map value to screen width
  display.fillRect(0, 52, grafX, 10, WHITE);  //print graph 400min 1000max
  display.display();                          //show the buffer
  if(co2ppm>999){                             //if co2 ppm > 1000
    digitalWrite(led,HIGH);                   //turn on led
  }
  else{                                       //if not
    digitalWrite(led,LOW);                    //turn off led
  }
}
