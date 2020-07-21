<p align="center">
     <p align="center">
          <img src="https://github.com/llanojs/Readme_template/blob/master/images/binary_tree.png" width="1100"/>
     </p>
     <p align="center">
          <a href="https://github.com/ellerbrock/open-source-badges/">
               <img alt="bash" src="https://badges.frapsoft.com/bash/v1/bash.png?v=103" target="_blank" />
          </a>
          <a href="https://github.com/llanojs/binary_trees/commits/master">
               <img alt="commit_activity" src="https://img.shields.io/github/commit-activity/y/llanojs/binary_trees" target="_blank" />
          </a>
          <a href="https://github.com/llanojs/binary_trees/graphs/contributors">
               <img alt="contributors" src="https://img.shields.io/github/contributors/llanojs/binary_trees" target="_blank" />
          </a>
          <a href="https://github.com/llanojs/binary_trees" target="_blank">
               <img alt="code-size" src="https://img.shields.io/github/languages/code-size/llanojs/binary_trees" />
          </a>
          <a href="https://github.com/llanojs/binary_trees" target="_blank">
               <img alt="Documentation" src="https://img.shields.io/badge/documentation-yes-brightgreen.svg" />
          </a>
     </p>
</p>

<h1 align="center">0x1D. C - Binary trees</h1>

<h2 align="center">Low-level programming & Algorithm ― Data structures and Algorithms </h2>

# General

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree


---

# Data structures

Use the following data structures and types for binary trees. Don’t forget to include them in your header file.

Basic Binary Tree
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

Binary Search Tree
```
typedef struct binary_tree_s bst_t;
```
AVL Tree
```
typedef struct binary_tree_s avl_t;
```
Max Binary Heap
```
typedef struct binary_tree_s heap_t;
```

Print function

Functions to print binary trees in a pretty way

```
                           .----------------------(006)-------.
                      .--(001)-------.                   .--(008)--.
                 .--(-02)       .--(003)-------.       (007)     (009)
       .-------(-06)          (002)       .--(005)
  .--(-08)--.                           (004)
(-09)     (-07)
```
> [Source](https://github.com/holbertonschool/0x1C.c)

> [Original code](http://stackoverflow.com/a/13755911/5184480)
---
### :file_folder: Files / Directories 

#|File|Description
---|---|---
1|[README.md](./README.md)|...
2|[0-binary_tree_node.c ](./0-binary_tree_node.c)|...
3|[1-binary_tree_insert_left.c](./1-binary_tree_insert_left.c)|...
4|[2-binary_tree_insert_right.c](./2-binary_tree_insert_right.c)|...
5|[3-binary_tree_delete.c](./3-binary_tree_delete.c)|...
6|[4-binary_tree_is_leaf.c](./4-binary_tree_is_leaf.c)|...
7|[5-binary_tree_is_root.c](./5-binary_tree_is_root.c)|...
8|[6-binary_tree_preorder.c](./6-binary_tree_preorder.c)|...
9|[7-binary_tree_inorder.c](./7-binary_tree_inorder.c)|...
10|[8-binary_tree_postorder.c](./8-binary_tree_postorder.c)|...
11|[9-binary_tree_height.c](./9-binary_tree_height.c)|...
12|[10-binary_tree_depth.c](./10-binary_tree_depth.c)|...
13|[11-binary_tree_size.c](./11-binary_tree_size.c)|...
14|[12-binary_tree_leaves.c](./12-binary_tree_leaves.c)|...
15|[13-binary_tree_nodes.c](./13-binary_tree_nodes.c)|...
16|[14-binary_tree_balance.c](./14-binary_tree_balance.c)|...
17|[15-binary_tree_is_full.c](./15-binary_tree_is_full.c)|...
18|[16-binary_tree_is_perfect.c](./16-binary_tree_is_perfect.c)|...
19|[17-binary_tree_sibling.c](./17-binary_tree_sibling.c)|...
20|[18-binary_tree_uncle.c](./18-binary_tree_uncle.c)|...

---
# Documentation
* [Binary Tree](https://en.wikipedia.org/wiki/Binary_tree)
* [Data Structure & Algorithms - Tree Traversa](https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm)
* [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
* [Youtube - Data structures: Binary Tree](https://www.youtube.com/watch?v=H5JubkIy_p8)
* [Different Types of Binary Tree with colourful illustrations](https://towardsdatascience.com/5-types-of-binary-tree-with-cool-illustrations-9b335c430254)

---
<p align="center">
     <h2 align="center">By Juan Sebastian Llano Gallego</h2>
      <p align="center">
        <a href="https://twitter.com/llanoJS" target="_blank">
            <img alt="twitter_page" src="https://raw.githubusercontent.com/EckoJuan/Readme_template/master/images/twitter.png" style="float: center; margin-right: 10px" height="50" width="50">
        </a>
        <a href="https://www.linkedin.com/in/juansllano/" target="_blank">
            <img alt="linkedin_page" src="https://raw.githubusercontent.com/EckoJuan/Readme_template/master/images/linkedin.png" style="float: center; margin-right: 10px" height="50"  width="50">
        </a>
        <a href="https://medium.com/@juanllano93" target="_blank">
            <img alt="medium_page" src="https://raw.githubusercontent.com/EckoJuan/Readme_template/master/images/medium.png" style="float: center; margin-right: 10px" height="50" width="50">
        </a>
      </p>
     <h2 align="center">Yesid A. López V.</h2>
      <p align="center">
        <a href="https://twitter.com/Yesid4Code" target="_blank">
            <img alt="twitter_page" src="https://raw.githubusercontent.com/EckoJuan/Readme_template/master/images/twitter.png" style="float: center; margin-right: 10px" height="50" width="50">
        </a>
        <a href="https://www.linkedin.com/in/yesid4code-/" target="_blank">
            <img alt="linkedin_page" src="https://raw.githubusercontent.com/EckoJuan/Readme_template/master/images/linkedin.png" style="float: center; margin-right: 10px" height="50"  width="50">
        </a>
      </p>
    
</p>

## Made with :heart: in
<img src="https://www.holbertonschool.com/holberton-logo.png"
     alt="Flow chart"
     style="float: left; margin-right: 10px;">

**Holberton School - Colombia**
**Foundations - Low-level programming & Algorithm ― Data structures and Algorithms**

**July, 2020.**

