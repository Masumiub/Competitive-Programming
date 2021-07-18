void fibonacci(int max) {
	
   int i, t1=0, t2=1, next=0;
	
	cout<< "Fibonacci sequence up to "<< max<<":"<< endl;
        cout<< t1<< endl;
		    cout<< t2<<endl;
		
		next=t1+t2;
    while(next<max){
        cout<< next<<endl;
		t1=t2;
		t2= next;
		next=t1+t2;
    }
    
}
