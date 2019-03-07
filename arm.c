/*
*   Dong co servo_1 dung de gap/nha qua
*/
void nha()
{
DR_servo_1=1;
goc_servo_1=23;  
}
void gap()
{
DR_servo_1=1;
goc_servo_1=10;  
}

/*
*   Dong co servo_2 xoay trai/phai canh tay
*/
void xoay_trai()
{
DR_servo_2=1;
goc_servo_2--;
if (goc_servo_2<6) goc_servo_2=6;  
delay_ms(10);
}
void xoay_phai()
{
DR_servo_2=1;
goc_servo_2++;
if (goc_servo_2>26) goc_servo_2=26;  
delay_ms(10);
}



void ha_xuong() {
        
    DR_servo_7 = 1;    
    DR_servo_8 = 1;                            
    
    //goc sv 7 o cao qua ma ha sv 8 thi bi ket, phai ha 7 truoc                                                                    
    if ((goc_servo_8 <= 45) && (goc_servo_7 > 45)) {             
        goc_servo_7--;
        delay_ms(5);
        return;    
    }
    
    //goc sv 8 cang lon thi cang ha xuong thap, thap nhat tai goc 80
    if (goc_servo_8 < 80) {
        goc_servo_8++;
        delay_ms(5);
        return;
    } 
                     
    //goc sv 7 cang nho thi cang ha xuong thap, thap nhat tai goc 25
    if ((goc_servo_8 >= 80) && (goc_servo_7 > 25)) {
        goc_servo_7--;
        delay_ms(5);
    }
     
 
}

void nang_len()
{  
    
    DR_servo_7 = 1;
    DR_servo_8 = 1;  
        
    //goc sv 8 dang thap qua ma keo 7 len thi ket, phai keo 7 truoc 
    if ((goc_servo_7 < 45) && (goc_servo_8 > 75)) {
        goc_servo_7++;
        delay_ms(5);
        return;    
    }                                                             
    
    //goc sv 8 cang nho thi cang nang len cao, cao nhat tai goc 40
    if (goc_servo_8 > 40) {
        goc_servo_8--;
        delay_ms(5);
    }                
    
    //goc sv 7 cang lon thi cang nang len cao, cao nhat tai goc 80
    if ((goc_servo_8 <= 40) && (goc_servo_7 < 80)) {
        goc_servo_7++;
        delay_ms(5);
    }
}

void ve_mo() {
    DR_servo_1=1;
    DR_servo_2=1;
    DR_servo_7=1;
    DR_servo_8=1;
    
    goc_servo_7 = 60; //init de 7 = 60, max = 80, min = 25
    goc_servo_8 = 40; //init de 8 = 40, max = 80, min = 40

    goc_servo_1=14;
    goc_servo_2=16;
}