void setup() {
    size(400, 300);
    textSize(40);
}
int choice = -1;
void draw() {
    background(#DFEA45);
    fill(#456FEA);
    if (choice == 0) ellipse(25, 25, 40, 40);
    if (choice == 1) ellipse(25, 75, 40, 40);
    if (choice == 2) ellipse(25,125, 40, 40);
    text("Choise 1", 50, 50);
    text("Choise 2", 50, 100);
    text("Choise 3", 50, 150);
}
void mousePressed() {
    choice = int(random(3));
}
