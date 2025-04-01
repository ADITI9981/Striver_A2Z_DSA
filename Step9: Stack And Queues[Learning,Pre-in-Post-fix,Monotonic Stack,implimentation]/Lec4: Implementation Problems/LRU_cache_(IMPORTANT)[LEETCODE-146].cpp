class Node {
  public:
    int key;
    int val;
    Node *next;
    Node *prev;

    Node(int k,int v) {
        key=k;
        val=v;
        this->next = NULL;
        this->prev = NULL;
    }
};
class LRUCache {   
public:
    int capacity;
    map<int,Node*> mpp;
    Node*head;
    Node*tail;

    void deleteNode(Node*node){
        node->prev->next=node->next;
        node->next->prev=node->prev;
    }
    void insertNode(Node*node){
        node->next=head->next;
        node->prev=head;
        head->next->prev=node;
        head->next=node;
    }

    LRUCache(int capacity) {
        this->capacity=capacity;
        head=new Node(-1,-1);
        tail=new Node(-1,-1);
        head->next=tail;
        tail->prev=head;

    }
    
    int get(int key) {
        if(mpp.find(key) != mpp.end()){
            Node*node=mpp[key];
            deleteNode(node);
            insertNode(node);
            return node->val;
        }
        else{
            return -1;
        }
    }
    
    void put(int key, int value) {
        if(mpp.find(key) != mpp.end()){
            Node*node=mpp[key];
            node->val=value;
            deleteNode(node);
            insertNode(node);
        }
        else{
            if(mpp.size()==capacity){
                Node*node=tail->prev;
                mpp.erase(node->key);
                deleteNode(node);
                delete node;
            }
            Node*node=new Node(key,value);
            mpp[key]=node;
            insertNode(node);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
