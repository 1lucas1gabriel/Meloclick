/******************************************************************************
                                    MELOCLICK
*******************************************************************************/

#include "NotasMusicais.h"            // Inclue as notas e frequencias definidas
#define LedBluetooth  9
#define Speaker       10
//---------------------
#define veloz    1500
#define normal   3000
#define devagar  4500  
//---------------------  

int pino[] = {2, 3, 4, 5, 6, 7, 8};
int nota[] = {NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4};
String voice;
int velocidade;

void setup() {
  Serial.begin(9600);
  pinMode(LedBluetooth, OUTPUT);
  pinMode(Speaker,      OUTPUT);
  for (int i = 0; i < 7; i++) {
    pinMode(pino[i], INPUT);
  }
}

void loop() {
//----------------------- TECLADO PIANO ---------------------------------------
  for (int i = 0; i < 7; i++) {
    while (digitalRead(pino[i]) == HIGH) {
      tone(Speaker, nota[i]);
      delay(300);  //-------------> debounce
      noTone(Speaker);
    }
  }

//------------------- ATIVACAO DO MODO EXECUTAR MUSICA -----------------------
  if (Serial.available() > 0) {
    
    for (int i = 0; i < 7; i++) {pinMode(pino[i], OUTPUT);}
    voice = Serial.readString();
    delay(2);
    Serial.println(voice);
    
//---------------------------------------------- SELECAO DA MUSICA + VELOCIDADE
    if(voice == "tocar melodia devagar")     {velocidade = devagar;  PamPamRamRam(velocidade);}
    else if(voice == "tocar melodia normal") {velocidade = normal;   PamPamRamRam(velocidade);}
    else if(voice == "tocar melodia veloz")  {velocidade = veloz;    PamPamRamRam(velocidade);}
    else if(voice == "tocar notas devagar")  {velocidade = devagar;  DoReMiFa(velocidade);}
    else if(voice == "tocar notas normal")   {velocidade = normal;   DoReMiFa(velocidade);}
    else if(voice == "tocar notas veloz")    {velocidade = veloz;    DoReMiFa(velocidade);}
    else if(voice == "tocar Jingle Bells devagar")  {velocidade = devagar;  JingleBells(velocidade);}
    else if(voice == "tocar Jingle Bells normal")    {velocidade = normal;   JingleBells(velocidade);}
    else if(voice == "tocar Jingle Bells veloz")    {velocidade = veloz;    JingleBells(velocidade);}
    else if(voice == "tocar meu lanchinho devagar") {velocidade = devagar;  MeuLanchinho(velocidade);}
    else if(voice == "tocar meu lanchinho normal")  {velocidade = normal;   MeuLanchinho(velocidade);}
    else if(voice == "tocar meu lanchinho veloz")   {velocidade = veloz;    MeuLanchinho(velocidade);}
    else if(voice == "tocar estrelinha devagar") {velocidade = devagar;  Estrelinha(velocidade);}
    else if(voice == "tocar estrelinha normal")  {velocidade = normal;   Estrelinha(velocidade);}
    else if(voice == "tocar estrelinha veloz")   {velocidade = veloz;    Estrelinha(velocidade);}  
    
    
    
    //------------------ PARA COMANDO ERRADO -------------------
    else{digitalWrite(LedBluetooth, HIGH);  delay(200);
         digitalWrite(LedBluetooth, LOW);   delay(200);
         digitalWrite(LedBluetooth, HIGH);  delay(200);
         digitalWrite(LedBluetooth, LOW);   delay(200);
         digitalWrite(LedBluetooth, HIGH);  delay(200);
         digitalWrite(LedBluetooth, LOW);   delay(200);}
  }
}
