
int btn1 = A0;
int btn2 = A1;
int btn3 = A2;
int btn4 = A3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 pinMode(btn1,INPUT);
 pinMode(btn2,INPUT);
 pinMode(btn3,INPUT);
 pinMode(btn4,INPUT);
 pinMode(13,OUTPUT);
 digitalWrite(13,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(btn1) == 0){
       Serial.write(1);
       digitalWrite(13,HIGH);
       }
  else if(digitalRead(btn2) == 0){
       Serial.write(2);
       digitalWrite(13,HIGH);
       }
  else if(digitalRead(btn3) == 0){
     Serial.write(3);
     digitalWrite(13,HIGH); 
       }
  else if(digitalRead(btn4) == 0){
       Serial.write(4);
       digitalWrite(13,HIGH);
      }
  else{
     Serial.write(0);  
     digitalWrite(13,LOW);
     }
   delay(400);
}

