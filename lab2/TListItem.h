#ifndef TLISTITEM_H
#define TLISTITEM_H

#include "rectangle.h"

class TListItem
{
public:
    TListItem(const Rectangle &obj);

    Rectangle GetFigure() const;
    TListItem* GetNext();
    TListItem* GetPrev();
    void SetNext(TListItem *item);
    void SetPrev(TListItem *item);
    friend std::ostream& operator<<(std::ostream &os, const TListItem &obj);

    virtual ~TListItem(){};

private:
    Rectangle item;
    TListItem *next;
    TListItem *prev;
};

#endif
