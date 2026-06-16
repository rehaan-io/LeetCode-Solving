class Solution {
public:
    double myPow(double x, int n) {
        long long j = n;
        if(n<0){
            j = -j;
        }
        double y = 1;
        double i = 0;
        double l = 0;
        while(i<=j){

            if(i==0){
                y = 1;
                i = 1;
            }else if(i==1){
                y=x;
                i=2;
            }else{
                y = y*y;
                l = i;
                i = i*2;
            }
        
        }
        long long u;
        if((n%2)==0){
            u = j;
        }else{
            u = j-1;
        }
        
        if(l!=u){
            long long req = u-l;
            for(int o = 0; o<req; o++){
                y = y*x;
            }
        }
        if((n%2)!=0){
            if(j==1){
                y = x;
            }else{
                y=y*x;
            }
            
        }else{
            y = y;
        }
        if(n<0){
            return (1/y);
        }else{
            return (y);
        } 
    }
};