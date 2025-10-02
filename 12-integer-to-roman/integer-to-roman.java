class Solution {
    public String intToRoman(int num) {
       StringBuilder hello = new StringBuilder();
       String arr1[] ={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
       int arr2[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
       for(int i=0;i<13;i++){
        while(num>=arr2[i]){
            hello.append(arr1[i]);
            num-=arr2[i];
        }
       }
    return hello.toString();
    }
}