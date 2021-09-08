#include "Box.h"
#include <iostream>

void Box:: setWidth(int wid){
  width = wid;
}
void Box:: setLength(int len){
  length = len;
}
void Box:: setHeight(int hei){
  height = hei;
}

//Getters
int Box:: getHeight(){
  return height;
}
int Box :: getLength(){
  return length;
}
int Box:: getWidth(){
  return width;
}
int Box::calcVolume() {
  return length* width * height;
}
