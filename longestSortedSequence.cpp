int longestSortedSequence(int a[], int length) {
	int i,j;
    
    int len=1;
    int maxlen=1;
    
    if(length==0){
        return 0;
    }
    
    for(i=0; i<length-1; i++){

            if(a[i]<=a[i+1]){
                len++;
                if(len>maxlen){
                maxlen=len;
                }
            }
            
            else{
                len=1;
            }
    }
    return maxlen; 
}
