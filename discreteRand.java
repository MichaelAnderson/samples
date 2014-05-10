class discreteRand {
       
  private int lo;
  private int hi;
  
  public discreteRand() {
          lo = 0;
          hi = 0;
  }
  
  public discreteRand(int low, int high) {
          lo=low;
          hi=high;
  }
  
  public void setDiscreteRand(int low, int high) {
  	  lo = low;
    	hi = high;
  }
  
  public int getDiscreteRand() {
          int rng = hi - lo + 1;
          return ((int)(Math.random() * rng) + lo);
  }

}
