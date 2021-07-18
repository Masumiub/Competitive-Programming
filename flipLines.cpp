void flipLines(string filename){
	string x, y,p;
	int i = 0;
	ifstream file;
	file.open(filename);
	if (!file) {

		cout<<"Unable to open input file \""<<filename<<"\"!"<<endl;
		return;
	}
	while (getline(file, x)&& getline(file, y)) {
		i = 0;
		p = x;
			while (y[i] != '\0') {
				if (y[i] >= 'a' && y[i] <= 'z') {
					y[i] = y[i] - 32;
				}
				i++;
			}
		 i = 0;
		while (x[i] != '\0') {
			if (x[i] >= 'A' && x[i] <= 'Z') {
				x[i] = x[i] + 32;
			}
			i++;
		}
		
		cout << y << endl;
		cout << x << endl;
	}
	if (x != p) {
		i = 0;
		while (x[i] != '\0') {
			if (x[i] >= 'a' && x[i] <= 'z') {
				x[i] = x[i] - 32;
			}
			i++;
		}
		cout << x << endl;
	}
	
    
}
