
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(14,OUTPUT);
  pinMode(15,OUTPUT);
  pinMode(16,OUTPUT);
  pinMode(17,OUTPUT);
  pinMode(18,OUTPUT);
  pinMode(19,OUTPUT);
  pinMode(20,OUTPUT);
  pinMode(21,OUTPUT);
  pinMode(22,OUTPUT);
  pinMode(23,OUTPUT);
  pinMode(24,OUTPUT);
  pinMode(25,OUTPUT);
  pinMode(26,OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(28,OUTPUT);

  pinMode(53, INPUT); //assign the 53 pin as INPUT for buttonpress
  pinMode(52, INPUT); //assign the 52 pin as INPUT for photores
}

void loop() {
  // put your main code here, to run repeatedly:
  while(1){
    digitalWrite(15, LOW); //reini all
    digitalWrite(16, LOW); //reini all
    digitalWrite(17, LOW); //reini all
    digitalWrite(18, LOW); //reini all
    digitalWrite(19, LOW); //reini all
    digitalWrite(20, LOW); //reini all
    digitalWrite(21, LOW); //reini all
    digitalWrite(22, LOW); //reini all
    digitalWrite(23, LOW); //reini all
    digitalWrite(24, LOW); //reini all
    digitalWrite(25, LOW); //reini all
    digitalWrite(26, LOW); //reini all
    digitalWrite(27, LOW); //reini all
    digitalWrite(28, LOW); //reini all
    
  if(digitalRead(53)==HIGH){ //buttonpress
    if(digitalRead(52) == LOW){  //photores //bright outside
        digitalWrite(15, LOW); //reini all
        digitalWrite(16, HIGH); //reini all
        digitalWrite(17, LOW); //reini all
        digitalWrite(18, HIGH); //reini all
        digitalWrite(19, LOW); //reini all
        digitalWrite(20, HIGH); //reini all
        digitalWrite(21, LOW); //reini all
        digitalWrite(22, HIGH); //reini all
        digitalWrite(23, LOW); //reini all
        digitalWrite(24, HIGH); //reini all
        digitalWrite(25, LOW); //reini all
        digitalWrite(26, HIGH); //reini all
        digitalWrite(27, LOW); //reini all
        digitalWrite(28, HIGH); //reini all
    }//close if loop for when bright outside
    
    if(digitalRead(52) == HIGH){  //photores  //dark outside
        unsigned int time;
        millis() = millis() + 1000;  
        digitalWrite(15, LOW); //reini all
        digitalWrite(16, LOW); //reini all
        digitalWrite(17, LOW); //reini all
        digitalWrite(18, LOW); //reini all
        digitalWrite(19, LOW); //reini all
        digitalWrite(20, LOW); //reini all
        digitalWrite(21, LOW); //reini all
        digitalWrite(22, LOW); //reini all
        digitalWrite(23, LOW); //reini all
        digitalWrite(24, LOW); //reini all
        digitalWrite(25, LOW); //reini all
        digitalWrite(26, LOW); //reini all
        digitalWrite(27, LOW); //reini all
        digitalWrite(28, LOW); //reini all

      for(int x=15; x<=27; x=x+2){
          digitalWrite(x, HIGH);
      }//for
    }//photo
        
  }// if button is pressed
  }//while

  }//void loop
