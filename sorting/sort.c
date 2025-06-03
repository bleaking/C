#include<stdio.h>
void sort(int* arr,int len,void(*fn)(int*,int)){
  fn(arr, len);
}
