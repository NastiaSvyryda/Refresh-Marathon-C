double mx_pow(double n, unsigned int pow);

double mx_pow(double n, unsigned int pow){
    double num = 1;
    
    if(pow == 0) return 1;
    for(unsigned int i = 1; i <= pow; i++){ 
      	num *= n;
    }    
    return num;
}
