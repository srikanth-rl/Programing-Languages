import  java.util.*;
class two_Sum {
    public static int[] TwoSum(int[] nums, int target) {
        Map<Integer,Integer> map = new HashMap<>();
        for(int i=0;i<nums.length;i++){
            if(map.containsKey(nums[i]))
                return new int[]{map.get(nums[i]),i};
            else map.put(target - nums[i],i);
        }
        return new int[]{-1,-1};
    }
    public static void main(String[]sri){
        System.out.println("Answer is in the index: "+Arrays.toString(two_Sum.TwoSum(new int[]{3,2,4},6)));
    }    
}