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

  Serial.println();
  Serial.println("Write a message: ");

  while (Serial.available() == 0) {
  }

  String message = Serial.readString();  
  Serial.println(message);  

  for (char letter : message) {
    if (letter == ' ') {
      getSpaceBetweenWords();
    }
    else {
      getLetter(letter);
      getSpaceBetweenLetters();
    }           
  }  
  digitalWrite(ledPin, LOW);
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

void getLetter(char letter) {
  switch (letter) {
    case 'a':
        getA();
        break;
    case 'b':
        getB();
        break;
    case 'c':
        getC();
        break;
    case 'd':
        getD();
        break;                          
    case 'e':   
        getE();
        break;  
    case 'f':
        getF();
        break;
    case 'g':
        getG();
        break;
    case 'h':
        getH();
        break;
    case 'i':
        getI(); 
        break;
    case 'j':   
        getJ();
        break;         
    case 'k':
        getK();
        break;
    case 'l':   
        getL();
        break; 
    case 'm':   
        getM();
        break;
    case 'n':
        getN();
        break;
    case 'o':
        getO();
        break;
    case 'p':
        getP();
        break;
    case 'q':
        getQ();
        break;
    case 'r':   
        getR();
        break;
    case 's':   
        getS();
        break; 
    case 't':   
        getT();
        break;
    case 'u':
        getU();
        break;
    case 'v':
        getV();
        break;
    case 'w':
        getW();
        break;
    case 'x':
        getX();
        break;
    case 'y':   
        getY();
        break;
    case 'z':
        getZ();
        break;
  }
}