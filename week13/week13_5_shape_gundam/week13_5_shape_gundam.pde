PShape gundam;//等下要用的鋼彈模型
void setup(){ //P語言其實是Java的變形
  size( 500, 500, P3D);//有P語言的3D功能
  gundam = loadShape("Gundam.obj"); //讀入模型,像loadImage()
}
void draw(){
   background(#9EABFC);
   translate( 250, 0, 0);//往右移動一半
   scale( 20, 20, 20);//放大20倍
   shape(gundam);//秀出模型,像image();
}
