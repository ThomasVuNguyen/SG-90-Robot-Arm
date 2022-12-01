#include <Servo.h>

Servo servo1; 
Servo servo2;
Servo servo3;
Servo servo4;
int servo1_pin= 4; //0 to 120
int servo2_pin=5; //180 to 80
int servo3_pin=2;
int servo4_pin=3;

int max = 180;
int step = 1;
int min = 93;

void setup() {
  servo1.attach(servo1_pin);
  servo2.attach(servo2_pin);
  servo3.attach(servo3_pin);
  servo4.attach(servo4_pin);

}

void loop() {
  alternate();
}

void alternate(){
  for (int i =min; i<=max; i=i+step){
    servo1.write(i);
    servo3.write(max-i);
    servo2.write(i);
    servo4.write(i);
    delay(20);
  }
  for (int i = max; i>=min; i=i-step){
    servo1.write(i);
    servo3.write(max-i);
    servo2.write(i);
    servo4.write(i);
    delay(20);
  }
  }
  
  
void serv(int angle, int del){+
  servo1.attach(servo1_pin);
  servo3.attach(servo2_pin);
  servo2.attach(servo3_pin);
  servo4.attach(servo4_pin);
  servo1.write(angle);
  servo3.write(angle);
  servo2.write(angle);
  //servo4.write(angle);
  delay(del);
  servo1.detach();
  servo3.detach();
  servo2.detach();
  servo4.detach();
  delay(del);
}
void interval(int start, int end, int interv, int del){
  for (int i = start; i<end; i = i + interv){
    serv(i, del);
  }
  delay(2000);
  for (int i = end; i>start; i = i - interv){
    serv(i, del);
  }
  delay(2000);
  
}