void printer(int* arr, int len){
  printf("arr[%d]={",len);
  for(int i=0;i<len;i++){
    printf("%d, ",arr[i]);
  }
  printf("};\n");
}
