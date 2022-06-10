void setup(){
  size(300,300);
}
String line= "";
void draw(){
  background(#DECCFC);
  fill(0);
  textSize(50);
  text(line, 20, 50);
}
void keyPressed(){//按鍵
  line = "key: "+ key;
  line +="\nkeyCode: "+ keyCode;
}
