int linearsearch(int* arr,int length,int data){
  for(int i=0;i<length;i++){
    if(arr[i]==data)
    return i;
  }
  return -1;
}
