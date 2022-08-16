#include<iostream>
#include<queue>
using namespace std;
const int N=1e4+5;
int n,x;
int main(){
    scanf("%d",&n);
    priority_queue<int,vector<int>,greater<int>> heap;
    for(int i=0;i<n;i++){
        scanf("%d",&x); 
        heap.push(x);
    }
    int ans=0;
    while(heap.size()>1){
        int a=heap.top();
        heap.pop();
        int b=heap.top();
        heap.pop();
        ans+=a+b;
        heap.push(a+b);
    }
    printf("%d",ans);
    return 0;
    
}
