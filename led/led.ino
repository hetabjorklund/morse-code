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

  for (char letter : message) {
    Serial.println(letter);

    if (letter == ' ') {
      getSpaceBetweenWords();
    }
    else {
      getLetter(letter);
    }       
    getSpaceBetweenLetters();
  }
  digitalWrite(ledPin, LOW);
}

void getDot() {
  digitalWrite(ledPin, HIGH);
  delay(dotLenght);
}

void getDash() {
  digitalWrite(ledPin, HIGH);
  delay(dashLength);
}

void getSpaceWithInLetter() {
  digitalWrite(ledPin, LOW);
  delay(spaceWithinLetter); 
}

void getSpaceBetweenLetters() {
  digitalWrite(ledPin, LOW);
  delay(spaceBetweenLetters);
}

void getSpaceBetweenWords() {
  digitalWrite(ledPin, LOW);
  delay(spaceBetweenWords);
}

void getA() {
  getDot();
  getSpaceWithInLetter();
  getDash();
}

void getB() {
  getDash();
  getSpaceWithInLetter();
  getDot();
  getSpaceWithInLetter();
  getDot();
  getSpaceWithInLetter();
  getDot();
}

void getC() {
  getDash();
  getSpaceWithInLetter();
  getDot();
  getSpaceWithInLetter();
  getDash();
  getSpaceWithInLetter();
  getDot();
}

void getD() {
  getDash();
  getSpaceWithInLetter();
  getDot();
  getSpaceWithInLetter();
  getDot();
}   

void getE() {
  getDot();
}

void getF() {
  getDot();
  getSpaceWithInLetter();
  getDot();
  getSpaceWithInLetter();
  getDash();
  getSpaceWithInLetter();
  getDot();
}

void getG() {
  getDash();
  getSpaceWithInLetter();
  getDash();
  getSpaceWithInLetter();
  getDot();
}

void getH() {
  getDot();
  getSpaceWithInLetter();
  getDot();
  getSpaceWithInLetter();
  getDot();
  getSpaceWithInLetter();
  getDot();
}

void getI() {
  getDot();
  getSpaceWithInLetter();
} 

void getJ() {
  getDot();
  getSpaceWithInLetter();
  getDash();
  getSpaceWithInLetter();
  getDash();
  getSpaceWithInLetter();
  getDash();
}         

void getK() {
  getDash();
  getSpaceWithInLetter();
  getDot();
  getSpaceWithInLetter();
  getDash();
}

void getL() {
  getDot();
  getSpaceWithInLetter();
  getDash();
  getSpaceWithInLetter();
  getDot();
  getSpaceWithInLetter();
  getDot();
} 

void getM() {
  getDash();
  getSpaceWithInLetter();
  getDash();
}

void getN() {
  getDash();
  getSpaceWithInLetter();
  getDot();
}

void getO() {
  getDash();
  getSpaceWithInLetter();
  getDash();
  getSpaceWithInLetter();
  getDash();
}

void getP() {
  getDot();
  getSpaceWithInLetter();
  getDash();
  getSpaceWithInLetter();
  getDash();
  getSpaceWithInLetter();
  getDot();
}

void getQ() {
  getDash();
  getSpaceWithInLetter();
  getDash();
  getSpaceWithInLetter();
  getDot();
  getSpaceWithInLetter();
  getDash();
}

void getR() {
  getDot();
  getSpaceWithInLetter();
  getDash();
  getSpaceWithInLetter();
  getDot();
}

void getS() {
  getDot();
  getSpaceWithInLetter();
  getDot();
  getSpaceWithInLetter();
  getDot();
} 

void getT() {
  getDash();
}

void getU() {
  getDot();
  getSpaceWithInLetter();
  getDot();
  getSpaceWithInLetter();
  getDash();
}

void getV() {
  getDot();
  getSpaceWithInLetter();
  getDot();
  getSpaceWithInLetter();
  getDot();
  getSpaceWithInLetter();
  getDash();
}

void getW() {
  getDot();
  getSpaceWithInLetter();
  getDash();
  getSpaceWithInLetter();
  getDash();
}

void getX() {
  getDash();
  getSpaceWithInLetter();
  getDot();
  getSpaceWithInLetter();
  getDot();
  getSpaceWithInLetter();
  getDash();
}

void getY() {
  getDash();
  getSpaceWithInLetter();
  getDot();
  getSpaceWithInLetter();
  getDash();
  getSpaceWithInLetter();
  getDash();
}

void getZ() {
  getDash();
  getSpaceWithInLetter();
  getDash();
  getSpaceWithInLetter();
  getDot();
  getSpaceWithInLetter();
  getDot();
}

void getLetter(char letter) {
  switch (letter) {
    case 'a':
        getA();
    case 'b':
        getB();
    case 'c':
        getC();
    case 'd':
        getD();                          
    case 'e':   
        getE();  
    case 'f':
        getF();
    case 'g':
        getG();
    case 'h':
        getH();
    case 'i':
        getI(); 
    case 'j':   
        getJ();         
    case 'k':
        getK();
    case 'l':   
        getL(); 
    case 'm':   
        getM();
    case 'n':
        getN();
    case 'o':
        getO();
    case 'p':
        getP();
    case 'q':
        getQ();
    case 'r':   
        getR();
    case 's':   
        getS(); 
    case 't':   
        getT();
    case 'u':
        getU();
    case 'v':
        getV();
    case 'w':
        getW();
    case 'x':
        getX();
    case 'y':   
        getY();
    case 'z':
        getZ();
  }
}