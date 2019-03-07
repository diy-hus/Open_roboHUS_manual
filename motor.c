void control_motor(unsigned char motor,unsigned char dir_motor,unsigned char speed){
    switch (motor){
        case 1:{
            if(dir_motor==0){
                DIR_1 = dir_motor;
                PWM_1 = speed;
                break;  
            }                                        
            else {
                DIR_1 = dir_motor;
                PWM_1 = 255 - speed;
                break;    
            }
        }
        case 2:{
            if(dir_motor==0){
                DIR_2 = dir_motor;
                PWM_2 = speed;
                break;  
            }
            else{
                DIR_2 = dir_motor;
                PWM_2 = 255 - speed;
                break; 
            }
        }
    }
}
void dung_yen(){
    control_motor(1,0,0);
    control_motor(2,0,0);
}

void di_lui(int speed, int speed2){
    control_motor(1,1,speed);
    control_motor(2,1,speed2);
}

void di_thang(int speed, int speed2){
    control_motor(1,0,speed);
    control_motor(2,0,speed2);
}

void di_phai(int speed, int speed2){
    control_motor(1,0,speed);
    control_motor(2,1,speed2);
}
void di_trai(int speed, int speed2){
    control_motor(1,1,speed2);
    control_motor(2,0,speed);
}

void start_servo()
{
DR_servo_1=1;
DR_servo_2=1;
//DR_servo_3=1;
//DR_servo_4=1;
//DR_servo_5=1;
//DR_servo_6=1;
DR_servo_7=1;
DR_servo_8=1;
goc_servo_7 = 60; //init de 7 = 60, max = 80, min = 25
goc_servo_8 = 40; //init de 8 = 40, max = 80, min = 40
//goc_servo_1=14;
//goc_servo_2=16;
//goc_servo_7=10;
//goc_servo_8=9;

}
void stop_servo()
{
DR_servo_1=0;
DR_servo_2=0;
//DR_servo_3=0;
//DR_servo_4=0;
//DR_servo_5=0;
//DR_servo_6=0;
DR_servo_7=0;
DR_servo_8=0;
}
