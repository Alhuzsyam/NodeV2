void sensor(){
//  delay(200);
//  //pembacaan sensor membutuhkan waktu 250ms
//  //Pembacaan untuk data kelembaban
//   humidity_1 = dht.readHumidity();
//  //Pembacaan dalam format celcius (c)
//   celcius_1 = dht.readTemperature();
//  //pembacaan dalam format Fahrenheit
//   fahrenheit_1 = dht.readTemperature(true);
// 
//  //mengecek pembacaan apakah terjadi kegagalan atau tidak
//  if (isnan(humidity_1) || isnan(celcius_1) || isnan(fahrenheit_1)) {
//    Serial.println("Pembacaan data dari module sensor gagal!");
//    return;
//  }
// 
//  int htof = dht.computeHeatIndex(fahrenheit_1, humidity_1); 
//  //Prosedur pembacaaan data indeks panas dalam bentuk fahreheit
//  int htoc = dht.computeHeatIndex(celcius_1, humidity_1, false);
// //Prosedur pembacaaan data indeks panas dalam bentuk celcius
// 
//  //pembacaan nilai pembacaan data kelembaban
//  Serial.print("Kelembaban: ");
//  Serial.print(humidity_1);
//  Serial.print(" %\t");
//  
//  //pembacaan nilai pembacaan data suhu
//  Serial.print("Suhu : ");
//  Serial.print(celcius_1); //format derajat celcius
//  Serial.print("°"); //simbol derajat
//  Serial.print("C / ");
//  Serial.print(fahrenheit_1); //format derajat fahrenheit
//  Serial.print("°");
//  Serial.print("F\t");

   humidity_1 = dht.readHumidity(); //menyimpan nilai Humidity pada variabel kelembaban
   celcius_1 = dht.readTemperature(); //menyimpan nilai Temperature pada variabel suhu
   fahrenheit_1 = (celcius_1*9/5)+32;
  Serial.print(" Kelembaban: "); //menampilkan tulisan Kelembaban di Serial Monitor
  Serial.print(humidity_1); //menampilkan nilai kelembaban
  Serial.print(" Suhu: "); //menampilkan tulisan suhu
  Serial.println(celcius_1); //menampilkan nilai suhu


  }
