#ifndef TLIST_H
#define TLIST_H

#include <cstdint>
#include "rectangle.h"
#include "TListItem.h"

class TList
{
public:
    TList();
    void Push(Rectangle &obj);
    const bool IsEmpty() const;
    uint32_t GetLength();
    Rectangle Pop();
    friend std::ostream& operator<<(std::ostream &os, const TList &list);
    virtual ~TList();

private:
    uint32_t length;
    TListItem *head;

    void PushFirst(Rectangle &obj);
    void PushLast(Rectangle &obj);
    void PushAtIndex(Rectangle &obj, int32_t ind);
    Rectangle PopFirst();
    Rectangle PopLast();
    Rectangle PopAtIndex(int32_t ind);
};

#endif
