
/*
Notes chart:
  C     C#     D     Eb   E     F     F#    G     G#    A     Bb    B
0 16.35 17.32 18.35 19.45 20.60 21.83 23.12 24.50 25.96 27.50 29.14 30.87
1 32.70 34.65 36.71 38.89 41.20 43.65 46.25 49.00 51.91 55.00 58.27 61.74
2 65.41 69.30 73.42 77.78 82.41 87.31 92.50 98.00 103.8 110.0 116.5 123.5
3 130.8 138.6 146.8 155.6 164.8 174.6 185.0 196.0 207.7 220.0 233.1 246.9
4 261.6 277.2 293.7 311.1 329.6 349.2 370.0 392.0 415.3 440.0 466.2 493.9
5 523.3 554.4 587.3 622.3 659.3 698.5 740.0 784.0 830.6 880.0 932.3 987.8
6 1047  1109  1175  1245  1319  1397  1480  1568  1661  1760  1865  1976
7 2093  2217  2349  2489  2637  2794  2960  3136  3322  3520  3729  3951
8 4186  4435  4699  4978  5274  5588  5920  6272  6645  7040  7459  7902
 
Key: Bmaj (B C# D# E F# G# A#)
*/

//                                                     **Constants**

int output = 13; //

// note frequencies
int C4 = 262;
int Cs4 = 277.2; 
int D4 = 294;
int Eb4 = 311.1;
int E4 = 330;
int F4 = 349;
int Fs4 =370;
int G4 = 392;
int Gs4 = 415.3;
int As4 = 466.2;
int B4 = 493.9;
int C5 = 523.3;
int Cs5 = 554.4;
int Eb5 = 622.3;
int E5 = 659.3;
int Fs5 = 740;

// note rythm values
int halfnote = tempo*2;
int dotquarter = tempo*1.5;
int quarter = tempo; 
int eighth = tempo/2;
int doteighth = tempo*.75;
int sixteenth = tempo/4;

//                                                    **variables**
// 60000/Tempo= beat duration
int tempo = 60000/120; // tempo 113 BPM

void setup()
{


}

void loop()
{
  for (int i = 0; i < 1; i++){ 
    // ------------------------------------------------------------------------ Measure 1,   /// IV section
    //                    F#5 q-note //(underlying dotted eighth note)
    tone(output, Fs5);    
      delay(doteighth);  
    noTone(output);
    //                    B4 16th-note
    tone(output,B4);
      delay(sixteenth);
    noTone(output);
    //                    C#5 q-note (overlapping an 8th note of same pitch)
    tone(output, Cs5);   
      delay(eighth);   
    noTone(output);  
    //                    C#5 (8th-note)
    tone(output, Cs5);   
      delay(eighth);   
    noTone(output);  
    //                    E4 dotted 8-note
    tone(output,E4);
      delay(doteighth);
    noTone(output);
    //                    B4 16th-note
    tone(output,B4);
      delay(sixteenth);
    noTone(output);
    delay(eighth);//       eighth rest 
    //                    C#5 8th-note
    tone(output,Cs5);
      delay(eighth);
    noTone(output);
    // ------------------------------------------------------------------------ Measure 2
    //                    E4 doteight     
    tone(output,E4);    
      delay(doteighth);
    noTone(output);
    //                    B4 16th
    tone(output,B4);
      delay(sixteenth);
    noTone(output);
    //                    8th rest
    delay(eighth);
    //                     C#5 8th
    tone(output, Cs5);
      delay(eighth);
    noTone(output);
    //                    B4 q-note (dot8th)
    tone(output,B4);
      delay(doteighth);
    noTone(output);
    //                    B4 16th
    tone(output,B4);
      delay(sixteenth);
    noTone(output);
    //                    8th rest
    delay(eighth);
    //                    C#5 8th
    tone(output,Cs5);
      delay(eighth);
    noTone(output);
    // ------------------------------------------------------------------------Measure 3   /// ii Section
    //                     F#5 q-note
    tone(output,Fs5);
      delay(doteighth); //(underlying dotted eighth note)
    noTone(output); 
    //                    B4 16th
    tone(output,B4);
      delay(sixteenth);
    noTone(output);
    //                    A#4 quarter
    tone(output,As4);
      delay(eighth);
    noTone(output);
    //                    C#5 8th
    tone(output,Cs5);
      delay(eighth);
    noTone(output);
    //                    C#4 dot8th
    tone(output,Cs4);
      delay(doteighth);
    noTone(output);
    //                    B4 16th
    tone(output,B4);
      delay(sixteenth);
    noTone(output);
    //                    8th rest
    delay(eighth);
    //                    C#5 8th
    tone(output,Cs5);
      delay(eighth);
    noTone(output);
    //------------------------------------------------------------------------Measure 4
    //                    C#4 dot8th
    tone(output,Cs4);
      delay(doteighth);
    noTone(output);
    //                    B4 16th
    tone(output,B4);
      delay(sixteenth);
    noTone(output);
    //                    A#4 quarter (8th)
    tone(output,As4);
      delay(eighth);
    noTone(output);
    //                    C#5 8th
    tone(output,Cs5);
      delay(eighth);
    noTone(output);
    //                    G#4 dot8th
    tone(output,Gs4);
      delay(doteighth);
    noTone(output);
    //                    B4 16th
    tone(output,B4);
      delay(sixteenth);
    noTone(output);
    //                    8th rest
    delay(eighth);
     //                    C#5 8th
    tone(output,Cs5);
      delay(eighth);
    noTone(output);
    //------------------------------------------------------------------------Measure 5 /// iii Section
    //                    A#4 q-note (dot 8th)
    tone(output,As4);
      delay(doteighth);
    noTone(output);
    //        
    tone(output,As4);
      delay(sixteenth);
    noTone(output); 
    //                      G#4 8th
    tone(output,Gs4);
      delay(eighth);
    noTone(output);
    //                      C#5 8th
    tone(output,Cs5);
      delay(eighth);
    noTone(output);
    //                      D#4 dot8th
    tone(output,Eb4);
      delay(doteighth);
    noTone(output);
    //                      A#4 16th  
    tone(output,As4);
      delay(sixteenth);
    noTone(output);   
    //                      8th rest
    delay(eighth);
    //                      C#5 8t  
    tone(output,Cs4);
      delay(eighth);  
    noTone(output);
    //------------------------------------------------------------------------ Measure 6
    //                      D#4 dot8th
    tone(output,Eb4);
      delay(doteighth);
    noTone(output);
    //                      A#4 16th  
    tone(output,As4);
      delay(sixteenth);
    noTone(output);   
    //                      8th rest
    delay(eighth);
    //                      C#5 8t  
    tone(output,Cs4);
      delay(eighth);
    noTone(output);
    //                      A#4 (dot8th)
    tone(output,As4);
      delay(doteighth);
    noTone(output);
    //                      A#4 8th
    tone(output,As4);
      delay(eighth);
    noTone(output);
    //                      C#5 q-note (8th)
}   tone(output,Cs5);
      delay(eighth);
    noTone(output);
    //                      C#5 8th
    tone(output,Cs5);
      delay(eighth);
    noTone(output);
    //------------------------------------------------------------------------Measure 7 /// V section
    //                      G#4 q-note (dot8th)

}

