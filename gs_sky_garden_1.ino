//GS - Sky Garden
#include <LiquidCrystal.h>

LiquidCrystal LCD(12,11,5,4,3,2);

int SensorTempPino = 0;

int SensorUmidPino = 1;
int porcem = 0;

int ldr = A5;
int valorldr = 0;

int piezo = 6;

const int motor = 13;

int laranja = 8;
int amarelo = 9;
int azul = 10;
int verde = 7;



void setup() 
{
  pinMode(laranja, OUTPUT);
  pinMode(amarelo, OUTPUT); 
  pinMode(azul, OUTPUT); 
  pinMode(verde, OUTPUT);
  pinMode(piezo, OUTPUT);
  pinMode(ldr, INPUT);
  pinMode(motor, OUTPUT);
	
  LCD.begin(16,2);
}

void loop()
{
  int SensorTempTensao = analogRead(SensorTempPino);

  float Tensao = SensorTempTensao*5;
  Tensao/=1024;

  float TemperaturaC = (Tensao-0.5)*100;
  
  	if (TemperaturaC > 25) {
      	digitalWrite(laranja, HIGH);
      	LCD.setCursor(0,0);
      	LCD.print("Temp. ALTA      ");
      	LCD.setCursor(0,1);
      	LCD.print("Temp. = ");
      	LCD.setCursor(8,1);
      	LCD.print(TemperaturaC);
      	LCD.setCursor(12,1);
      	LCD.print("C    ");
      	delay(2000);
    }
   	else if (TemperaturaC < 15) {
      	digitalWrite(laranja, HIGH);
      	LCD.setCursor(0,0);
      	LCD.print("Temp. BAIXA      ");
      	LCD.setCursor(0,1);
      	LCD.print("Temp. = ");
      	LCD.setCursor(8,1);
      	LCD.print(TemperaturaC);
      	LCD.setCursor(12,1);
      	LCD.print("C    ");
      	delay(2000);
    }
  	else {
      	digitalWrite(laranja, LOW);
      	LCD.setCursor(0,0);
      	LCD.print("Temp. IDEAL     ");
      	LCD.setCursor(0,1);
      	LCD.print("Temp. = ");
      	LCD.setCursor(8,1);
      	LCD.print(TemperaturaC);
      	LCD.setCursor(12,1);
      	LCD.print("C   ");
      	delay(2000);
    }
  
    
   int SensorUmidTensao = analogRead(SensorUmidPino);
        
   float porcem = map(SensorUmidTensao,0,1023,0,100);
  
  	if (porcem > 60) {
      	digitalWrite(azul, HIGH);
      	digitalWrite(motor, LOW);
      	digitalWrite(verde, LOW);
     	LCD.setCursor(0,0);
		LCD.print("Umidade ALTA    ");
     	LCD.setCursor(0,1);
      	LCD.print("Umidade = ");
      	LCD.setCursor(10,1);
      	LCD.print(porcem);
      	LCD.setCursor(12,1);
      	LCD.print("%  ");
      	delay(2000);
      	LCD.setCursor(0,0);
		LCD.print("Irrigador:    ");
      	LCD.setCursor(0,1);
      	LCD.print("DESLIGADO       ");
      	delay(2000);
    }
    else if (porcem < 20){
      	digitalWrite(azul, HIGH);
      	digitalWrite(motor, HIGH);
      	digitalWrite(verde, HIGH);
      	LCD.setCursor(0,0);
		LCD.print("Umidade BAIXA    ");
      	LCD.setCursor(0,1);
      	LCD.print("Umidade = ");
      	LCD.setCursor(10,1);
      	LCD.print(porcem);
      	LCD.setCursor(12,1);
      	LCD.print("%  ");
      	delay(2000);
      	LCD.setCursor(0,0);
		LCD.print("Irrigador:    ");
      	LCD.setCursor(0,1);
      	LCD.print("LIGADO         ");
      	delay(2000);
    }
  	else {
      	digitalWrite(azul, LOW);
      	digitalWrite(motor, LOW);
      	digitalWrite(verde, LOW);
     	LCD.setCursor(0,0);
		LCD.print("Umidade IDEAL     ");
      	LCD.setCursor(0,1);
      	LCD.print("Umidade = ");
      	LCD.setCursor(10,1);
      	LCD.print(porcem);
      	LCD.setCursor(12,1);
      	LCD.print("%  ");
      	delay(2000);
      	LCD.setCursor(0,0);
		LCD.print("Irrigador:    ");
      	LCD.setCursor(0,1);
      	LCD.print("DESLIGADO       ");
      	delay(2000);
    }
  
 
 	if(analogRead(ldr) > 950){
      	digitalWrite(amarelo, HIGH); 
    	LCD.setCursor(0,0);
		LCD.print("Ambiente muito ");
    	LCD.setCursor(0,1);
		LCD.print("CLARO          ");
    	delay(2000);
    
	}
 	else if (analogRead(ldr) < 850){
      	digitalWrite(amarelo, HIGH);
    	LCD.setCursor(0,0);
		LCD.print("Ambiente muito");
    	LCD.setCursor(0,1);
		LCD.print("ESCURO         ");
    	delay(2000);
  	}
  	else{
      	digitalWrite(amarelo, LOW);
    	LCD.setCursor(0,0);
		LCD.print("Ambiente     ");
    	LCD.setCursor(0,1);
		LCD.print("IDEAL            ");
    	delay(2000);
 	}
  
  	if(analogRead(ldr) < 850 || analogRead(ldr) > 950 || TemperaturaC < 15 || TemperaturaC > 25){
    	digitalWrite(piezo, HIGH);
    }
  	else{
    	digitalWrite(piezo, LOW);
    }
}  