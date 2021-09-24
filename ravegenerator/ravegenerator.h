#include "../text/text.h"

int rave_cmp (const void *ptr1, const void *ptr2)
{
    if (!ptr1 || !ptr2)
        return 1;

    Line ln1 = *( (const Line *) ptr1); 
    Line ln2 = *( (const Line *) ptr2); 
}
