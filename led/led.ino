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
  }
  
  digitalWrite(ledPin, HIGH);
  delay(5000); // 5 seconds on
  digitalWrite(ledPin, LOW);
  delay(2000); // 2 seconds off
  
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
    case 'å':
        getÅ();
    case 'ä':
        getÄ();
    case 'ö':
        getÖ();
  }
}

void getA() {}

void getB() {}

void getC() {}

void getD() {}   

void getE() {}

void getF() {}

void getG() {}

void getH() {}

void getI() {} 

void getJ() {}         

void getK() {}

void getL() {} 

void getM() {}

void getN() {}

void getO() {}

void getP() {}

void getQ() {}

void getR() {}

void getS() {} 

void getT() {}

void getU() {}

void getV() {}

void getW() {}

void getX() {}

void getY() {}

void getZ() {}

void getÅ() {}

void getÄ() {}

void getÖ() {}