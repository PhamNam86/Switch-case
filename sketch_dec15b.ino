const int congtachanhtrinh = 3;  // Dây ra công tăc hành trình dây màu xanh nối chân 3   
//const int led =  13;  
int giatri = 0;     
void setup() {
  Serial.begin(115200);
  //pinMode(led, OUTPUT);
  pinMode(congtachanhtrinh, INPUT);
}
void loop() {
  giatri = digitalRead(congtachanhtrinh); // Đọc tín hiệu từ chân số 3
  Serial.print("GIA TRI NHAN DUOC: ");
 Serial.println(giatri);
 // giá trị nhận được từ công tắc hành trình bằng 1 thì led sáng 
 // còn giá trị nhận được từ công tắc hành trình bằng 0 thì led tắt
  if (giatri == HIGH) {
    //digitalWrite(led, HIGH);
    Serial.println("go Ahead");
  } 
  else {
    //digitalWrite(led, LOW);
    Serial.println("go Back");
  }
  delay(1000);// delay 1 giây
}
