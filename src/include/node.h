



typedef struct Node {

    int frequency;
    char letter;
    struct Node* left;
    struct Node* right;
    

} Node;




Node* createNode(char);