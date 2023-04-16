int countingValleys(int steps, char* path) {
    int n=0,cnt=0,x;
        for(int i=0;i<steps;i++){
            x=n;
            if(path[i]=='D'){
                n--;
            }
            else{
                n++;
            }
            if(x<0 && n==0){
                cnt++;
            }
        }
    return cnt;
}