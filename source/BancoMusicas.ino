/****************************************************************************
                              BANCO COM MUSICAS
*****************************************************************************/

//----------------------------------------------------------------- MUSICA #01
void PamPamRamRam(int velocidade) {
  int melody[] = {
    NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, 0, NOTE_B4, NOTE_C4
  };
  int noteDurations[] = {
    4, 8, 8, 4, 4, 4, 4, 4
  }; 
    for (int i = 0; i < 8; i++) {
      int noteDuration = velocidade / noteDurations[i];
      tone(Speaker, melody[i], noteDuration);
      do {
          int pinoAtivo;
          if (melody[i] != 0) {
            if(melody[i] == NOTE_C4){digitalWrite(2,HIGH); pinoAtivo = 2;}
            if(melody[i] == NOTE_D4){digitalWrite(3,HIGH); pinoAtivo = 3;}
            if(melody[i] == NOTE_E4){digitalWrite(4,HIGH); pinoAtivo = 4;}
            if(melody[i] == NOTE_F4){digitalWrite(5,HIGH); pinoAtivo = 5;}
            if(melody[i] == NOTE_G4){digitalWrite(6,HIGH); pinoAtivo = 6;}
            if(melody[i] == NOTE_A4){digitalWrite(7,HIGH); pinoAtivo = 7;}
            if(melody[i] == NOTE_B4){digitalWrite(8,HIGH); pinoAtivo = 8;}
          }
        int pause = noteDuration * 1.3;
        delay(pause);
        digitalWrite(pinoAtivo, LOW);
        delay(100);
      } while (Speaker == HIGH);
    }
}
//----------------------------------------------------------------- MUSICA #02
void JingleBells(int velocidade) {
    int melody[] = {
      NOTE_E4, NOTE_E4, NOTE_E4, 0, NOTE_E4, NOTE_E4, NOTE_E4, 0,
      NOTE_E4, NOTE_G4, NOTE_C4, NOTE_D4, NOTE_E4
    };
    int noteDurations[] = {
      8, 8, 8, 16, 8, 8, 8, 16,
      8, 8, 8, 8, 8};
      
    for (int i = 0; i < 13; i++) {
      int noteDuration = velocidade / noteDurations[i];
      tone(Speaker, melody[i], noteDuration);
      do {
          int pinoAtivo;
          if (melody[i] != 0) {
            if(melody[i] == NOTE_C4){digitalWrite(2,HIGH); pinoAtivo = 2;}
            if(melody[i] == NOTE_D4){digitalWrite(3,HIGH); pinoAtivo = 3;}
            if(melody[i] == NOTE_E4){digitalWrite(4,HIGH); pinoAtivo = 4;}
            if(melody[i] == NOTE_F4){digitalWrite(5,HIGH); pinoAtivo = 5;}
            if(melody[i] == NOTE_G4){digitalWrite(6,HIGH); pinoAtivo = 6;}
            if(melody[i] == NOTE_A4){digitalWrite(7,HIGH); pinoAtivo = 7;}
            if(melody[i] == NOTE_B4){digitalWrite(8,HIGH); pinoAtivo = 8;}
          }
        int pause = noteDuration * 1.3;
        delay(pause);
        digitalWrite(pinoAtivo, LOW);
        delay(100);
      } while (Speaker == HIGH);
    }
}
//----------------------------------------------------------------- MUSICA #03
void DoReMiFa(int velocidade) {
    int melody[] = {
      NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_F4, NOTE_F4, 0,
      NOTE_C4, NOTE_D4, NOTE_C4, NOTE_D4, 0, NOTE_D4, NOTE_D4
    };
    int noteDurations[] = {
      4, 4, 4, 4, 4, 4, 16,
      4, 4, 4, 4, 16, 4, 4};
      
    for (int i = 0; i < 14; i++) {
      int noteDuration = velocidade / noteDurations[i];
      tone(Speaker, melody[i], noteDuration);
      do {
          int pinoAtivo;
          if (melody[i] != 0) {
            if(melody[i] == NOTE_C4){digitalWrite(2,HIGH); pinoAtivo = 2;}
            if(melody[i] == NOTE_D4){digitalWrite(3,HIGH); pinoAtivo = 3;}
            if(melody[i] == NOTE_E4){digitalWrite(4,HIGH); pinoAtivo = 4;}
            if(melody[i] == NOTE_F4){digitalWrite(5,HIGH); pinoAtivo = 5;}
            if(melody[i] == NOTE_G4){digitalWrite(6,HIGH); pinoAtivo = 6;}
            if(melody[i] == NOTE_A4){digitalWrite(7,HIGH); pinoAtivo = 7;}
            if(melody[i] == NOTE_B4){digitalWrite(8,HIGH); pinoAtivo = 8;}
          }
        int pause = noteDuration * 1.3;
        delay(pause);
        digitalWrite(pinoAtivo, LOW);
        delay(100);
      } while (Speaker == HIGH);
    }
}
//----------------------------------------------------------------- MUSICA #04
void MeuLanchinho(int velocidade) {
    int melody[] = {
      NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4,
      NOTE_C4, NOTE_E4, NOTE_F4, NOTE_G4, 0, NOTE_E4, NOTE_F4, NOTE_G4
    };
    int noteDurations[] = {
      8, 8, 8, 8, 8, 8, 8,
      8, 8, 8, 8, 16, 8, 8, 8};
      
    for (int i = 0; i < 15; i++) {
      int noteDuration = velocidade / noteDurations[i];
      tone(Speaker, melody[i], noteDuration);
      do {
          int pinoAtivo;
          if (melody[i] != 0) {
            if(melody[i] == NOTE_C4){digitalWrite(2,HIGH); pinoAtivo = 2;}
            if(melody[i] == NOTE_D4){digitalWrite(3,HIGH); pinoAtivo = 3;}
            if(melody[i] == NOTE_E4){digitalWrite(4,HIGH); pinoAtivo = 4;}
            if(melody[i] == NOTE_F4){digitalWrite(5,HIGH); pinoAtivo = 5;}
            if(melody[i] == NOTE_G4){digitalWrite(6,HIGH); pinoAtivo = 6;}
            if(melody[i] == NOTE_A4){digitalWrite(7,HIGH); pinoAtivo = 7;}
            if(melody[i] == NOTE_B4){digitalWrite(8,HIGH); pinoAtivo = 8;}
          }
        int pause = noteDuration * 1.3;
        delay(pause);
        digitalWrite(pinoAtivo, LOW);
        delay(100);
      } while (Speaker == HIGH);
    }
}
//----------------------------------------------------------------- MUSICA #05
void Estrelinha(int velocidade) {
    int melody[] = {
      NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4,0,
      NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4
    };
    int noteDurations[] = {
      8, 8, 8, 8, 8, 8, 8,
      16, 8, 8, 8, 8, 8, 8, 8};
      
    for (int i = 0; i < 15; i++) {
      int noteDuration = velocidade / noteDurations[i];
      tone(Speaker, melody[i], noteDuration);
      do {
          int pinoAtivo;
          if (melody[i] != 0) {
            if(melody[i] == NOTE_C4){digitalWrite(2,HIGH); pinoAtivo = 2;}
            if(melody[i] == NOTE_D4){digitalWrite(3,HIGH); pinoAtivo = 3;}
            if(melody[i] == NOTE_E4){digitalWrite(4,HIGH); pinoAtivo = 4;}
            if(melody[i] == NOTE_F4){digitalWrite(5,HIGH); pinoAtivo = 5;}
            if(melody[i] == NOTE_G4){digitalWrite(6,HIGH); pinoAtivo = 6;}
            if(melody[i] == NOTE_A4){digitalWrite(7,HIGH); pinoAtivo = 7;}
            if(melody[i] == NOTE_B4){digitalWrite(8,HIGH); pinoAtivo = 8;}
          }
        int pause = noteDuration * 1.3;
        delay(pause);
        digitalWrite(pinoAtivo, LOW);
        delay(100);
      } while (Speaker == HIGH);
    }
}
