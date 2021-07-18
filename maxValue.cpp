int maxValue(int data[], int length) {
	int largest=data[0];
    for(int i=0; i<length; i++){
        if(largest<data[i]){
            largest=data[i];
        }
    }
    return largest;
}
