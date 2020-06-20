class Node{
  public:
    Node* child[26];
    bool EOW;
    Node(bool E =false){
        memset(child,0,sizeof(child));
        EOW = E;
    }
};
class Trie {
public:
    Node *root;
    /** Initialize your data structure here. */
    Trie() {
        root = new Node();
        
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Node *n = root;
        for(int i=0;i<word.length();i++){
            if(n->child[word[i]-'a']==NULL)
                n->child[word[i]-'a'] = new Node();
            n = n->child[word[i]-'a'];
        }
        n->EOW = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Node *p = look(word);
        if(p!=NULL and p->EOW)return true;
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Node *p = look(prefix);
        if(p!=NULL)return true;
        return false;
    }
    Node* look(string word){
        Node* p = root;
        for(int i=0;i<word.length() and p!=NULL;i++){
            p = p->child[word[i]-'a'];
        }
        return p;
    }
};
