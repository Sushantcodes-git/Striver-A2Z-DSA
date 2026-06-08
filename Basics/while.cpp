class Solution {
    public:
    int whileLoop(int d) {
        // Your code goes here

        int sum =0;
        int num =d;
        int count =0;

        while(count<50) {
            sum +=num;
            num+=10;
            count+=1;
        }  

        return sum;
    }
};