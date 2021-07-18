bool sorted(double list[], int length) {
	
    int i, j;
    int count=0;
    if (length == 1 || length == 0)
    {return true;}
    for(i=0; i<length-1; i++){
        
            if(list[i] > list[i+1]){
                count++;
            }
          
    }
    
    if(count>0){
        return false;
    }
    else{
        return true;
    }
}
