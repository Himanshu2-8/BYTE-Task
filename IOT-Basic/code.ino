//c++ code

//setting up the devices
void setup()
{
  pinMode(2,INPUT);
  pinMode(12, OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop()
{
    //seitch on the red light
  if(digitalRead(2)==0){
    while(digitalRead(2)==0){
      digitalWrite(12,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(8,LOW);
    }
  }
  //if the push button is pressed, tun on the green light
  if(digitalRead(2)==1){
    while(digitalRead(2)!=0){
      digitalWrite(12,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(10,LOW);
    }
  }
  //turn off the light when the button is not pushed
  if(digitalRead(2)==0){
    while(digitalRead(2)==0){
      digitalWrite(12,LOW);
      digitalWrite(10,LOW);
      digitalWrite(8,LOW);
    }
  }
  //turn on the blue light, when the push button is pressed the second time
  if(digitalRead(2)==1){
    while(digitalRead(2)==1){
      digitalWrite(12,LOW);
      digitalWrite(8,LOW);
      digitalWrite(10,HIGH);
    }
  }
    if(digitalRead(2)==0){
      while(digitalRead(2)==0){
        digitalWrite(12,LOW);
        digitalWrite(8,LOW);
        digitalWrite(10,LOW);
      }
    }
}
