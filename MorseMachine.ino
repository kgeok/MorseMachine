//
// begin license header
//
// This file is part of Pixy CMUcam5 or "Pixy" for short
//
// All Pixy source code is provided under the terms of the
// GNU General Public License v2 (http://www.gnu.org/licenses/gpl-2.0.html).
// Those wishing to use Pixy source code, software and/or
// technologies under different licensing terms should contact us at
// cmucam@cs.cmu.edu. Such licensing terms are available for
// all portions of the Pixy codebase presented here.
//
// end license header
//
// This sketch is a good place to start if you're just getting started with 
// Pixy and Arduino.  This program simply prints the detected object blocks 
// (including color codes) through the serial console.  It uses the Arduino's 
// ICSP SPI port.  For more information go here:
//
// https://docs.pixycam.com/wiki/doku.php?id=wiki:v2:hooking_up_pixy_to_a_microcontroller_-28like_an_arduino-29
//
  
#include <Pixy2.h>
#include <String.h>
int count = 0;
int wordCount = 0;
int CountBuffer = 0;
// This is the main Pixy object 
Pixy2 pixy;
char letter[5];
char wordOut[100];
char output;
void setup()
{
  Serial.begin(115200);
  Serial.print("Starting...\n");
  Serial.println("----------------------------------------");
  Serial.println("MorseMachine");
  Serial.println("----------------------------------------");
  Serial.println("D = Dot");
  Serial.println("A = Dash");
  Serial.println("S = Space");
  Serial.println("----------------------------------------");
  delay(500);
  pixy.init();
}

void loop()
{ 
  int i; 
  // grab blocks!
  pixy.ccc.getBlocks();
  
  // If there are detect blocks, print them!
  if (pixy.ccc.numBlocks)
  {
   // Serial.println(pixy.ccc.numBlocks);
    for (i=0; i<pixy.ccc.numBlocks; i++)
    {
    
    Serial.println("");
    if (i == 0){
  Serial.println("DOT! Instance #" + String(count));
    Serial.println("...");
    delay(1000);
    letter[count] = 'D';
    count++;
    }
    if (i == 1){
  //  Serial.println("Ignore Previous");
  count = count - 1;
  count = abs(count);
 Serial.println("DASH! Instance #" + String(count));
    Serial.println("...");
    delay(1000);
    letter[count] = 'A';
    count++;
    }

    if (i == 2){
   // Serial.println("Ignore Previous");
   count = count - 2;
   count = abs(count);
  Serial.println("SPACE! Instance #" + String(count));
    Serial.println("...");
    delay(1000);
    letter[count] = 'S';
    count++;
    }


while (count == 6){
  Serial.print("Final Morse: ");
  for (i = 0; i < 4; i++){
    Serial.print("Response #" + String(i + 1) + ":");
    Serial.print(" " + String(letter[i]) + ", ");
  }
//Letter
  if ((letter[0] == 'D')){
    

    if ((letter[1] == 'D')){
    

      if ((letter[2] == 'D')){
        

        if ((letter[3] == 'D')){
        output = 'H';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'D')){
    

    if ((letter[1] == 'A')){
    

      if ((letter[2] == 'S')){
        

        if ((letter[3] == 'S')){
        output = 'A';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'A')){
    

    if ((letter[1] == 'D')){
    

      if ((letter[2] == 'A')){
        

        if ((letter[3] == 'D')){
        output = 'C';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'A')){
    

    if ((letter[1] == 'D')){
    

      if ((letter[2] == 'D')){
        

        if ((letter[3] == 'D')){
        output = 'B';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'A')){
    

    if ((letter[1] == 'D')){
    

      if ((letter[2] == 'D')){
        

        if ((letter[3] == 'S')){
        output = 'D';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'D')){
    

    if ((letter[1] == 'S')){
    

      if ((letter[2] == 'S')){
        

        if ((letter[3] == 'S')){
        output = 'E';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'D')){
    

    if ((letter[1] == 'D')){
    

      if ((letter[2] == 'A')){
        

        if ((letter[3] == 'D')){
        output = 'F';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'A')){
    

    if ((letter[1] == 'A')){
    

      if ((letter[2] == 'D')){
        

        if ((letter[3] == 'S')){
        output = 'G';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'D')){
    

    if ((letter[1] == 'D')){
    

      if ((letter[2] == 'S')){
        

        if ((letter[3] == 'S')){
        output = 'I';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'D')){
    

    if ((letter[1] == 'A')){
    

      if ((letter[2] == 'A')){
        

        if ((letter[3] == 'A')){
        output = 'J';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'A')){
    

    if ((letter[1] == 'D')){
    

      if ((letter[2] == 'A')){
        

        if ((letter[3] == 'S')){
        output = 'K';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'D')){
    

    if ((letter[1] == 'A')){
    

      if ((letter[2] == 'D')){
        

        if ((letter[3] == 'D')){
        output = 'L';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'A')){
    

    if ((letter[1] == 'A')){
    

      if ((letter[2] == 'S')){
        

        if ((letter[3] == 'S')){
        output = 'M';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'A')){
    

    if ((letter[1] == 'D')){
    

      if ((letter[2] == 'S')){
        

        if ((letter[3] == 'S')){
        output = 'N';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'A')){
    

    if ((letter[1] == 'A')){
    

      if ((letter[2] == 'A')){
        

        if ((letter[3] == 'S')){
        output = 'O';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'D')){
    

    if ((letter[1] == 'A')){
    

      if ((letter[2] == 'A')){
        

        if ((letter[3] == 'D')){
        output = 'P';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'A')){
    

    if ((letter[1] == 'A')){
    

      if ((letter[2] == 'D')){
        

        if ((letter[3] == 'A')){
        output = 'Q';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'D')){
    

    if ((letter[1] == 'A')){
    

      if ((letter[2] == 'D')){
        

        if ((letter[3] == 'S')){
        output = 'R';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'D')){
    

    if ((letter[1] == 'D')){
    

      if ((letter[2] == 'D')){
        

        if ((letter[3] == 'S')){
        output = 'S';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'A')){
    

    if ((letter[1] == 'S')){
    

      if ((letter[2] == 'S')){
        

        if ((letter[3] == 'S')){
        output = 'T';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'D')){
    

    if ((letter[1] == 'D')){
    

      if ((letter[2] == 'A')){
        

        if ((letter[3] == 'S')){
        output = 'U';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'D')){
    

    if ((letter[1] == 'D')){
    

      if ((letter[2] == 'D')){
        

        if ((letter[3] == 'A')){
        output = 'V';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'D')){
    

    if ((letter[1] == 'A')){
    

      if ((letter[2] == 'A')){
        

        if ((letter[3] == 'S')){
        output = 'W';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'A')){
    

    if ((letter[1] == 'D')){
    

      if ((letter[2] == 'D')){
        

        if ((letter[3] == 'A')){
        output = 'X';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'A')){
    

    if ((letter[1] == 'D')){
    

      if ((letter[2] == 'A')){
        

        if ((letter[3] == 'A')){
        output = 'Y';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'A')){
    

    if ((letter[1] == 'A')){
    

      if ((letter[2] == 'D')){
        

        if ((letter[3] == 'D')){
        output = 'Z';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
//Letter
  if ((letter[0] == 'D')){
    

    if ((letter[1] == 'A')){
    

      if ((letter[2] == 'D')){
        

        if ((letter[3] == 'A')){
        output = '_';
        delay(1000);
      }  
      }
      }
      }
//End of Letter
count = 0;  
Serial.println(" ");
Serial.println("----------------------------------------");
Serial.println("The output letter is: " +  String(output));
Serial.println("----------------------------------------");

  wordOut[wordCount] = output;
  wordCount++;
  
  if (output = '_'){
  Serial.print("The word is: ");

  for (int i = 0; i<100; i++){
  Serial.print(String(wordOut[i]));
  }
    
  }
}
}
}
}
