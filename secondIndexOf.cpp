int secondIndexOf(int list[], int length, int target) {
	int i, count=0;
    int index;
    for(i=0; i<length; i++){
        if(list[i]==target){
            count++;
            if(count==2){
                index=i;
                break;
            }
        }
    }
    
    if(count==2){
        return index;
    }else{
        return -1;
    }
    
}
