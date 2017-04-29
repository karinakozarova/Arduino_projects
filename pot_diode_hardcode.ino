int LED_red_pin = 5;
int LED_green_pin = 6;
int button_pin = 9;
int pot_pin = 0;

void pot_diode();


void setup() {
  Serial.begin(9600);
  pinMode(LED_red_pin,OUTPUT);
  pinMode(LED_green_pin,OUTPUT);
  pinMode(button_pin,INPUT);
  pinMode(pot_pin,INPUT);
}


void loop() {
   pot_diode();

}


void pot_diode(){
  
  if(analogRead(pot_pin)>600){
      analogWrite(LED_green_pin, intensity_max);  
  }else if(analogRead(pot_pin)>200) {
      analogWrite(LED_green_pin, intensity_max/2);  
  }else{ 
      analogWrite(LED_green_pin, 0);  
  }
}

