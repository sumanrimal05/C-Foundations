typedef struct BlockMeta {
  size_t size;        // Size of the block
  int free;           // Free/allocated flag
  struct BlockMeta *next;   //Next block in the list
};