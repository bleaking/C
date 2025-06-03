int binarysearch(int* arr,int si,int li,int data){
  if(si<=li){
    int mid=(si+li)/2;
    if(arr[mid]==data)
    return mid;
    if(arr[mid]<data){
      return binarysearch(arr,mid+1,li,data);
      }
    if(arr[mid]>data){
      return binarysearch(arr,si,mid-1,data);
      }
  }
  return -1;
}
