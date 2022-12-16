class MyQueue {
public:
MyQueue() {

}
stack<int> s;
void push(int x) {
  s.push(x);
}

int pop() {
  if(s.empty()){
      return -1;
  }
  int x = s.top();
  s.pop();  
  if(s.empty()){
      return x;
  }
  int item = pop();
  s.push(x);
  return item;
}

int peek() {
  if(s.empty()){
    return -1;
  }  
  int x = s.top();
  s.pop();  
  if(s.empty()){
      s.push(x);
      return x;
  }
  int item = peek();
  s.push(x);
  return item;        
}

bool empty() {
  if(s.size()==0){
      return true;
  }
  return false;
}
};