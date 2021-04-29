#define HOMEWORK6-TREE_H_INCLUDED

#define MAX 10
typedef struct treenode {

char* username;
char* password;


struct treenode* leftchild;
struct treenode* rightchild;
unsigned int depth;
} node;

void erase(node* pos);
node* insert(char u*,char *p, node *pos, int d);
void alpha(node* position);
void delete(node* position, char* u, char* p, int* n);

