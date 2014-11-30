// set pin numbers:
const int buttonPinstart = 9;
const int buttonPinend = 8;
const int buttonPin1 = 7;
const int buttonPin2 = 6;// the number of the pushbutton pin
int z;
const int ledPin2 =  11;
const int ledPin3 =  10;// the number of the LED pin
int a[10];
int flag=0;
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
pinMode(ledPin2, OUTPUT); 
pinMode(ledPin3, OUTPUT);  
pinMode(buttonPinstart, INPUT);
pinMode(buttonPinend, INPUT);
pinMode(buttonPin1, INPUT);
pinMode(buttonPin2, INPUT);
}

void loop(){
    if(digitalRead(buttonPinstart)==HIGH)
    {
       digitalWrite(ledPin2,HIGH);
       digitalWrite(ledPin3,HIGH);
       delay(1000);
       z=0;
       for(int i=0;i<7;i++)
          a[i]=0;
         
    }
    if(digitalRead(buttonPinend)==HIGH)
    {
      delay(1000);
      flag=0;
      a[z++]=3;
      if(a[0]!=1)
        flag=1;
      if(a[1]!=2)
        flag=1;
      
      if(a[2]!=1)
        flag=1;
      if(a[3]!=1)
        flag=1;
      if(a[4]!=2)
        flag=1;
      if(a[5]!=1)
        flag=1;
      if(a[6]!=3)
        flag=1;
      if(flag==1)
         digitalWrite(ledPin2,HIGH);
      else
         digitalWrite(ledPin3,HIGH);
      delay(1000);
        
      
    }
     if(digitalRead(buttonPin1)==HIGH)
    {
      delay(1000);
     a[z++]=1;
    
    }
    if(digitalRead(buttonPin2)==HIGH)
    {
     delay(1000); 
      a[z++]=2;
    }
    
    digitalWrite(ledPin2, LOW); 
    digitalWrite(ledPin3, LOW);
}

