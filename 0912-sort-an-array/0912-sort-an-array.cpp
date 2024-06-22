class Solution {
public:
   
  void mergeSort(vector<int>& nums, int low, int high){
        if(low <  high){
           int mid=low+(high-low)/2;
           mergeSort(nums,low,mid);
           mergeSort(nums,mid+1,high);
           merge(nums,low,mid,high);
        }
        
    }
 void merge(vector<int> &nums, int low, int mid, int high) {
      vector<int>temp;
      int left=low,right=mid+1;
      while(left <= mid && right <= high){
          if(nums[left] <= nums[right]){
              temp.push_back(nums[left]);
              left++;
            }
          else{
              temp.push_back(nums[right]);
              right++;
            }
        }
        while(left <= mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right <= high){
            temp.push_back(nums[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
     
    }
    vector<int> sortArray(vector<int>& nums) {
       /* priority_queue<int,vector<int>,greater<int>>minh;
        vector<int>output;
        int n=nums.size();
        for(int i=0;i<n;i++){
            minh.push(nums[i]);
        }
       while(minh.size()>0){
           output.push_back(minh.top());
           minh.pop();
       }
       return output;*/
       //Selection Sort
      /* int n=nums.size();
       for(int i=0;i<(n-1);i++){
          int minIndex=i;
           for(int j=i+1;j<n;j++){
               if(nums[minIndex]>nums[j]){
                 minIndex=j; 
               }
           }
             //swap(nums[minIndex],nums[i]);
                 int temp=nums[minIndex];
                 nums[minIndex]=nums[i];
                 nums[i]=temp;
       }
       return nums;*/
      /* Bubble Sort
      int n=nums.size();
      for(int i=0;i<(n-1);i++){
          int swapped=false;
          for(int j=0;j<(n-1-i);j++){
              if(nums[j]>nums[j+1]){
                 // swap(nums[j],nums[j+1])
                 int temp=nums[j];
                 nums[j]=nums[j+1];
                 nums[j+1]=temp;
                 swapped=true;
              }
          }
          if(swapped==false){
              break;
          }
      }
      return nums;*/
      //Merge Sort
        mergeSort(nums, 0, nums.size()-1);
        return nums; 
       
    }
};