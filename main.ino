int motor11=11;
int motor12=10;
int motor21=6;
int motor22=5;
int IR1=8;
int IR2=13;
int IR3=12;
int IR4=7;
int IR5=4;
void setup() {
  Serial.begin(9600);
  pinMode(IR1,INPUT);
  pinMode(IR2,INPUT);
  pinMode(IR3,INPUT);
  pinMode(IR4,INPUT);
  pinMode(IR5,INPUT);
  pinMode(motor11,OUTPUT);
  pinMode(motor12,OUTPUT);
  pinMode(motor21,OUTPUT);
  pinMode(motor22,OUTPUT);

}

void loop() {
  int f1=digitalRead(IR1);
  int f2=digitalRead(IR2);
  int f3=digitalRead(IR3);
  int f4=digitalRead(IR4);
  int f5=digitalRead(IR5);
  if(f1==0 && f2==0 && f3==0 && f4==1 && f5==1){
    turnLeft();
  }
  else if(f1==1 && f2==0 && f3==0 && f4==1 && f5==1){
    turnLeft_smooth();
  }
  else if(f1==1 && f2==1 && f3==0 && f4==0 && f5==0){
    turnRight();   
  }
  else if(f1==1 && f2==1 && f3==0 && f4==0 && f5==1){
    turnRight_smooth();   
  }
  else if(f1==1 && f2==1 && f3==0 && f4==1 && f5==1){
    forward();
  }
//  else if(f1==0 && f2==0 && f3==0 && f4==0 && f5==0){            // Depends on the path ahead
//    turnLeft();
//  }
//  else if(f1==0 && f2==0 && f3==1 && f4==0 && f5==0){         // Depends on the path ahead
//    turnLeft();
//  }
  else if(f1==0 && f2==1 && f3==0 && f4==1 && f5==1){
    turnLeft();
    }
  else if(f1==1 && f2==1 && f3==0 && f4==1 && f5==0){
    turnRight();
    }
//  else if(f1==0 && f2==0 && f3==0 && f4==0 && f5==0){
//    stop_bot();
//    delay(10000);    
//  }
//  else if((f1==1 && f2==0 && f3==0 && f4==0 && f5==1) ||(f1==0 && f2==1 && f3==0 && f4==1 && f5==0)){
//    turnLeft_smooth();
//    }
//  else if(f1==0 && f2==1 && f3==0 && f4==1 && f5==1){
//    turnLeft();
//    
//    }
//  else if(f1==1 && f2==1 && f3==0 && f4==1 && f5==0){
//    turnRight();
//    
//    }
//   else if(f1==0 && f2==1 && f3==0 && f4==1 && f5==0){
//    forward();
//    }
//   else if(f1==1 && f2==1 && f3==1 && f4==1 && f5==1){
//     stop_bot();
////     delay(10000);
//   }


}
// left motor=1 right motor=2
 
void forward(){
    analogWrite(motor11,0);
    analogWrite(motor12,205);
    analogWrite(motor21,205);
    analogWrite(motor22,0);

}

void backward(){
  analogWrite(motor11,205);
  analogWrite(motor12,0);
  analogWrite(motor21,0);
  analogWrite(motor22,205);
   

}
void turnLeft(){
    analogWrite(motor11,205);
    analogWrite(motor12,0);
    analogWrite(motor21,205);
    analogWrite(motor22,0);

  
}
void turnLeft_smooth(){
    analogWrite(motor11,0);
    analogWrite(motor12,0);
    analogWrite(motor21,205);
    analogWrite(motor22,0);

  
}
void turnRight(){
    analogWrite(motor11,0);
    analogWrite(motor12,205);
    analogWrite(motor21,0);
    analogWrite(motor22,205);
}
void turnRight_smooth(){
    analogWrite(motor11,0);
    analogWrite(motor12,205);
    analogWrite(motor21,0);
    analogWrite(motor22,0);
}

void stop_bot(){
    analogWrite(motor11,0);
    analogWrite(motor12,0);
    analogWrite(motor21,0);
    analogWrite(motor22,0);
}