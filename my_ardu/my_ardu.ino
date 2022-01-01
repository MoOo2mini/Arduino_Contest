#include <IRremote.h>
#include <Servo.h>
#include <Stepper.h>

IRrecv irrecv(7);
decode_results results;

int angle=0;
int steps=2048;
Servo servo;
Stepper stepper(steps, 11,9,10,8);

void setup() {
  Serial.begin(9600);
  servo.attach(5);
  stepper.setSpeed(10);
  pinMode(3, OUTPUT);
  pinMode(2, INPUT);
  pinMode(12, INPUT);
  pinMode(13, OUTPUT);
  irrecv.enableIRIn();

}

void loop() {

    digitalWrite(3,HIGH);
    delayMicroseconds(2);
    digitalWrite(3,LOW);
    delayMicroseconds(10);
    float duration=pulseIn(2,HIGH);
    float distance=((float)340*duration/10000)/2;
    Serial.print(distance);
    Serial.print("cm");
    Serial.println();
    delay(1000);
  
    if ((distance>=0)&&(distance<=3)){
      Serial.println("Mom&Dad");
      stepper.step(steps/720*180);
    }
    else if ((distance>=3.5)&&(distance<=4.5)){
      Serial.println("Brother");
      digitalWrite(13,HIGH);
      delay(1000);
      digitalWrite(13,LOW);
    }
    else if ((distance<=7.3)&&(distance>=6.3)){
      Serial.println("Sister");
      servo.write(-180);
      delay(500);
      servo.write(180);
      }
    
  
  if (irrecv.decode(&results)){
    Serial.println(results.value, HEX);
    switch(results.value)
    {
      case 0xFF6897: 
        Serial.println("Brother");
        digitalWrite(13,HIGH);
        break;
      case 0xFF30CF: 
        Serial.println("Mom&Dad");
        stepper.step(steps/-720*180);
        break;
      case 0xFF7A85: 
        Serial.println("Mom&Dad");
        stepper.step(steps/720*180);
        break;
      case 0xFF18E7: //2
        Serial.println("Sister");
        servo.write(-180);
        delay(500);
        servo.write(180);
        break;
      default: break;
    }
    irrecv.resume();
  }
}
