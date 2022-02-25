#include<bits/stdc++.h>

std:: vector<int> twoSum(std::vector<int>& nums, int target){

    // Two Sum 
    int i=0,j=nums.size()-1;
    std::sort(nums.begin(),nums.end());

    std::vector<int> vec;



    while(i<j){
        if(nums[i] + nums[j] ==  target){
            vec.push_back(i);
            vec.push_back(j);
            return vec;
        }else if(nums[i] +nums[j] > target){
            j--;
        }else{
            i++;
        }
    }

    // Alternate Solution


    /*
    
            vector<int> result;
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
        }
        
        return result;
    }
    
    
    
    
    
    */




 }
 
int main(){
    std::vector<int> vec1;
    std::vector<int> vec2= {2,7,11,15};
    int target = 9;

    vec1 = twoSum(vec2,target);
    for(auto i:vec1){
        std::cout<<vec1[i];
    }
}


