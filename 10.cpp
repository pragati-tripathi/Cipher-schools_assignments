#include<iostream>
#include<queue>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
		
		Node(int d){
		  this->data=d;
		  this->left=NULL;
		  this->right=NULL;
	}
	
};
void Inorder(Node* root){
	if(root==NULL){
		return;
	}
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}

void preorder(Node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(Node* root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

void levelOrderTraversal(Node* root){
	queue<Node*>q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		Node* temp= q.front();
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

Node* insertIntoBST(Node* &root, int d){
	//base case
	if(root==NULL){
		root=new Node(d);
		return root;
	}
	if(d > root -> data){
		//right part me insert krna ha
		root->right=insertIntoBST(root->right,d);
	}
	else{
		//left part me insert krna ha
		root->left=insertIntoBST(root->left,d);
	}
	return root;
}

Node* deleteFromBST(Node* root, int value){
	//base case
	if(root==NULL)
		return root;
		
	if(root->data == val){
		//0 child
		if(root->left==NULL && root->right==NULL){
			delete root;
			retrun NULL;
		}
		//1 child
		//left side
		if(root->left !=NULL && root->right ==NULL){
			Node* temp=root->left;
			delete root;
			return temp;
		}
		//right side
		if(root->left==NULL && root->right !=NULL){
			Node* temp=root->right;
			delete root;
			return temp;
		}
		//2 child
		if(root->left!=NULL && root->right!=NULL){
			int mini= minVal(root->right)-> data;
			root->data= mini;
			root->right=deleteFromBST(root->right, mini);
			return root;
		}
		
	}
	else if(root->data>val){
		root->left = deleteFromBST(root->left,val);
		return root;
	}
	else{
		root->right = deleteFromBST(root->right,val);
		return root;
	}
}

void takeInput(Node* &root){
	
	int data;
	cin>>data;
	
	while(data != -1){
		root=insertIntoBST(root,data);
		cin>>data;
	}
}

int main(){
	Node* root = NULL;
	
	cout<<"Enter data to create BST"<<endl;
	takeInput(root);
	
	cout<<"printing the BST"<<endl;
	levelOrderTraversal(root);
	
	//deletion
	root=deleteFromBST(root,30);
	
	cout<<"Printing Inorder"<<endl;
	Inorder(root);
	
	cout<<endl<<"Printing preorder"<<endl;
	preorder(root);
	
	cout<<endl<<"Printing postorder"<<endl;
	postorder(root);
	
	return 0;
	
}