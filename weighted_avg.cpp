double f_wmeanc(NumericVector x, NumericVector y) {
   
   if(x.size() != y.size()) return NA_REAL;
   
   int n = x.size();
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
