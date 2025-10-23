#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* left;
		node* right;
	
	node(int d){
		this->data = d;
		this->left = NULL;
		this->right=NULL;
	}
};
node* create(node* root){  // It  is a "preoder" type creation of the TREE
// here we are just taking the one ditections value at a time , either it is left then right 
	cout<<"Enter data to insert: ";
	int data;
	cin>>data;
	root = new node(data);
	
	if(data == -1){
		return NULL;
	}
	
	cout<<"Enter the data for left of "<<data<<endl;
	root->left = create(root->left);
	cout<<"Enter the data right of "<<data<<endl;
	root->right=create(root->right);
	
	return root;
}
void buildTreeByLevelOrder(node* &root){
	queue<node*>q;
	cout<<"Enter the Root data: ";
	int data;
	cin>>data;
	root = new node(data);
	q.push(root);
	
	while(!q.empty()){
		
		node* temp = q.fornt();
		q.pop();
		
		cot<<"Enter the left for : "<<temp->data<<endl;
		int leftdata;
		cin>>leftdata;
		if(leftdata!=-1){
			temp->left = new node(leftdata);
			q.push(temp->left);
		}
		
		
		cot<<"Enter the right for : "<<temp->data<<endl;
		int rightdata;
		cin>>rightdata;
		if(rightdata!=-1){
			temp->right = new node(rightdata);
		    q.push(temp->right;
		}
		
	}
}
void levelorder(node *root){    // this function is just to print the data level by level
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
	      node* temp = q.front();
	      q.pop();
	      
	      if(temp == NULL){
		  cout<<endl;
	      	   if(!q.empty()){
	      	   	    q.push(NULL);
				}
		  }
		  
		  else{
		  	cout<<temp->data<<" ";
		  	if(temp->left){
	      	q.push(temp->left);
		  }
		  if(temp->right){
		  	q.push(temp->right);
		  }
		  	
		  }
	      
	}
	
}

void revrselevelorder(node* root){
	  queue<node*>q;
	  stack<node*>st;
	  q.push(root);
	  
	
	  
	  while(!q.empty()){
	  	 node* temp = q.front();
	  	 st.push(q.front());
	  	 q.pop();
	  	 if(temp->left){
	  	 	  st.push(temp->left);
	  	 	  q.push(temp->left);
		}
		if(temp->right){
	  	 	  st.push(temp->right);
	  	 	  q.push(temp->right);
		}
	  
	  	 
	  }
	  
	  while(!st.empty()){
	  	cout<<st.top()<<" ";
	  	st.pop();
	  }
}

int main(){
	node* root = NULL;
	
	root = create(root);
	levelorder(root);
	revrselevelorder(root);
	
	
	
}












