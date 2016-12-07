byte seven_seg_digits[10][7] = { { 0,0,0,0,0,0,1 },  // = Digito 0
                                 { 1,0,0,1,1,1,1 },  // = Digito 1
                                 { 0,0,1,0,0,1,0 },  // = Digito 2
                                 { 0,0,0,0,1,1,0 },  // = Digito 3
                                 { 1,0,0,1,1,0,0 },  // = Digito 4
                                 { 0,1,0,0,1,0,0 },  // = Digito 5
                                 { 0,1,0,0,0,0,0 },  // = Digito 6
                                 { 0,0,0,1,1,1,1 },  // = Digito 7
                                 { 0,0,0,0,0,0,0 },  // = Digito 8
                                 { 0,0,0,1,1,0,0 }}; // = Digito 9

int numPark1 = 0; //Numero de vagas no setor 1
int numPark2 = 9; //Numero de vagas no setor 2                                 

void setup() {
  pinMode(18, INPUT); //Pino do sensor1 entrada do setor 1
  pinMode(19, INPUT); //Pino do sensor2 entrada do setor 1
  pinMode(20, INPUT); //Pino do sensor3 entrada do setor 2
  pinMode(21, INPUT); //Pino do sensor4 entrada do setor 2
  pinMode(22, INPUT); //Pino do sensor5 saida do setor 2
  
  pinMode(2, OUTPUT); //Pino 2 do Arduino ligado ao segmento A do primeiro display  
  pinMode(3, OUTPUT); //Pino 3 do Arduino ligado ao segmento B do primeiro display  
  pinMode(4, OUTPUT); //Pino 4 do Arduino ligado ao segmento C do primeiro display  
  pinMode(5, OUTPUT); //Pino 5 do Arduino ligado ao segmento D do primeiro display  
  pinMode(6, OUTPUT); //Pino 6 do Arduino ligado ao segmento E do primeiro display  
  pinMode(7, OUTPUT); //Pino 7 do Arduino ligado ao segmento F do primeiro display  
  pinMode(8, OUTPUT); //Pino 8 do Arduino ligado ao segmento G do primeiro display
  
  pinMode(9, OUTPUT); //Pino 2 do Arduino ligado ao segmento A do segundo display  
  pinMode(10, OUTPUT); //Pino 3 do Arduino ligado ao segmento B do segundo display 
  pinMode(11, OUTPUT); //Pino 4 do Arduino ligado ao segmento C do segundo display  
  pinMode(12, OUTPUT); //Pino 5 do Arduino ligado ao segmento D do segundo display  
  pinMode(13, OUTPUT); //Pino 6 do Arduino ligado ao segmento E do segundo display 
  pinMode(14, OUTPUT); //Pino 7 do Arduino ligado ao segmento F do segundo display  
  pinMode(15, OUTPUT); //Pino 8 do Arduino ligado ao segmento G do segundo display   
}

void sevenSegWrite(byte digit, byte pin)  //Funcao que aciona o display
{
  //Percorre o array ligando os segmentos correspondentes ao digito
  for (byte segCount = 0; segCount < 7; ++segCount)  
  { 
    digitalWrite(pin, seven_seg_digits[digit][segCount]);
    ++pin;
  }
}

int sensorRead(int sensorPin) //Funcao que le o sensor
{  
  int i = digitalRead(sensorPin);
  return i;  
}

void loop() {

  sevenSegWrite(numPark1, 2);
  /*sevenSegWrite(numPark2, 9);
  
  if(sensorRead(18) && sensorRead(19)){
    numPark1--;
  }
  
  if(sensorRead(20) && sensorRead(21)){
    numPark1++;
    numPark2--;
  }

  if(sensorRead(22)){
    numPark2++;
  }
  */
}
