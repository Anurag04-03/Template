	int left = 0;
	int right = nums.size() - 1;
	int ans = nums.size();
	
	while(left <= right ){
	    int mid = left + (right - left )/2;
	    if(condition_satisfied)
	    {
	        ans = mid;
	        right = mid - 1;
	    }
	    else
	    {
	        left = mid + 1;
	        
	    }

}
     return ans;

     // That code template u just saw is used to find out first point in an array or
     //  series where a condition was satisfied and that condition can be it being greater then target 
     // or it being odd or it being even or legit any condition , 