string rev(string s) {
    string temp = "";
    int k = 0;
    for(int i = s.size() - 1; i >= 0; i--) {
        temp += s[i];
    }
    return temp;
}

void swap(string &s1, string &s2) {
    string temp = s1;
    s1 = s2;
    s2 = temp;
}
string lowercase(string line2){
    string line3="";
    
    for(int i=0; line2[i]!='\0' ;i++ ){
        
            if(line2[i]>='A' && line2[i]<='Z'){
                line2[i]=line2[i]+32;
                
            }
            line3 +=line2[i];
         }
    return line3;
}

int flipAndReverseLines() {
    string str;
	int count=0;
    
    cout<< "Input file name? " ;
    getline(cin,str);
   
    ifstream file;
     
    string line1, line2, p;

    file.open(str);
    while(!file) {
		cout<<"Unable to open that file.  Try again."<< endl;
        cout<< "Input file name? " ;
        getline(cin,str);
        file.open(str); 
    }
    
        
       cout<< endl;
        while (getline(file, line1) && getline(file, line2)) {
            count +=2;
            p = line1;
            
            line1 = rev(line1);
            line2 = rev(line2);
            swap(line1, line2);

           
        for(int i=0; line1[i]!='\0' ;i++ ){ 
            if(count%2==0){
            if(line1[i]>='a' && line1[i]<='z'){
                line1[i]=line1[i]-32;
            }
            }
        }
            
            line2 = lowercase(line2);
            
            cout << line1 << endl;
            cout << line2 << endl;
     
        }
        
		
	
    if(line1 != p) {
        for(int i=0; line1[i]!='\0' ;i++ ){  
		if(line1[i]>='a' && line1[i]<='z'){
                line1[i]=line1[i]-32;
            }
        }
        line1 = rev(line1);
        cout << line1 << endl;
	}
    
    
    
    int lines=count;
    return lines;
}
