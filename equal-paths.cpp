#include "equal-paths.h"
using namespace std;


// You may add any prototypes of helper functions here
int eph(Node * root, int cnt, int prevcnt){
        int cnt = 0;
      int prevcnt = 0;
     if(root->left == NULL && root->right == NULL){
      if(cnt  != prevcnt){
        return false;
      }
      prevcnt = cnt;
      cnt = 0;
      return prevcnt;
     }
     else{
       cnt++;
       if(root->right != NULL){
         equalPaths(root->right);
       }
       if(root->left != NULL){
       equalPaths(root->left);
       }
     }
}


bool equalPaths(Node * root)
{
  //Add your code below
  
           int cnt = 0;
      int prevcnt = 0;
     if(root->left == NULL && root->right == NULL){
      if(cnt  != prevcnt){
        return false;
      }
      prevcnt = cnt;
      cnt = 0;
      return prevcnt;
     }
     else{
       cnt++;
       if(root->right != NULL){
         equalPaths(root->right);
       }
       if(root->left != NULL){
       equalPaths(root->left);
       }
     }
 
    return true;
}

  
    



