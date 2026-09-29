#ifndef NAND_H
#define NAND_H

#define PAGE_SIZE 16

typedef struct {
    unsigned char data[PAGE_SIZE];
    int is_written;
} Page;

#endif