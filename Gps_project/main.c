#include "stdint.h"
#include "C:\Keil\ARM\INC\TI\TM4C123/tm4c123gh6pm1.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
 

int main(){
init_uart();
init();
float b ;
b = distance(29.896425,31.266265,29.89665,31.26629)*1000;
//printf("%f",b);
char g[5] ;
 
sprintf(g,"%f",b);
 
//scat("distanc :", dist)
//while(1){
//ReadGpsModule();
// LCD code to write a letter
LCD_command(0x1); //clear screen
//LCD_command(0x80);
LCD_G_rc(0,5);
LCD_string("distance");
//LCD_G_rc(1,0);
//LCD_command(0xC0);
//LCD_command(0xF);
//delay(50);
LCD_G_rc(1,3);
LCD_string(g);
//}
}