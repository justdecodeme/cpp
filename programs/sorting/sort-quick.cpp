void quickSort(int intput[], int ) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
   int p,temp, i, j;
    int l = 0;
   if(l<u)
   {
   p=a[l];
   i=l;
   j=u;
    while(i<j)
   {
      while(a[i] <= p && i<j )
	 i++;
      while(a[j]>p && i<=j )
	   j--;
      if(i<=j)
      {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;}
  }
  temp=a[j];
  a[j]=a[l];
  a[l]=temp;
  cout <<"\n";
  for(i=0;i<10;i++)
  cout <<a[i]<<" ";
  quickSort(a,l,j-1);
  quickSort(a,j+1,u); 
}