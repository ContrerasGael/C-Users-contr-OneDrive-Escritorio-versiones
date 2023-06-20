double suma(const double a[], const int n){
	int i;
	double s = 0.0;
	
	for (i = 0; i < n; i++) {
		s += a[i];
	}
	return s;
}
