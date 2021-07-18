void switchPairs(string a[], int length) {
	int i,j;
	if(length%2==0){
	for(i=0; i<length; i=i+2){
	    string tmp;
	    tmp=a[i];
	    a[i]=a[i+1];
	    a[i+1]=tmp;
	}
	}
	else if(length%2==1){
	    for(i=0; i<length-1; i=i+2){
	    string tmp;
	    tmp=a[i];
	    a[i]=a[i+1];
	    a[i+1]=tmp;
	}
	}
}
