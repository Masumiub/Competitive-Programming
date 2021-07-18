void collapsePairs(int a[], int length) {
	int i;
    for(i=0; i<length; i=i+2){
        int sum=0;
        sum=a[i]+a[i+1];
        if(i+1>=length){
            break;
        }
        if(sum%2==0){
            a[i]=sum;
            a[i+1]=0;
        }
        else{
            a[i+1]=sum;
            a[i]=0;
        }
    }
}
