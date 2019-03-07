unsigned char Code_tay_cam = 0xA5;
#include <mega32a.h>
#include <delay.h>
#include <stdio.h>
#include <stdlib.h>
#include "define.c"
#include "init.c"
#include "motor.c"
#include "arm.c"
#include "rf.c"
void main(void)
{
init();
start_servo();
delay_ms(1000);
stop_servo();
RF_Init();
RF_Config();
RX_Mode();
while (1)
    {
     RX_Mode();
     if(IRQ==0)
        {
            led=!led;
            xx=RF_RX_Read(); 
                //---------analog trai----------
                if(xx==1) {di_thang(215,220);}        //a-trai-thang   
                if(xx==2) {di_lui(215,220);}          //a-trai-lui
                if(xx==3) {di_trai(150,150);}         //a-trai-trai                
                if(xx==4) {di_phai(150,150);}         //a-trai-phai 
                //---------digital trai----------
                if(xx==9)  {di_thang(115,120);}         //up                
                if(xx==10) {di_lui(115,120);}          //down
                if(xx==11) {di_trai(120,120);}           //left                
                if(xx==12) {di_phai(120,120);}           //right 
                //---------analog phai----------          
                if(xx==5)                              //a-phai-len
                    {
                        nang_len();     
                    }
                if(xx==6)                              //a-phai-xuong
                    {
                        ha_xuong(); 
                    }
                if(xx==7)                              //a-phai-trai  //mo
                    {
                        xoay_trai();
                         
                    }
                if(xx==8)                              //a-phai-phai //dong
                    {
                        xoay_phai();
                    }
                //---------digital phai----------
                if(xx==13)                             //tam giac
                    {   
                        nha();
                    }   
                if(xx==14)                             //nhan
                    {
                        gap(); 
                    } 
                if(xx==15)                              //tron   
                    {
                       ve_mo(); 
                    }      
                if(xx==16)                             // vuong   
                    { 
                              
                    }        
                if(xx==0) 
                    {   
                dung_yen();
                stop_servo();   
                    }
        RX_Config();
        }

}
} 
