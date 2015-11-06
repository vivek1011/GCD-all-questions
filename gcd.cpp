to calculate what gcd comes in how many number of subsets of the array 
// subset gcd adobe hackathon hint: gcd g = 2^(count of all the multiples of g ) - 1 - summation of all front multiples ans
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

//sum of euler totient function upto a particular n 
for(i = 2 ; i <= max; i++)
{
  if(dp[i]==0)
  {
    dp[i] = i-1;
    for(j = i*2 ; j<= max; j+=i)
    {
      if(dp[j]==0)
      dp[j] = j ;
      dp[j] = dp[j]/i*(i-1);
    }
  }
}
// dp[i] will calculate the euler totient for n = i ; 

//for calculating sum of gcd(k , n) for k = 1 to n ;
// pilais theorem . 
sum = d*phi(n/d); where d is every divisor of n ; 
// gcd extreme spoj 

Revise - codechef november challenge
sum(n/__gcd(i , n)) for every i = 1 to i = n ;
remember : sumoflcm(i , n ) for i = 1  to i = n is n*(a[n]+1)/2 ; 
where a[k*l] = a[k]*a[l] if gcd(k , l )=1; and a[prime ^ exponent] = (p ^ (2*e + 1) + 1)/(p+1); 
for example a[3] = 7
