+#include <iostream>
+using namespace std;
+class node
+{
+  public:
+   int number;
+   node *next;
+};
+bool Empty(node *head);
+void add_node(node *&head,node *&tail,int number);
+void insert_node(node *&head,node *&tail,int number);
+void delete_node(node *&head,node *&tail);
+void display(node*ak);
+bool Empty(node *head)
+{
+    if(head == NULL)
+     return true;
+    else
+     return false;
+}
+void add_node(node*&head,node*&tail,int number)
+{
+    node *temp = new node;
+    temp->number = number;
+    temp->next = NULL;
+    head = temp;
+    tail = temp;
+
+}
+void insert_node(node*&head,node*&tail,int number)
+{
+    if(Empty(head))
+     add_node(head,tail,number);
+    else
+    {
+     node*temp = new node;
+     temp->number = number;
+     temp->next = NULL;
+     tail->next=temp;
+     tail=temp;
+    }
+}
