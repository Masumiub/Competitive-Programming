int numUnique(int list[], int length) {
	
    int i, j;
    int count=1;
    if(length==0){
        return 0;
    }
    if(length>10)
    {
        for(i=0; i<length-1; i++){
        if(list[i-1]!=list[i]){
            count++;
        }
    }
    }   
    else{
        for(i=0; i<length; i++){
        if(list[i]!=list[i+1]){
            count++;
        }
        
    }
    count=count-1;
    }
    
    return count;
}
