
/*
Notes chart:
  C     C#     D     D#   E     F     F#    G     G#    A     A#    B
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
int Cs3 = 138.6; //------ C's
int Cs4 = 277.2; 
int Cs5 = 554.4;
int Ds3 = 155.6; //------ D's
int Ds4 = 293.7;
int Ds5 = 622.3;
int E3 = 164.8; //------- E's
int E4 = 329.6;
int E5 = 659.3;
int Fs3 = 185; //---------F's
int Fs4 = 370;
int Fs5 = 740;
int Gs3 = 207.7;//--------G's
int Gs4 = 415.3;
int Gs5 = 830.6;
int As3 = 233.1;//--------A's
int As4 = 466.2;
int As5 = 932.3;
int B3 = 246.9;//---------B's
int B4 = 493.9;
int B5 = 987.8;

// note rythm values
int halfnote = tempo*2;
int dotquarter = tempo*1.5;
int quarter = tempo; 
int eighth = tempo/2;
int doteighth = tempo*.75;
int sixteenth = tempo/4;
int whole = tempo*4;
//                                                    **variables**
// 60000/Tempo= beat duration
int tempo = 60000/120; // tempo 113 BPM

void setup()
{


}

void loop()
{
  for (int i = 0; i < 1; i++){
    /*-------------------------------------------------------------------------------------------------------------------------------------------
                                                                      ANDREW
    */                                                                  
    // ----------------------------------------- Measure 1
    //                    F#5 q-note 
    tone(output, Fs5);    
      delay(doteighth);  
    noTone(output);
    //                    B4 16th-note
    tone(output,B4);
      delay(sixteenth);
    noTone(output);
    //                    C#5 q-note 
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
    // --------------------------------------- Measure 2
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
    // ---------------------------------------Measure 3 
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
    //----------------------------------------Measure 4
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
    //----------------------------------------Measure 5 
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
    tone(output,Ds4);
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
    //---------------------------------------- Measure 6
    //                      D#4 dot8th
    tone(output,Ds4);
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
   tone(output,Cs5);
      delay(eighth);
    noTone(output);
    //                      C#5 8th
    tone(output,Cs5);
      delay(eighth);
    noTone(output);
    //--------------------------------------Measure 7 
    //                      G#4 q-note (dot8th)
    tone(output,Gs4);
      delay(doteighth);
    noTone(output);
    //                     Fs4
    tone(output,Fs4);
      delay(sixteenth);
    noTone(output);
    //                     8th rest
    delay(eighth);
    //                    Gs4
    tone(output,Gs4);
      delay(eighth);
    noTone(output);
    //                    Gs3
    tone(output,Gs3);
      delay(doteighth);
    noTone(output);
    //                     Fs4
    tone(output,Fs4);
      delay(sixteenth);
    noTone(output);
    //                     8th rest
    delay(eighth);
    //                    Gs4
    tone(output,Gs4);
      delay(eighth);
    noTone(output);
    //                                      measure 8
    tone(output,Gs4);
      delay(doteighth);
    noTone(output);
    //
    tone(output,B3);
      delay(sixteenth);
    noTone(output);
    //
    tone(output,B4);
      delay(eighth);
    noTone(output);
    //
    tone(output,Gs4);
      delay(doteighth);
    noTone(output);
    //
    tone(output,B3);
      delay(sixteenth);
    noTone(output);
    //
    tone(output,Cs5);
      delay(eighth);
    noTone(output);
    //
    tone(output,Cs4);
      delay(eighth);
    noTone(output);
    //------------------------------------measure 9
    //
    tone(output,Gs5);
      delay(doteighth);
    noTone(output);
    //
    tone(output,B3);
      delay(sixteenth);
    noTone(output);
    //
    tone(output,Ds5);
      delay(eighth);
    noTone(output);
    //
    tone(output,Cs4);
      delay(eighth);
    noTone(output);
    //
    tone(output,Cs3);
      delay(doteighth);
    noTone(output);
    //
    tone(output,B3);
      delay(sixteenth);
    noTone(output);
    //
    delay(eighth);
    //
    tone(output,Cs4);
      delay(eighth);
    noTone(output);
    //
    //------------------------------------measure 10
    //
    tone(output,Gs5);
      delay(doteighth);
    noTone(output);
    //
    tone(output,B3);
      delay(sixteenth);
    noTone(output);
    //
    tone(output,Fs5);
      delay(quarter);
    noTone(output);
    //
    tone(output,E3);
      delay(eighth);
    noTone(output);
    //
    tone(output,E5);
      delay(eighth);
    noTone(output);
    //
    tone(output,Ds5);
      delay(eighth);
    noTone(output);
    //
    tone(output,Gs5);
      delay(eighth);
    noTone(output);
    //
    //-----------------------------------measure 11
    //
    tone(output,Cs3);
      delay(eighth);
    noTone(output);
    //
    tone(output,Ds5);
      delay(quarter);
    noTone(output);
    //
    tone(output,Cs4);
      delay(eighth);
    noTone(output);
    /*------------------------------------------------------------------------------------------------------------------------------------------
                                                                      PATRICIA
    */
    // ----------------------------------- measure 16 
    //                      C#5 8th
    tone (output,E4);
    delay (doteighth);
    noTone (output);
    //
    tone (output,B4);
    delay (sixteenth);
    noTone (output);
    // ---------------- 8th rest 
    delay (eighth);
    //
    tone (output,Cs4);
    delay (eighth);
    noTone (output);
    // ----------------------------- measure 17 
    tone (output,Gs4);
    /*--------------------------------------------------------------------------------------------------------------------------------------------
                                                                      FABIAN
    */
   // --------------------------------------- MEASURE 32 
    //                       E3 (dot8th)
      Tone (output,E3);
        Delay (doteighth);
      NoTone (output);
    //                        B3 (sixteenth)
      Tone (output,B3);
        Delay (sixteenth);
      noTone (output);
    //                        8th rest
      Delay (eighth);
    //
      Tone (output,Cs4);
        Delay (eighth);
      noTone (output);
    //                        E3 doteighth
      Tone (output,E3);
        Delay (doteighth);
      noTone (output);
    //                         B3 sixteenth
      Tone (output,B3);
        Delay (sixteenth);
      noTone (output);
    //                         8th rest 
      Delay(eighth);
    //                         C#5 (overlapping 8th note) 
      Tone (output,Cs5);
        Delay (eighth);
      noTone (output);
    //------------------------------------------ Measure 33
    //                          G#5 
      Tone (output,Gs5);
        Delay (eighth);
      noTone (output); 
    //                         G#5
      Tone (output,Gs5);
        Delay (eighth);
      noTone (output);
    //                         F#5 
      Tone (output,Fs5);
        Delay(eighth);
      noTone(output);
    //                        8th rest 
      Delay(eighth);
    //                         E5
      Tone (output,E5);
        Delay(eighth);
      noTone(output);
    //                         D#5 
      Tone (output,Ds5);
        Delay (eighth);
      noTone (output);
    //                        E5 
      Tone (output,E5);
        Delay (doteighth);
      noTone (output);
    //                        D#5 overlapping eighth
      Tone (output,Ds5);
        Delay (eighth);
      noTone (output);
    //----------------------------------------------- Measure 34 
      Tone (output,E3);
        Delay (doteighth);
      noTone (output);
    //                        B3
      Tone (output,B3);
        Delay (sixteenth); 
      noTone (output);
    //                        8th rest 
      Delay (eighth);
    //                        C#4
      Tone (output,Cs4);
        Delay (eighth);
      noTone (output);
    //                        G#5 
      Tone (output,Gs5);
        Delay (eighth);
      noTone (output);
    //                        G#5
      Tone (output,Gs5);
        Delay (eighth)
      noTone (output);
    //                        F#5
      Tone (output,Fs5);
        Delay (eighth):
      noTone (output);
    //                        E5 
      Tone (output,E5);
        Delay (eighth);
      noTone (output);
    //----------------------------------------- Measure 35 
    //                        D#5
      Tone (output,Ds5);
        Delay (doteighth);
      noTone (output);
    //                        E5
      Tone (output,E5);
        Delay (sixteenth);
      noTone (output);
    //                        E5
      Tone (output,E5);
        Delay (eighth);
      noTone (output);
    //                        D#5
      Tone (output,Ds5);
        Delay (eighth);
      noTone (output);
    //                        C#5
      Tone (output,Cs5);
        Delay (doteighth);
      noTone (output);
    //                        B3
      Tone (output,B3);
        Delay (sixteenth);
      noTone (output);
    //                        8th rest 
      Delay (eighth);
    //                        C#4
      Tone (output,Cs4);
        Delay (eighth);
      noTone (output);
    //------------------------------------- Measure 36
    //                        G#5
      Tone (output,Gs5);
        Delay (eighth);
      noTone (output);
    //                        F#5
      Tone (output,Fs5);
        Delay (eighth);
      noTone (output);
    //                        E5
      Tone (output,E5);
        Delay (eighth);
      noTone (output);
    //                        D#5
      Tone (output,Ds5):
        Delay (sixteenth);
      noTone (output);
    //                        E5
      Tone (output,E5);
        Delay (eigtht);
      noTone (output);
    //                        D#5
      Tone (output,Ds5);
        Delay (sixteenth);
      noTone (output);
    //                        8th rest 
      Delay (eighth)
    //                        C#5 
      Tone (output,Cs5);
        Delay (eighth);
      noTone (output);
    //--------------------------------------- Measure 37
    //                        C#5 
      Tone (output,Cs5);
        Delay (doteighth);
      noTone (output);
    //                        D#5
      Tone (output,Ds5);
        Delay (sixteenth);
      noTone (output);
    //                        8th rest 
      Delay (eighth);
    //                        C#5
      Tone (output,Cs5);
        Delay (eighth);
      noTone (output);
    //                        B4
      Tone (output,B4);
        Delay (eighth);
      noTone (output);
    //                        C#5
      Tone (output,Cs5);
        Delay (quarter);
      noTone (output);
    //                        A#4
      Tone (output,As4);
        Delay (sixteenth);
      noTone (output);
    //                        8th rest 
      Delay (eighth);
    //                        B3
      Tone (output,B3);
        Delay (eighth);
      noTone (output);
    //------------------------------------- Measure 38 
    //                        D#3
      Tone (output,Ds3);
        Delay (doteighth);
      noTone (output);
    //                        A#3
      Tone (output,As3);
        Delay (sixteenth);
      noTone (output);
    //                        8th rest 
      Delay (eighth);
    //                        B3 
      Tone (output,B3);
        Delay (eighth);
      noTone (output);
    //                        d#3
      Tone (output,Ds3);
        Delay (doteighth);
      noTone (output);
    //                        A#3
      Tone (output,As3);
        Delay (sixteenth);
      noTone (output);
    //                        8th rest 
      Delay (eighth);
    //                        C#5
      Tone (output,Cs5);
        Delay (eighth):
      noTone (output);
    //------------------------------------ Measure 39
    //                        B4
      Tone (output,B4);
        Delay (doteighth);
      noTone (output);
    //                        F#4
      Tone (output,Fs4);
        Delay (sixteenth);
      noTone (output);
    //                        8th rest
      Delay (eighth);
    //                        G#4
      Tone (output,Gs4);
        Delay (eighth);
      noTone (output);
    //                        G#3
      Tone (output,Gs3);
        Delay (doteighth);
      noTone (output);
    //                        F#4
      Tone (output,Fs4);
        Delay (sixteenth);
      noTone (output);
    //                        8th rest 
      Delay (eighth);
    //                        G#4
      Tone (output,Gs4);
        Delay (eighth);
      noTone (output);
    //----------------------------------- Measure 40
    //                        E3
      Tone (output,E3);
        Delay (doteighth);
      noTone (output);
    //                        B3
      Tone (output,B3);
        Delay (sixteenth);
      noTone (output);
    //                        8th rest 
      Delay (eighth);
    //                        C#4
      Tone (output,Cs4);
        Delay (eighth);
      noTone (output);
    //                        E3
      Tone (output,E3);
        Delay (doteighth);
      noTone (output);
    //                        B3
      Tone (output,B3);
        Delay (sixteenth);
      noTone (output);
    //                        8th rest 
      Delay (eighth);
    //                        C#4
      Tone (output,Cs4);
        Delay (eighth);
      noTone (output);
    //--------------------------------- Measure 41
    //                        F#5 
      Tone (output,Fs5);
        Delay (quarter);
      noTone (output);
    //                        C#5
      Tone (output,Cs5);
        Delay (quarter);
      noTone (output);
    //                        E3
      Tone (output,E3);
        Delay(whole);
      noTone (output);
    //-------------------------------- Measure 42
    //                        B4
      Tone (output,B4);
        Delay (quarter);
      noTone (output);
    //                        E3
      Tone (output,E3);
        Delay (eighth);
      noTone (output);
    //                        C#3
      Tone (output,Cs3);
        Delay (eighth);
      noTone (output);
    //------------------------------- Measure 43 
    //                        F#5
      Tone (output,Fs5);
        Delay (quarter);
      noTone (output);
    //                        A#4
      Tone (output,As4);
        Delay (quarter);
      noTone (output);
    //                        C#3
      Tone (output,Cs3);
        Delay (halfnote);
      noTone (output);
    //-------------------------------- Measure 44
    //                        C#3
      Tone (output,Cs3);
        Delay (quarter);
      noTone (output);
    //                        A#4 
      Tone (output,As4);
        Delay (quarter);
      noTone (output);
    //                        G#4
      Tone (output,Gs4);
        Delay (quarter);
      noTone (output);
    //                        C#3
      Tone (output,Cs3);
        Delay (quarter);
      noTone (output);
    //-------------------------------- Measure 45 
    //                        A#4
      Tone (output,As4);
        Delay (quarter);
      noTone (output);
    //                        F#4
      Tone (output,Fs4);
        Delay (quarter);
      noTone (output)
    //                        D#3 
      Tone (output,Ds3);
        Delay (whole);
      noTone (output);
    //------------------------------- Measure 46
    //                        A#4
      Tone (output,As4);
        Delay (quarter);
      noTone (output);
    //                        C#5
      Tone (output,Cs5);
        Delay (quarter);
      noTone (output);
    //------------------------------ Measure 47
    //                        G#4
      Tone (output,Gs4);
        Delay (quarter);
      noTone (output);
    //                        D#3
      Tone (output,Ds3);
        Delay (half+quarter);
      noTone (output);
    //-------------------------------- Measure 48 
    //                       G#4
      Tone (output,Gs4);
        Delay (quarter);
      noTone (output);
    //                       B4
      Tone (output,B4);
        Delay (quarter);
      noTone (output);
    //                        G#4
      Tone (output,Gs4);
        Delay (quarter);
      noTone (output);
    //                        C#5
      Tone (output,Cs5);
        Delay (quarter);
      noTone(output);
    //------------------------------------------------------------------------- END OF SONG-------------------------------------------------------
  }
}
