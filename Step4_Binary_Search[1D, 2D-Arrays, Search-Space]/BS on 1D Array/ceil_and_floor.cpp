pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int low=0;
	int high=n-1;
	int floor=-1;
	int ceil=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(a[mid]<=x){
			floor=a[mid];
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	low=0;high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(a[mid]>=x){
			ceil=a[mid];
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	if (ceil == -1 && (high < 0 || a[high] < x)) {
            ceil = -1;
        }
	else if(floor == -1 && a[low]>x){
		floor =-1;
	}
	return {floor,ceil};
}
