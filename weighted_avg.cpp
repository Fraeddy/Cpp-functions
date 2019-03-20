double f_wmeanc(NumericVector x, NumericVector y) {
   
   if(x.size() != y.size()) 
      return NA_REAL;
   
   if(x.size() == 1) 
      return x[0];
   
   int n = x.size();

   for(int i=0; i<n; i++){
      if(NumericVector::is_na(x[i])) {
        x[i]=0;
        y[i]=0;
      }
      if(NumericVector::is_na(y[i])) {
        y[i]=0;
        x[i]=0;
      }      
   }
   
   double res = 0;
   double y_sum = sum(y);
   
   for(int i=0; i<n; i++){
      y[i] = y[i] / y_sum;
   }
   
   for(int i=0; i<n; i++){
      res += x[i] * y[i];
   }

   return res;
}
