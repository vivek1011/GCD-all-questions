to calculate what gcd comes in how many number of subsets of the array 
// subset gcd adobe hackathon 
// https://www.hackerrank.com/contests/adobe-hackathon/challenges/bokam-and-his-gcd

to calculate what maximum gcd in array can be formed by using any of the (a[i] , a[j] ) pair for i < j 
for(i = MAX ; i>=1; i--) // what gcd can be formed
{
  int cnt =0; 
  for(j = i ; j<=MAX; j+=i) // counting the frequencies of all the elements.
  {
  cnt+= frequency[j];
  }
  if(cnt>=2)
  { 
    cout<<i<<endl; // maximum possible gcd. 
    return 0 ;
  }
}

