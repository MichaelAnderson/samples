// mergesort
// you can declare merge array b as a global to match array a in size
void mergesort(int a[], int l, int r)
{
   int b[1000001];
   int i, j, k, m;
   if (r > l)
   {
      m = (l + r)/2;
      mergesort(a, l, m);
      mergesort(a, m+1, r);
      for (i=m+1; i>1; i--)  b[i-1] = a[i-1]; // copy left half
      for (j=m; j<r; j++)  b[r+m-j] = a[j+1]; // copy right half backwards
      for (k=1; k<=r; k++)
         a[k] = (b[i]<b[j])? b[i++] : b[j--]; // merge back into a
   }
}
