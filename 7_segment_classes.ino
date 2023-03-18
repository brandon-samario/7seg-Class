/*
Controls a seven-segment display to display digits from 0 to 9.
The code defines seven constant integer values that correspond to the pins connected to the segments of the seven-segment display. 
These values are then used to create a SevenSegmentDisplay object, which is used to control the display.
The SevenSegmentDisplay class has a constructor that takes in seven integer values that correspond to the pins connected to the segments of the display. 
The constructor sets these pin modes to OUTPUT and initializes private member variables that represent each segment pin.
The class has a public method called displayDigit that takes in an integer parameter between 0 and 9. 
Uses a switch statement to turn on the segments necessary to display the digit passed in as a parameter. 
If an invalid digit is passed in, all segments are turned off.
The setup function is left empty because there are no setup requirements for this code. 
The loop function then iterates through digits from 0 to 9 using a for loop, displaying each digit for one second.
*/

const int SEG_A = 2; //seg a to digital pin 2
const int SEG_B = 3; //seg b to digital pin 3
const int SEG_C = 4; //seg c to digital pin 4
const int SEG_D = 5; //seg d to digital pin 5
const int SEG_E = 6; //seg e to digital pin 6
const int SEG_F = 7; //seg f to digital pin 7
const int SEG_G = 8; //seg g to digital pin 8

class SevenSegmentDisplay {
  private:
    int a, b, c, d, e, f, g;
  public:
    SevenSegmentDisplay(int _a, int _b, int _c, int _d, int _e, int _f, int _g) {
      a = _a;
      b = _b;
      c = _c;
      d = _d;
      e = _e;
      f = _f;
      g = _g;
      pinMode(a, OUTPUT); //set a as output
      pinMode(b, OUTPUT); //set b as output
      pinMode(c, OUTPUT); //set c as output
      pinMode(d, OUTPUT); //set d as output
      pinMode(e, OUTPUT); //set e as output
      pinMode(f, OUTPUT); //set f as output
      pinMode(g, OUTPUT); //set g as output
    }
    void displayDigit(int digit) {
      switch (digit) {
        case 0: //displays 0
          digitalWrite(a, HIGH); //segment a on
          digitalWrite(b, HIGH); //segment b on
          digitalWrite(c, HIGH); //segment c on
          digitalWrite(d, HIGH); //segment d on
          digitalWrite(e, HIGH); //segment e on
          digitalWrite(f, HIGH); //segment f on
          digitalWrite(g, LOW); //segment g off
          break;
        case 1: //displays 1
          digitalWrite(a, LOW); //segment a off
          digitalWrite(b, HIGH); //segment b on
          digitalWrite(c, HIGH); //segment c on
          digitalWrite(d, LOW); //segment d off
          digitalWrite(e, LOW); //segment e off
          digitalWrite(f, LOW); //segment f off
          digitalWrite(g, LOW); //segment g off
          break;
        case 2: //displays 2
          digitalWrite(a, HIGH); //segment a on
          digitalWrite(b, HIGH); //segment b on
          digitalWrite(c, LOW); //segment c off
          digitalWrite(d, HIGH); //segment d on
          digitalWrite(e, HIGH); //segment e on
          digitalWrite(f, LOW); //segment f off
          digitalWrite(g, HIGH); //segment g on
          break;
        case 3: //displays 3
          digitalWrite(a, HIGH); //segment a on
          digitalWrite(b, HIGH); //segment b on
          digitalWrite(c, HIGH); //segment c on
          digitalWrite(d, HIGH); //segment d on
          digitalWrite(e, LOW); //segment e off
          digitalWrite(f, LOW); //segment f off
          digitalWrite(g, HIGH); //segment g on
          break;
        case 4: //displays 4
          digitalWrite(a, LOW); //segment a off
          digitalWrite(b, HIGH); //segment b on
          digitalWrite(c, HIGH); //segment c on
          digitalWrite(d, LOW); //segment d off
          digitalWrite(e, LOW); //segment e off
          digitalWrite(f, HIGH); //segment f on
          digitalWrite(g, HIGH); //segment g on
          break;
        case 5: //displays 5
          digitalWrite(a, HIGH); //segment a on
          digitalWrite(b, LOW); //segment b off
          digitalWrite(c, HIGH); //segment c on
          digitalWrite(d, HIGH); //segment d on
          digitalWrite(e, LOW); //segment e off
          digitalWrite(f, HIGH); //segment f on
          digitalWrite(g, HIGH); //segment g on
          break;
        case 6: //displays 6
          digitalWrite(a, HIGH); //segment a on
          digitalWrite(b, LOW); //segment b off
          digitalWrite(c, HIGH); //segment c on 
          digitalWrite(d, HIGH); //segment d on 
          digitalWrite(e, HIGH); //segment e on
          digitalWrite(f, HIGH); //segment f on
          digitalWrite(g, HIGH); //segment g on
          break;
        case 7: //displays 7
          digitalWrite(a, HIGH); //segment a on
          digitalWrite(b, HIGH); //segment b on
          digitalWrite(c, HIGH); //segment c on
          digitalWrite(d, LOW); //segment d off
          digitalWrite(e, LOW); //segment e off
          digitalWrite(f, LOW); //segment f off
          digitalWrite(g, LOW); //segment g off
          break;
        case 8: //displays 8
          digitalWrite(a, HIGH); //segment a on
          digitalWrite(b, HIGH); //segment b on
          digitalWrite(c, HIGH); //segment c on
          digitalWrite(d, HIGH); //segment d on
          digitalWrite(e, HIGH); //segment e on
          digitalWrite(f, HIGH); //segment f on
          digitalWrite(g, HIGH); //segment g on
          break;
        case 9: //displays 9
          digitalWrite(a, HIGH); //segment a on
          digitalWrite(b, HIGH); //segment b on
          digitalWrite(c, HIGH); //segment c on
          digitalWrite(d, HIGH); //segment d on 
          digitalWrite(e, LOW); //segment e off
          digitalWrite(f, HIGH); //segment f on
          digitalWrite(g, HIGH); //segment g on
          break;
        default:
          // turn off all segments if an invalid digit is passed
          digitalWrite(a, LOW); //segment a off
          digitalWrite(b, LOW); //segment b off
          digitalWrite(c, LOW); //segment c off
          digitalWrite(d, LOW); //segment d off
          digitalWrite(e, LOW); //segment e off
          digitalWrite(f, LOW); //segment f off
          digitalWrite(g, LOW); //segment g off
          break;
      }
    }
};

SevenSegmentDisplay display(SEG_A, SEG_B, SEG_C, SEG_D, SEG_E, SEG_F, SEG_G);

void setup() {
  // nothing 
}

//display digits 0-9 
void loop() {
  for (int i = 0; i <= 9; i++) {
    display.displayDigit(i);
    delay(1000);
  }
}


