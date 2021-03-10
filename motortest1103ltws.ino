int motor11 = 5;
int motor12 = 6;
int motor21 = 9;
int motor22 = 10;
int IR1 = 11;
int IR2 = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor11, OUTPUT);
  pinMode(motor12, OUTPUT);  
  pinMode(motor21, OUTPUT);
  pinMode(motor22, OUTPUT);
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // uncomment only the section you want to test
/*  digitalWrite(motor11, HIGH);
  delay(1000);
  digitalWrite(motor11, LOW);
  delay(1000);
  digitalWrite(motor22, HIGH);
  delay(1000);
  digitalWrite(motor22, LOW);
  delay(1000);
*/

/*  //pwm
  analogWrite(motor11, 100);
  delay(1000);
  analogWrite(motor11, 0);
  delay(1000);
  digitalWrite(motor11, HIGH);
  delay(1000);
  digitalWrite(motor11, LOW);
  delay(1000);
*/
}
