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
  int IR1val = digitalRead(IR1);
  int IR2val = digitalRead(IR2);
  
/* //This block is for testing the IR sensors
  Serial.print("IR1: ");
  Serial.println(IR1val);
  delay(1000);
  Serial.print("IR2: ");
  Serial.println(IR2val);
  delay(1000);
*/

/* //This block is for testing the motors
  digitalWrite(motor11, HIGH);
  delay(1000);
  digitalWrite(motor11, LOW);
  delay(1000);
  digitalWrite(motor22, HIGH);
  delay(1000);
  digitalWrite(motor22, LOW);
  delay(1000);
 */

//This block is for line tracing
//0 is black, 1 is white
  if ((IR1val==1) && (IR2val==1)){
    analogWrite(motor12, 45);
    analogWrite(motor21, 45);
  }
  else if ((IR1val==0) && (IR2val==1)){
    analogWrite(motor12, 0);
    analogWrite(motor21, 45);
  }
  else if ((IR1val==1) && (IR2val==0)){
    analogWrite(motor12, 45);
    analogWrite(motor21, 0);
  }
  else{
    digitalWrite(motor12, 0);
    digitalWrite(motor21, 0);
  }
  delay(10);
}
