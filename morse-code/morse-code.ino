const int ledPin = 10;
const int dotLenght = 1000;
const int dashLength = 3000;
const int spaceWithinLetter = 1000;
const int spaceBetweenLetters = 3000;
const int spaceBetweenWords = 7000;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  Serial.println("Write a message: ");

  while (Serial.available() == 0) {
  }

  String message = Serial.readString();  
  Serial.println(message);  

  if (hasInvalidCharacters(message)) {
    return;
  }

  outputMessageInMorse(message);
  endMessage();
  
}

bool hasInvalidCharacters(String message) {
  for (char letter : message) {
    if (!(letter >= 'A' && letter <= 'z') && !(letter >= '0' && letter <= '9')) {
      Serial.println("Please only use characters A-Z or numbers 0-9");
      Serial.println();      
      return true;
    }
    return false;
  }
}

void outputMessageInMorse(String message) {
  for (char letter : message) {
    if (letter == ' ') {
      getSpaceBetweenWords();
    }
    else {
      getLetter(letter);
      getSpaceBetweenLetters();
    }                 
  } 
}

void endMessage() {
  digitalWrite(ledPin, LOW);
  Serial.println();  
  Serial.println(); 
}

void getDot() {
  Serial.print(".");
  digitalWrite(ledPin, HIGH);
  delay(dotLenght);
}

void getDash() {
  Serial.print("-");
  digitalWrite(ledPin, HIGH);
  delay(dashLength);
}

void getSpaceWithinLetter() {
  digitalWrite(ledPin, LOW);
  delay(spaceWithinLetter); 
}

void getSpaceBetweenLetters() {
  Serial.print(" ");
  digitalWrite(ledPin, LOW);
  delay(spaceBetweenLetters);
}

void getSpaceBetweenWords() {
  Serial.print(" ");
  Serial.print(" ");
  digitalWrite(ledPin, LOW);
  delay(spaceBetweenWords);
}

void getA() {
  getDot();
  getSpaceWithinLetter();
  getDash();
}

void getB() {
  getDash();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
}

void getC() {
  getDash();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDot();
}

void getD() {
  getDash();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
}   

void getE() {
  getDot();
}

void getF() {
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDot();
}

void getG() {
  getDash();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDot();
}

void getH() {
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
}

void getI() {
  getDot();
  getSpaceWithinLetter();
} 

void getJ() {
  getDot();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDash();
}         

void getK() {
  getDash();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDash();
}

void getL() {
  getDot();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
} 

void getM() {
  getDash();
  getSpaceWithinLetter();
  getDash();
}

void getN() {
  getDash();
  getSpaceWithinLetter();
  getDot();
}

void getO() {
  getDash();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDash();
}

void getP() {
  getDot();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDot();
}

void getQ() {
  getDash();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDash();
}

void getR() {
  getDot();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDot();
}

void getS() {
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
} 

void getT() {
  getDash();
}

void getU() {
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDash();
}

void getV() {
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDash();
}

void getW() {
  getDot();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDash();
}

void getX() {
  getDash();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDash();
}

void getY() {
  getDash();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDash();
}

void getZ() {
  getDash();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
}

void get0() {
  getDash();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDash();
}

void get1() {
  getDot();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDash();
}

void get2() {
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDash();
}

void get3() {
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDash();
}

void get4() {
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDash();
}

void get5() {
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
}

void get6() {
  getDash();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
}

void get7() {
  getDash();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
}

void get8() {
  getDash();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDot();
  getSpaceWithinLetter();
  getDot();
}

void get9() {
  getDash();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDash();
  getSpaceWithinLetter();
  getDot();
}

void getLetter(char letter) {
  switch (letter) {
    case 'A':
    case 'a':
        getA();
        break;
    case 'B':
    case 'b':
        getB();
        break;
    case 'C':
    case 'c':
        getC();
        break;
    case 'D':
    case 'd':
        getD();
        break;                          
    case 'E':
    case 'e':   
        getE();
        break;  
    case 'F':
    case 'f':
        getF();
        break;
    case 'G':
    case 'g':
        getG();
        break;
    case 'H':
    case 'h':
        getH();
        break;
    case 'I':
    case 'i':
        getI(); 
        break;
    case 'J':  
    case 'j':   
        getJ();
        break;         
    case 'K':
    case 'k':
        getK();
        break;
    case 'L': 
    case 'l':   
        getL();
        break; 
    case 'M': 
    case 'm':   
        getM();
        break;
    case 'N':
    case 'n':
        getN();
        break;
    case 'O':
    case 'o':
        getO();
        break;
    case 'P':
    case 'p':
        getP();
        break;
    case 'Q':
    case 'q':
        getQ();
        break;
    case 'R': 
    case 'r':   
        getR();
        break;
    case 'S': 
    case 's':   
        getS();
        break; 
    case 'T':
    case 't':   
        getT();
        break;
    case 'U':
    case 'u':
        getU();
        break;
    case 'V':
    case 'v':
        getV();
        break;
    case 'W':
    case 'w':
        getW();
        break;
    case 'X':
    case 'x':
        getX();
        break;
    case 'Y': 
    case 'y':   
        getY();
        break;
    case 'Z':
    case 'z':
        getZ();
        break;
    case '0':
        get0();
        break;
    case '1':
        get1();
        break;
    case '2':
        get2();
        break;
    case '3':
        get3();
        break;
    case '4':
        get4();
        break;
    case '5':
        get5();
        break;
    case '6':
        get6();
        break;
    case '7':
        get7();
        break;
    case '8':
        get8();
        break;
    case '9':
        get9();
        break;
  }
}