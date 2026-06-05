typedef unsigned int   uint;
typedef unsigned short ushort;
typedef unsigned char  uchar;

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int  uint32;
typedef unsigned long uint64;

typedef uint64 pde_t;

struct page {
    struct page *next, *prev;
    pagetable_t  pagetable;
    uint64       vaddr;
};
