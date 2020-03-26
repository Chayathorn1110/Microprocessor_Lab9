#define MOTOR_D1 7
#define MOTOR_D2 8
#define MOTOR_PWM 6

void setSpeed(int speed) {
  if(speed > 0 && speed <= 255){
    digitalWrite(MOTOR_D1,HIGH);
    digitalWrite(MOTOR_D2,LOW);
    analogWrite(MOTOR_PWM,speed);
    delay(1000);
  }
  if(speed < 0 && speed > -256){
    speed = speed*(-1);
    digitalWrite(MOTOR_D1,LOW);
    digitalWrite(MOTOR_D2,HIGH);
    analogWrite(MOTOR_PWM,speed);
    delay(1000);
  }
  else{
    digitalWrite(MOTOR_D1,LOW);
    digitalWrite(MOTOR_D2,LOW);
  }
}

void setup() {
  pinMode(MOTOR_D1,OUTPUT);
  pinMode(MOTOR_D2,OUTPUT);
  pinMode(MOTOR_PWM,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  setSpeed(255);
  setSpeed(-255);
  setSpeed(0);
}
