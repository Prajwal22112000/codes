class binarytree{
    class node{
        int key;
        node left, right;
        node(int data){
            key = data;
            left = right = null;
        }
    }
    node root;
    binarytree(){
        root = null;
    }
    binarytree(int data){
        root = new node(data);
    }
    public void insertBST(int key){
        root = insert(root, key);
    }
    public node insert(node root, int key){
        if(root == null){
            System.out.println("function called");
            root = new node(key);
        }
        else if(key < root.key){
            root.left = insert(root.left, key);
        }
        else if(key > root.key){
            root.right = insert(root.right, key);
        }
        else if(key == root.key){
            System.out.println("key already exist in the given BST");
        }
        return root;
    }
    public void inorderBST(){
        System.out.println("inorder traversal method called");
        inorder(root);
    }
    public void inorder(node root){
        if(root != null){
            inorder(root.left);
            System.out.println(root.key);
            inorder(root.right);
        }
    }
    public void preorderBST(){
        System.out.println("preorder traversal method called");
        preorder(root);
    }
    public void preorder(node root){
        if(root != null){
            System.out.println(root.key);
            preorder(root.left);
            preorder(root.right);
        }
    }
    public void postorderBST(){
        System.out.println("postorder traversal method called");
        postorder(root);
    }
    public void postorder(node root){
        if(root != null){
            postorder(root.left);
            postorder(root.right);
            System.out.println(root.key);
        }
    }
}

/**
 * BSTrecursive
 */
public class BSTrecursive {
    public static void main(String[] args) {
            binarytree bt = new binarytree();
            bt.insertBST(10);
            bt.insertBST(20);
            bt.insertBST(50);
            bt.insertBST(5);
            bt.insertBST(9);
            bt.preorderBST();
            bt.inorderBST();
            bt.postorderBST();
    }
}