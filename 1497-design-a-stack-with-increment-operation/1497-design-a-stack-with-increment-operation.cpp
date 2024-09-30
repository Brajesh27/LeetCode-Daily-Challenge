class CustomStack {
public:
     int PopElement = 0;
     int n;
     vector<int>arr;
    CustomStack(int maxSize) {
          n = maxSize;
          arr.resize(n);
    }
    
    void push(int x) {
        if(PopElement<n){
            arr[PopElement] = x;
            PopElement++;
        }
    }
    
    int pop() {
        if(PopElement > 0){
        PopElement--;
        return arr[PopElement];
        }
        return -1;
    }
    
    void increment(int k, int val) {
        for(int i =0;i<min(k, PopElement);i++){
            arr[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */