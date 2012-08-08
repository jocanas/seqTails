const int pins[6] = {3,5,6,9,10,11};
void setup(){
  for(int i = 0; i < 6; i++){
    pinMode(pins[i], OUTPUT);
  }
  //pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
}

void loop(){
  if(digitalRead(A0) == HIGH)
    inout(1);
//  inout(2);
//  digitalWrite(13,HIGH);
//  centeroutin(2);
//  centeroutin(2);
////  digitalWrite(13, LOW);
//  leftright(1);
//  leftright(1);
//  
}
//void leftright(int tdelay){
//  for(int i = 0; i < 6; i++){
//     fadeon(pins[i],tdelay);
//     if(i>0)
//       fadeoff(pins[i-1],tdelay);
//  }
//  for(int i = 5; i >= 0; i--){
//     fadeon(pins[i],tdelay);
//     if(i<5)
//       fadeoff(pins[i+1],tdelay);
//  }
//}
//void centeroutin(int tdelay){
//  int outin[3] = {32,41,50};
//   for(int i = 0; i < 3; i++){
//      for(int b = 0; b < 256; b+=5){
//        analogWrite(pins[(outin[i])/10], b);
//        analogWrite(pins[(outin[i])%10], b);
//        delay(tdelay);
//      } 
//   }
//   for(int i = 3; i >= 0; i--){
//      for(int b = 255; b >= 0; b-=5){
//        analogWrite(pins[(outin[i])/10], b);
//        analogWrite(pins[(outin[i])%10], b);
//        delay(tdelay);
//      } 
//   }
//}
void inout(int tdelay){
   for(int i = 0; i < 6; i++){
     fadeon(pins[i],tdelay);
   }
   for(int i = 5; i >= 0; i--){
      fadeoff(pins[i], tdelay);
//      digitalWrite(pins[i], LOW);
   }
}
void fadeon(int pin, int tdelay){
  for(int b = 0; b < 256; b+=5){
    analogWrite(pin, b);
    delay(tdelay);
  } 
}
void fadeoff(int pin, int tdelay){
  for(int b = 255; b >= 0; b-=5){
    analogWrite(pin, b);
    delay(tdelay);
  } 
}
