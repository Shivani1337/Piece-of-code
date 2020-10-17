// C++ implementation of TRIE datastructure with search function

#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
    public:
    bool isEnd;
    unordered_map<char,TrieNode *> children;
    TrieNode()
    {
        isEnd=false;
        children = unordered_map<char,TrieNode *>();
    }
};

void insert(TrieNode* root, string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(root->children.find(s[i])==root->children.end())
        {
            root->children[s[i]] = new TrieNode();
        }
        root=root->children[s[i]];
    }
    root->isEnd = true;
}

bool search(TrieNode* root, string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(root->children.find(s[i])==root->children.end())
        {
            return false;
        }
        root=root->children[s[i]];   
    }
    return root->isEnd;
}

int main() 
{
  int i,n,t;
  string s;
  cout<<"Enter the number of strings to be inserted into Trie: ";
  cin>>n;
  TrieNode* root = new TrieNode();
  for(i=0;i<n;i++)
  {
      cout<<"Enter String "<<i+1<<": ";
      cin>>s;
      insert(root,s);
  }
  cout<<"Enter a string to search: ";
  cin>>s;
  cout<<search(root,s);
  return 0;
}
